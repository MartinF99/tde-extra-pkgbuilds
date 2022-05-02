///////////////////////////////////////////////////////////////////////
// -------------------
// DeKorator window decoration for KDE
// -------------------
// Copyright (C) 2005  moty rahamim <moty.rahamim@gmail.com>
//
// Based on Example-0.8, some ideas and code have been taken from plastik and KCMicons
//
// Example window decoration for KDE
// Copyright (c) 2003, 2004 David Johnson <david@usermode.org>
//
// Plastik KWin window decoration
// Copyright (C) 2003-2005 Sandro Giessl <sandro@giessl.com>
//
// KCMicons for KDE
// Copyright (c) 2000 Antonio Larrosa <larrosa@kde.org>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; see the file COPYING.  If not, write to
// the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
// Boston, MA 02110-1301, USA.
///////////////////////////////////////////////////////////////////////

#if defined(HAVE_CONFIG_H)
# include "config.h"
#endif

#include <stdlib.h>
#include <unistd.h>

#include <tqfileinfo.h>
#include <tqlayout.h>
#include <tqlabel.h>
#include <tqpushbutton.h>

#include <kdebug.h>
#include <tdeapplication.h>
#include <kstandarddirs.h>
#include <kservice.h>
#include <tdelocale.h>
#include <ksimpleconfig.h>
#undef Unsorted
#include <kipc.h>

#include <tdelistview.h>
#include <kurlrequesterdlg.h>
#include <tdemessagebox.h>
#include <kprogress.h>
#include <kiconloader.h>

#include <tdeio/job.h>
#include <tdeio/netaccess.h>
#include <ktar.h>

#ifdef HAVE_LIBART
#include <ksvgiconengine.h>
#endif

#include <tqdir.h>
#include <tqpainter.h>
#include <tqregexp.h>

#include "themes.h"
#include <kurlrequester.h>


//////////////////////////////////////////////////////////////////////////////
// IconThemesConfig()
// ----------
//

IconThemesConfig::IconThemesConfig( TQWidget *parent, TDEListView *themesView /*, TQPushButton *removethemeBtn*/ )
{
    parent_ = parent;
    themesView_ = themesView;
    //removeThemeBtn_ = removethemeBtn;

    loadThemes();
}

//////////////////////////////////////////////////////////////////////////////
// ~IconThemesConfig()
// ----------
//

IconThemesConfig::~IconThemesConfig()
{}

//////////////////////////////////////////////////////////////////////////////
// iconThemeItem()
// ----------
//

TQListViewItem *IconThemesConfig::iconThemeItem( const TQString &name )
{
    TQListViewItem * item;
    for ( item = themesView_->firstChild(); item ; item = item->nextSibling() )
        if ( item->text( 0 )  == name ) return item;

    return 0L;
}

//////////////////////////////////////////////////////////////////////////////
// loadThemes()
// ----------
//


void IconThemesConfig::loadThemes()
{
    themesView_->clear();
    m_themeNames.clear();
    TQStringList themelist;
    TQString name;
    TQString place;
    TQStringList::Iterator it, itj;
    TQStringList themesDirs;

    // if no local deKorator folders
    if ( ! TQDir( TDEGlobal::dirs()->localtdedir()+TDEGlobal::dirs()->kde_default("data") ).exists( "deKorator" ) )
    {
        tqWarning( "no dirs, will make them..." );
        TDEIO::mkdir( TDEGlobal::dirs()->localtdedir()+TDEGlobal::dirs()->kde_default("data")+"deKorator/" );
        TDEIO::mkdir( TDEGlobal::dirs()->localtdedir()+TDEGlobal::dirs()->kde_default("data")+"deKorator/themes/" );
    }
    else
    {
        tqWarning( "exist" );
    }

    themesDirs = TDEGlobal::dirs() ->findDirs( "data", "deKorator/themes" ) ;

    for ( it = themesDirs.begin(); it != themesDirs.end(); ++it )
    {
        TQDir dir = TQDir( *it );
        themelist = dir.entryList( "*-theme" );

        for ( itj = themelist.begin(); itj != themelist.end(); ++itj )
        {
            place = *it;

            name = ( TQString ) * itj;

            themesView_->insertItem( new TQListViewItem( themesView_, name ) );

            m_themeNames.insert( name, place );
        }
    }
}

//////////////////////////////////////////////////////////////////////////////
// installNewTheme()
// ----------
//

void IconThemesConfig::installNewTheme()
{

    KURL themeURL = KURLRequesterDlg::getURL( TQString::null, parent_,
                    i18n( "Drag or Type Theme URL" ) );
    kdDebug() << themeURL.prettyURL() << endl;

    if ( themeURL.url().isEmpty() )
        return ;

    // themeTmpFile contains the name of the downloaded file
    TQString themeTmpFile;

    if ( !TDEIO::NetAccess::download( themeURL, themeTmpFile, parent_ ) )
    {
        TQString sorryText;
        if ( themeURL.isLocalFile() )
            sorryText = i18n( "Unable to find the deKorator theme archive %1." );
        else
            sorryText = i18n( "Unable to download deKorator theme archive;\n"
                              "please check that address %1 is correct." );
        KMessageBox::sorry( parent_, sorryText.arg( themeURL.prettyURL() ) );
        return ;
    }

    //
    TQStringList themesNames = findThemeDirs( themeTmpFile );
    if ( themesNames.isEmpty() )
    {
        TQString invalidArch( i18n( "The file is not a valid deKorator theme archive." ) );
        KMessageBox::error( parent_, invalidArch );

        TDEIO::NetAccess::removeTempFile( themeTmpFile );
        return ;
    }

    if ( !installThemes( themesNames, themeTmpFile ) )
    {
        //FIXME: make me able to know what is wrong....
        // TQStringList instead of bool?
        TQString somethingWrong =
            i18n( "A problem occurred during the installation process; "
                  "however, most of the themes in the archive have been installed" );
        KMessageBox::error( parent_, somethingWrong );
    }

    TDEIO::NetAccess::removeTempFile( themeTmpFile );

    loadThemes();

    TQStringList::Iterator cur = themesNames.at( 0 );

    TQListViewItem *item = iconThemeItem( *cur );
    themesView_->setSelected( item, true );
}

//////////////////////////////////////////////////////////////////////////////
// installThemes()
// ----------
//

bool IconThemesConfig::installThemes( const TQStringList &themes, const TQString &archiveName )
{
    bool everythingOk = true;
    TQString localThemesDir = TDEGlobal::dirs()->localtdedir()+TDEGlobal::dirs()->kde_default("data")+"deKorator/themes/";
    //
    KProgressDialog progressDiag( parent_, "themeinstallprogress",
                                  i18n( "Installing icon themes" ),
                                  TQString::null,
                                  true );
    progressDiag.setAutoClose( true );
    progressDiag.progressBar() ->setTotalSteps( themes.count() );
    progressDiag.show();

    KTar archive( archiveName );
    archive.open( IO_ReadOnly );
    kapp->processEvents();

    const KArchiveDirectory* rootDir = archive.directory();

    KArchiveDirectory* currentTheme;
    for ( TQStringList::ConstIterator it = themes.begin(); it != themes.end(); ++it )
    {
        progressDiag.setLabel(
            i18n( "<qt>Installing <strong>%1</strong> theme</qt>" )
            .arg( *it ) );
        kapp->processEvents();

        if ( progressDiag.wasCancelled() )
            break;

        currentTheme = dynamic_cast<KArchiveDirectory*>(
                           const_cast<KArchiveEntry*>(
                               rootDir->entry( *it ) ) );
        if ( currentTheme == NULL )
        {
            // we tell back that something went wrong, but try to install as much
            // as possible
            everythingOk = false;
            continue;
        }

        currentTheme->copyTo( localThemesDir + *it );
        progressDiag.progressBar() ->advance( 1 );
    }

    archive.close();
    return everythingOk;
}

//////////////////////////////////////////////////////////////////////////////
// findThemeDirs()
// ----------
//

TQStringList IconThemesConfig::findThemeDirs( const TQString &archiveName )
{
    TQStringList foundThemes;

    KTar archive( archiveName );
    archive.open( IO_ReadOnly );
    const KArchiveDirectory* themeDir = archive.directory();

    KArchiveEntry* possibleDir = 0L;
    KArchiveDirectory* subDir = 0L;

    // iterate all the dirs looking for an index.theme or index.desktop file
    TQStringList entries = themeDir->entries();
    for ( TQStringList::Iterator it = entries.begin(); it != entries.end(); ++it )
    {
        TQString name = ( TQString ) * it;
        TQRegExp rxp = TQRegExp( "*-theme", TRUE, TRUE );
        int i = name.contains( rxp );
        if ( !i )
        {
            continue;
        }

        possibleDir = const_cast<KArchiveEntry*>( themeDir->entry( *it ) );
        if ( possibleDir->isDirectory() )
        {
            subDir = dynamic_cast<KArchiveDirectory*>( possibleDir );
            if ( subDir && ( subDir->entry( "deco" ) != NULL && subDir->entry( "buttons" ) != NULL && subDir->entry( "masks" ) != NULL ) )
            {
                foundThemes.append( subDir->name() );
                //tqWarning( "found" );
            }
        }
    }

    archive.close();

    return foundThemes;
}

//////////////////////////////////////////////////////////////////////////////
// removeSelectedTheme()
// ----------
//

void IconThemesConfig::removeSelectedTheme()
{
    TQListViewItem * selected = themesView_->selectedItem();
    if ( !selected )
        return ;

    TQString question = i18n( "<qt>Are you sure you want to remove the "
                             "<strong>%1</strong> theme?<br>"
                             "<br>"
                             "This will delete the files installed by this theme.</qt>" ).
                       arg( selected->text( 0 ) );

    int r = KMessageBox::warningContinueCancel( parent_, question, i18n( "Confirmation" ), KStdGuiItem::del() );
    if ( r != KMessageBox::Continue ) return ;

    TQString delTheme = selected->text( 0 );
    TQString deldirStr = TDEGlobal::dirs()->localtdedir()+TDEGlobal::dirs()->kde_default("data") + "deKorator/themes/" + delTheme;
    TQDir dir = TQDir( deldirStr );
    dir.rename( deldirStr, deldirStr + "del" );

    TDEIO::del( KURL( deldirStr + "del" ) );

    loadThemes();
}

//////////////////////////////////////////////////////////////////////////////
// themeSelected()
// ----------
//

void IconThemesConfig::themeSelected( TQListViewItem *item, TQLabel *previewLabel, TQPushButton *btn )
{
    TQPixmap previewPix, topLeftCornerBg, leftButtonsBg, leftTitleBg, midTitleBg, rightTitleBg, rightButtonsBg, topRightCornerBg;
    TQPainter painter;
    int w, h, x;
    TQString dirName( m_themeNames[ item->text( 0 ) ] );

    if ( dirName.contains( "home" ) )
    {
        //tqWarning("true");
        btn->setEnabled( true );
    }
    else
    {
        btn->setEnabled( false );
        //tqWarning("false");
    }

    TQString dirNameStr = dirName + item->text( 0 ) + "/deco/" ;
    topLeftCornerBg.load( dirNameStr + "topLeftCornerBg.png" );
    leftButtonsBg.load( dirNameStr + "leftButtonsBg" );
    leftTitleBg.load( dirNameStr + "leftTitleBg.png" );
    midTitleBg.load( dirNameStr + "midTitleBg.png" );
    rightTitleBg.load( dirNameStr + "rightTitleBg.png" );
    rightButtonsBg.load( dirNameStr + "rightButtonsBg.png" );
    topRightCornerBg.load( dirNameStr + "topRightCornerBg.png" );

    w = topLeftCornerBg.width() + leftButtonsBg.width() + leftTitleBg.width() + midTitleBg.width() + rightTitleBg.width() + rightButtonsBg.width() + topRightCornerBg.width() + 8;
    h = midTitleBg.height() + 8;
    previewPix.resize( w, h );
    //tqWarning("%d",w);
    painter.begin( &previewPix );

    // paint outer rect
    painter.fillRect( 0, 0, w, h, TQColor( 20, 20, 20 ) );

    painter.setPen( TQColor( 60, 60, 60 ) );
    painter.drawRect( 0, 0, w , h );

    painter.setPen( TQColor( 80, 80, 80 ) );
    painter.drawRect( 1, 1, w - 2 , h - 2 );

    painter.setPen( TQColor( 180, 180, 180 ) );
    painter.drawLine( w - 1, 1, w - 1, h - 1 );
    painter.drawLine( 1, h - 1, w - 2, h - 1 );

    painter.setPen( TQColor( 150, 150, 150 ) );
    painter.drawLine( w - 2, 2, w - 2, h - 2 );
    painter.drawLine( 2, h - 2, w - 3, h - 2 );


    // paint deco tiles
    x = 4;
    painter.drawPixmap( x, 4, topLeftCornerBg );

    x += topLeftCornerBg.width();
    painter.drawPixmap( x, 4, leftButtonsBg );

    x += leftButtonsBg.width();
    painter.drawPixmap( x , 4, leftTitleBg );

    x += leftTitleBg.width();
    painter.drawPixmap( x, 4, midTitleBg );

    x += midTitleBg.width();
    painter.drawPixmap( x, 4, rightTitleBg );

    x += rightTitleBg.width();
    painter.drawPixmap( x, 4, rightButtonsBg );

    x += rightButtonsBg.width();
    painter.drawPixmap( x, 4, topRightCornerBg );

    painter.setPen( TQColor( 0, 0, 0 ) );
    painter.drawLine( 4, h - 5, w - 4 , h - 5 );

    painter.end();

    previewLabel->resize( w, h );
    previewLabel->setPixmap( previewPix );
}

//////////////////////////////////////////////////////////////////////////////
// setTheme()
// ----------
//

void IconThemesConfig::setTheme( KURLRequester *framesPath, KURLRequester *buttonsPath, KURLRequester *masksPath )
{
    TQListViewItem * selected = themesView_->selectedItem();
    if ( !selected )
        return ;

    TQString dirName( m_themeNames[ selected->text( 0 ) ] );

    TQString setTheme = selected->text( 0 );
    TQString setThemeStr = dirName + setTheme;

    framesPath->setURL( setThemeStr + "/deco" );
    buttonsPath->setURL( setThemeStr + "/buttons" );
    masksPath->setURL( setThemeStr + "/masks" );
}




#include "themes.moc"

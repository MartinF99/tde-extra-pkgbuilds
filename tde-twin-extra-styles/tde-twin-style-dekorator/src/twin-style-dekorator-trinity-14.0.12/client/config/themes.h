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

#ifndef ICONTHEMES_H
#define ICONTHEMES_H

#include <tdecmodule.h>
#include <tqmap.h>
#include <tdelistview.h>

class TQPushButton;
class DeviceManager;
class TQCheckBox;
class TQStringList;



class IconThemesConfig : public TQObject
{
    Q_OBJECT

public:
    IconThemesConfig( TQWidget *parent, TDEListView *themesView/*, TQPushButton *removethemeBtn*/ );
    virtual ~IconThemesConfig();

    void loadThemes();
    bool installThemes( const TQStringList &themes, const TQString &archiveName );
    TQStringList findThemeDirs( const TQString &archiveName );
    void themeSelected( TQListViewItem *item, TQLabel *preview, TQPushButton *btn );
    void installNewTheme();
    void removeSelectedTheme();
    void setTheme( KURLRequester *framesPath, KURLRequester *buttonsPath, KURLRequester *masksPath );

private:
    TQListViewItem *iconThemeItem( const TQString &name );
    TDEListView *themesView_;
    TQWidget *parent_;
    //TQPushButton *removeThemeBtn_;
    TQListViewItem *m_defaultTheme;
    TQMap <TQString, TQString>m_themeNames;
};

#endif // ICONTHEMES_H


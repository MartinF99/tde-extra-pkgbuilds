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


#ifndef DEKORATORCLIENT_H
#define DEKORATORCLIENT_H

#include <tqbutton.h>
#include <tqbitmap.h>
#include <tqlabel.h>
#include <tqlayout.h>
#include <tqpainter.h>
#include <tqtooltip.h>
#include <tqpixmap.h>
#include <tqapplication.h>
#include <tqtimer.h>
#include <tqcursor.h>

#include <kdecoration.h>
#include <kdecorationfactory.h>
#include <tdeconfig.h>
#include <tdeversion.h>
#include <tdeglobal.h>
#include <tdeglobalsettings.h>
#include <tdelocale.h>
#include <kiconeffect.h>
#include <kimageeffect.h>

#include "shadow.h"

class TQSpacerItem;
class TQPoint;

namespace DeKorator
{

class DeKoratorClient;

enum decoType {
    topLeftCorner = 0,
    leftButtons,
    leftTitle,
    midTitle,
    rightTitle,
    rightButtons,
    topRightCorner,
    topLeftFrame,
    midLeftFrame,
    buttomLeftFrame,
    leftButtomFrame,
    midButtomFrame,
    rightButtomFrame,
    topRightFrame,
    midRightFrame,
    buttomRightFrame,
    decoCount
};

enum buttonTypeAll {
    restore = 0,
    help,
    max,
    min,
    close,
    sticky,
    stickydown,
    above,
    abovedown,
    below,
    belowdown,
    shade,
    shadedown,
    menu,
    buttonTypeAllCount
};

enum ButtonType {
    ButtonHelp = 0,
    ButtonMax,
    ButtonMin,
    ButtonClose,
    ButtonMenu,
    ButtonSticky,
    ButtonAbove,
    ButtonBelow,
    ButtonShade,
    ButtonTypeCount
};

enum pixType {
    normal = 0,
    actCol,
    inActCol,
    orig,
    pixTypeCount
};

enum buttonState {
    regular = 0,
    hover,
    press,
    buttonStateCount
};

// DeKoratorFactory /////////////////////////////////////////////////////////////

class DeKoratorFactory: public KDecorationFactory
{
public:
    DeKoratorFactory();
    virtual ~DeKoratorFactory();
    virtual KDecoration *createDecoration( KDecorationBridge *b );
    virtual bool reset( unsigned long changed );
    static void colorizePixmap( TQPixmap *pix, TQColor col, TQString colorizeMethod );
    static bool initialized();
	TQBitmap topLeftCornerBitmap_, topMidBitmap_, topRightCornerBitmap_, buttomLeftCornerBitmap_, buttomMidBitmap_, buttomRightCornerBitmap_;

private:
    bool readConfig();
    void loadPixmaps();
    void colorizeDecoPixmaps( bool isActive );
    void colorizeButtonsPixmaps( bool isActive );
    void initPixmaps();
    void chooseRightPixmaps();
    void determineSizes();
    void prepareDecoWithBgCol();

private:

    static bool colorizeActFrames_;
    static bool colorizeInActFrames_;
    static bool needInit_;
	static bool needReload_;
    static TQString framesPath_;
    static TQString buttonsPath_;
    static TQString masksPath_;
public:
    static bool initialized_;
    static bool useCustomButtonsColors_;
    static bool customColorsActiveButtons_;
    static bool customColorsInActiveButtons_;
    static bool colorizeActButtons_;
    static bool colorizeInActButtons_;
    static TQColor cusBtnCol_[ buttonTypeAllCount ];
};

inline bool DeKoratorFactory::initialized()
{
    return initialized_;
}












// DeKoratorButton //////////////////////////////////////////////////////////////

class DeKoratorButton : public TQButton
{
    Q_OBJECT
public:
    DeKoratorButton( bool isLeft, int buttonWidth, int buttonHeight, DeKoratorClient *parent = 0, const char *name = 0,
                     const TQString &tip = NULL, ButtonType type = ButtonHelp, buttonTypeAll btnType = restore );
    ~DeKoratorButton();

    void setPixmap( buttonTypeAll btnType );
    TQSize sizeHint() const;
    ButtonState lastMousePress() const;
    void reset();

protected slots:
    void animate();

private:
    void enterEvent( TQEvent *e );
    void leaveEvent( TQEvent *e );
    void mousePressEvent( TQMouseEvent *e );
    void mouseReleaseEvent( TQMouseEvent *e );
    void drawButton( TQPainter *painter );
    TQImage* chooseRightHoverEffect( TQImage *img, TQString res );

private:
    bool isLeft_;
    int buttonWidth_;
    DeKoratorClient *client_;
    ButtonType type_;
    //TQPixmap *decoPix_, *decoPixPress_, *decoPixHover_, *decoPixInAct_;
    ButtonState lastmouse_;
	int decoPixHeight_;
    bool hover_;
    TQTimer *animTmr;
    uint animProgress;
    TQPixmap *btnPixAct_, *btnPixInAct_;
    buttonTypeAll btnType_;
int s;
};

inline TQt::ButtonState DeKoratorButton::lastMousePress() const
{
    return lastmouse_;
}

inline void DeKoratorButton::reset()
{
    repaint( FALSE );
}












// DeKoratorClient //////////////////////////////////////////////////////////////

class DeKoratorClient : public KDecoration
{
    Q_OBJECT
public:
    DeKoratorClient( KDecorationBridge *b, KDecorationFactory *f );
    virtual ~DeKoratorClient();

    virtual void init();

    virtual void activeChange();
    virtual void desktopChange();
    virtual void captionChange();
    virtual void iconChange();
    virtual void maximizeChange();
    virtual void shadeChange();

    virtual void borders( int &l, int &r, int &t, int &b ) const;
    virtual void resize( const TQSize &size );
    virtual TQSize minimumSize() const;
    virtual Position mousePosition( const TQPoint &point ) const;

private:
    void addButtons( TQBoxLayout* layout, const TQString& buttons, bool isLeft );

    bool eventFilter( TQObject *obj, TQEvent *e );
    void mouseDoubleClickEvent( TQMouseEvent *e );
	void wheelEvent( TQWheelEvent *e );
	void paintEvent( TQPaintEvent *e );
    void resizeEvent( TQResizeEvent * );
    void showEvent( TQShowEvent * );
    void doShape();
    void updateCaptionBuffer();


private slots:
    void maxButtonPressed();
    void menuButtonPressed();
    void aboveButtonPressed();
    void belowButtonPressed();
    void shadeButtonPressed();
    void keepAboveChange( bool );
    void keepBelowChange( bool );
    void menuButtonReleased();

private:
    DeKoratorButton *button[ ButtonTypeCount ];
    TQVBoxLayout *mainLayout_;
    TQHBoxLayout *titleLayout_ ;
    TQHBoxLayout *midLayout_;
    TQSpacerItem *leftTitleBarSpacer_, *titleBarSpacer_, *rightTitleBarSpacer_, *leftSpacer_, *rightSpacer_, *bottomSpacer_;
    bool closing_;
    TQPixmap *captionBufferPix_;
    bool captionBufferDirty_;
    TQImage activeShadowImg_, inActiveShadowImg_;
	TQRegion mask_;
	bool sizeChanged;
	TQSize oldSize_;
public:
    DeKoratorFactory *decoFactory_;
};


} // namespace DeKorator

#endif // DEKORATORCLIENT_H

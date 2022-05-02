#include <kdialog.h>
#include <tdelocale.h>

/****************************************************************************
** Form implementation generated from reading ui file 'configdialog.ui'
**
** Created by: The TQt user interface compiler (TQt 3.5.0)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "configdialog.h"

#include <ntqvariant.h>
#include <kactivelabel.h>
#include <kcolorbutton.h>
#include <klineedit.h>
#include <kpushbutton.h>
#include <kurlrequester.h>
#include <tdelistview.h>
#include <ntqpushbutton.h>
#include <ntqtabwidget.h>
#include <ntqgroupbox.h>
#include <ntqbuttongroup.h>
#include <ntqradiobutton.h>
#include <ntqcheckbox.h>
#include <ntqlabel.h>
#include <ntqspinbox.h>
#include <ntqcombobox.h>
#include <ntqtextedit.h>
#include <ntqlayout.h>
#include <ntqtooltip.h>
#include <ntqwhatsthis.h>

/*
 *  Constructs a ConfigDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
ConfigDialog::ConfigDialog( TQWidget* parent, const char* name, WFlags fl )
    : TQWidget( parent, name, fl )
{
    if ( !name )
	setName( "ConfigDialog" );
    ConfigDialogLayout = new TQVBoxLayout( this, 11, 6, "ConfigDialogLayout"); 

    tabWidget2 = new TQTabWidget( this, "tabWidget2" );

    tab = new TQWidget( tabWidget2, "tab" );
    tabLayout = new TQVBoxLayout( tab, 11, 6, "tabLayout"); 

    generalbox = new TQGroupBox( tab, "generalbox" );
    generalbox->setFrameShape( TQGroupBox::GroupBoxPanel );
    generalbox->setFrameShadow( TQGroupBox::Sunken );
    generalbox->setColumnLayout(0, TQt::Vertical );
    generalbox->layout()->setSpacing( 6 );
    generalbox->layout()->setMargin( 11 );
    generalboxLayout = new TQVBoxLayout( generalbox->layout() );
    generalboxLayout->setAlignment( TQt::AlignTop );

    titlealign = new TQButtonGroup( generalbox, "titlealign" );
    titlealign->setColumnLayout(0, TQt::Vertical );
    titlealign->layout()->setSpacing( 6 );
    titlealign->layout()->setMargin( 11 );
    titlealignLayout = new TQHBoxLayout( titlealign->layout() );
    titlealignLayout->setAlignment( TQt::AlignTop );

    AlignLeft = new TQRadioButton( titlealign, "AlignLeft" );
    titlealignLayout->addWidget( AlignLeft );

    AlignHCenter = new TQRadioButton( titlealign, "AlignHCenter" );
    AlignHCenter->setChecked( FALSE );
    titlealignLayout->addWidget( AlignHCenter );

    AlignRight = new TQRadioButton( titlealign, "AlignRight" );
    titlealignLayout->addWidget( AlignRight );
    generalboxLayout->addWidget( titlealign );

    buttonGroup6 = new TQButtonGroup( generalbox, "buttonGroup6" );
    buttonGroup6->setColumnLayout(0, TQt::Vertical );
    buttonGroup6->layout()->setSpacing( 6 );
    buttonGroup6->layout()->setMargin( 11 );
    buttonGroup6Layout = new TQVBoxLayout( buttonGroup6->layout() );
    buttonGroup6Layout->setAlignment( TQt::AlignTop );

    useShdtextChkBox = new TQCheckBox( buttonGroup6, "useShdtextChkBox" );
    buttonGroup6Layout->addWidget( useShdtextChkBox );

    layout15 = new TQHBoxLayout( 0, 0, 6, "layout15"); 

    buttonGroup7 = new TQButtonGroup( buttonGroup6, "buttonGroup7" );
    buttonGroup7->setEnabled( FALSE );
    buttonGroup7->setColumnLayout(0, TQt::Vertical );
    buttonGroup7->layout()->setSpacing( 6 );
    buttonGroup7->layout()->setMargin( 11 );
    buttonGroup7Layout = new TQVBoxLayout( buttonGroup7->layout() );
    buttonGroup7Layout->setAlignment( TQt::AlignTop );

    layout11 = new TQHBoxLayout( 0, 0, 6, "layout11"); 

    textLabel1_5 = new TQLabel( buttonGroup7, "textLabel1_5" );
    textLabel1_5->setEnabled( FALSE );
    layout11->addWidget( textLabel1_5 );

    activeShdtextXSpinBox = new TQSpinBox( buttonGroup7, "activeShdtextXSpinBox" );
    activeShdtextXSpinBox->setEnabled( FALSE );
    activeShdtextXSpinBox->setMaxValue( 3 );
    activeShdtextXSpinBox->setMinValue( -3 );
    layout11->addWidget( activeShdtextXSpinBox );

    textLabel1_5_2 = new TQLabel( buttonGroup7, "textLabel1_5_2" );
    textLabel1_5_2->setEnabled( FALSE );
    layout11->addWidget( textLabel1_5_2 );

    activeShdtextYSpinBox = new TQSpinBox( buttonGroup7, "activeShdtextYSpinBox" );
    activeShdtextYSpinBox->setEnabled( FALSE );
    activeShdtextYSpinBox->setMaxValue( 3 );
    activeShdtextYSpinBox->setMinValue( -3 );
    layout11->addWidget( activeShdtextYSpinBox );
    buttonGroup7Layout->addLayout( layout11 );

    layout10 = new TQHBoxLayout( 0, 0, 6, "layout10"); 

    textLabel1_6 = new TQLabel( buttonGroup7, "textLabel1_6" );
    textLabel1_6->setEnabled( FALSE );
    layout10->addWidget( textLabel1_6 );

    activeShdColBtn = new KColorButton( buttonGroup7, "activeShdColBtn" );
    activeShdColBtn->setEnabled( FALSE );
    layout10->addWidget( activeShdColBtn );
    buttonGroup7Layout->addLayout( layout10 );
    layout15->addWidget( buttonGroup7 );

    buttonGroup7_2 = new TQButtonGroup( buttonGroup6, "buttonGroup7_2" );
    buttonGroup7_2->setEnabled( FALSE );
    buttonGroup7_2->setColumnLayout(0, TQt::Vertical );
    buttonGroup7_2->layout()->setSpacing( 6 );
    buttonGroup7_2->layout()->setMargin( 11 );
    buttonGroup7_2Layout = new TQVBoxLayout( buttonGroup7_2->layout() );
    buttonGroup7_2Layout->setAlignment( TQt::AlignTop );

    layout11_2 = new TQHBoxLayout( 0, 0, 6, "layout11_2"); 

    textLabel1_5_4 = new TQLabel( buttonGroup7_2, "textLabel1_5_4" );
    textLabel1_5_4->setEnabled( FALSE );
    layout11_2->addWidget( textLabel1_5_4 );

    inActiveShdtextXSpinBox = new TQSpinBox( buttonGroup7_2, "inActiveShdtextXSpinBox" );
    inActiveShdtextXSpinBox->setEnabled( FALSE );
    inActiveShdtextXSpinBox->setMaxValue( 3 );
    inActiveShdtextXSpinBox->setMinValue( -3 );
    layout11_2->addWidget( inActiveShdtextXSpinBox );

    textLabel1_5_2_3 = new TQLabel( buttonGroup7_2, "textLabel1_5_2_3" );
    textLabel1_5_2_3->setEnabled( FALSE );
    layout11_2->addWidget( textLabel1_5_2_3 );

    inActiveShdtextYSpinBox = new TQSpinBox( buttonGroup7_2, "inActiveShdtextYSpinBox" );
    inActiveShdtextYSpinBox->setEnabled( FALSE );
    inActiveShdtextYSpinBox->setMaxValue( 3 );
    inActiveShdtextYSpinBox->setMinValue( -3 );
    layout11_2->addWidget( inActiveShdtextYSpinBox );
    buttonGroup7_2Layout->addLayout( layout11_2 );

    layout14 = new TQHBoxLayout( 0, 0, 6, "layout14"); 

    textLabel1_6_3 = new TQLabel( buttonGroup7_2, "textLabel1_6_3" );
    textLabel1_6_3->setEnabled( FALSE );
    layout14->addWidget( textLabel1_6_3 );

    inActiveShdColBtn = new KColorButton( buttonGroup7_2, "inActiveShdColBtn" );
    inActiveShdColBtn->setEnabled( FALSE );
    layout14->addWidget( inActiveShdColBtn );
    buttonGroup7_2Layout->addLayout( layout14 );
    layout15->addWidget( buttonGroup7_2 );
    buttonGroup6Layout->addLayout( layout15 );
    generalboxLayout->addWidget( buttonGroup6 );

    buttonGroup9 = new TQButtonGroup( generalbox, "buttonGroup9" );
    buttonGroup9->setColumnLayout(0, TQt::Vertical );
    buttonGroup9->layout()->setSpacing( 6 );
    buttonGroup9->layout()->setMargin( 11 );
    buttonGroup9Layout = new TQVBoxLayout( buttonGroup9->layout() );
    buttonGroup9Layout->setAlignment( TQt::AlignTop );

    layout17 = new TQHBoxLayout( 0, 0, 6, "layout17"); 

    layout16 = new TQHBoxLayout( 0, 0, 6, "layout16"); 

    textLabel1_5_3 = new TQLabel( buttonGroup9, "textLabel1_5_3" );
    layout16->addWidget( textLabel1_5_3 );

    btnShiftXSpinBox = new TQSpinBox( buttonGroup9, "btnShiftXSpinBox" );
    btnShiftXSpinBox->setMaxValue( 3 );
    btnShiftXSpinBox->setMinValue( -3 );
    layout16->addWidget( btnShiftXSpinBox );

    textLabel1_5_2_2 = new TQLabel( buttonGroup9, "textLabel1_5_2_2" );
    layout16->addWidget( textLabel1_5_2_2 );

    btnShiftYSpinBox = new TQSpinBox( buttonGroup9, "btnShiftYSpinBox" );
    btnShiftYSpinBox->setMaxValue( 3 );
    btnShiftYSpinBox->setMinValue( -3 );
    layout16->addWidget( btnShiftYSpinBox );
    layout17->addLayout( layout16 );
    spacer2 = new TQSpacerItem( 161, 21, TQSizePolicy::Expanding, TQSizePolicy::Minimum );
    layout17->addItem( spacer2 );
    buttonGroup9Layout->addLayout( layout17 );
    generalboxLayout->addWidget( buttonGroup9 );

    useMenuImageChkBox = new TQCheckBox( generalbox, "useMenuImageChkBox" );
    generalboxLayout->addWidget( useMenuImageChkBox );

    ignoreAppIcnCol = new TQCheckBox( generalbox, "ignoreAppIcnCol" );
    generalboxLayout->addWidget( ignoreAppIcnCol );

    dblClkCloseChkBox = new TQCheckBox( generalbox, "dblClkCloseChkBox" );
    generalboxLayout->addWidget( dblClkCloseChkBox );

    showBtmBorderChkBox = new TQCheckBox( generalbox, "showBtmBorderChkBox" );
    generalboxLayout->addWidget( showBtmBorderChkBox );
    tabLayout->addWidget( generalbox );
    spacer11_2 = new TQSpacerItem( 20, 30, TQSizePolicy::Minimum, TQSizePolicy::Expanding );
    tabLayout->addItem( spacer11_2 );
    tabWidget2->insertTab( tab, TQString::fromLatin1("") );

    TabPage = new TQWidget( tabWidget2, "TabPage" );
    TabPageLayout = new TQVBoxLayout( TabPage, 11, 6, "TabPageLayout"); 

    buttonGroup2 = new TQButtonGroup( TabPage, "buttonGroup2" );
    buttonGroup2->setColumnLayout(0, TQt::Vertical );
    buttonGroup2->layout()->setSpacing( 6 );
    buttonGroup2->layout()->setMargin( 11 );
    buttonGroup2Layout = new TQVBoxLayout( buttonGroup2->layout() );
    buttonGroup2Layout->setAlignment( TQt::AlignTop );

    layout19 = new TQHBoxLayout( 0, 0, 6, "layout19"); 

    buttonGroup14 = new TQButtonGroup( buttonGroup2, "buttonGroup14" );
    buttonGroup14->setColumnLayout(0, TQt::Vertical );
    buttonGroup14->layout()->setSpacing( 6 );
    buttonGroup14->layout()->setMargin( 11 );
    buttonGroup14Layout = new TQVBoxLayout( buttonGroup14->layout() );
    buttonGroup14Layout->setAlignment( TQt::AlignTop );

    colorizeActFramesChkBox = new TQCheckBox( buttonGroup14, "colorizeActFramesChkBox" );
    buttonGroup14Layout->addWidget( colorizeActFramesChkBox );

    colorizeActButtonsChkBox = new TQCheckBox( buttonGroup14, "colorizeActButtonsChkBox" );
    buttonGroup14Layout->addWidget( colorizeActButtonsChkBox );
    layout19->addWidget( buttonGroup14 );

    buttonGroup14_2 = new TQButtonGroup( buttonGroup2, "buttonGroup14_2" );
    buttonGroup14_2->setColumnLayout(0, TQt::Vertical );
    buttonGroup14_2->layout()->setSpacing( 6 );
    buttonGroup14_2->layout()->setMargin( 11 );
    buttonGroup14_2Layout = new TQVBoxLayout( buttonGroup14_2->layout() );
    buttonGroup14_2Layout->setAlignment( TQt::AlignTop );

    colorizeInActFramesChkBox = new TQCheckBox( buttonGroup14_2, "colorizeInActFramesChkBox" );
    buttonGroup14_2Layout->addWidget( colorizeInActFramesChkBox );

    colorizeInActButtonsChkBox = new TQCheckBox( buttonGroup14_2, "colorizeInActButtonsChkBox" );
    buttonGroup14_2Layout->addWidget( colorizeInActButtonsChkBox );
    layout19->addWidget( buttonGroup14_2 );
    buttonGroup2Layout->addLayout( layout19 );
    TabPageLayout->addWidget( buttonGroup2 );

    buttonGroup5 = new TQButtonGroup( TabPage, "buttonGroup5" );
    buttonGroup5->setColumnLayout(0, TQt::Vertical );
    buttonGroup5->layout()->setSpacing( 6 );
    buttonGroup5->layout()->setMargin( 11 );
    buttonGroup5Layout = new TQVBoxLayout( buttonGroup5->layout() );
    buttonGroup5Layout->setAlignment( TQt::AlignTop );

    useAnimChkBox = new TQCheckBox( buttonGroup5, "useAnimChkBox" );
    buttonGroup5Layout->addWidget( useAnimChkBox );

    layout18 = new TQHBoxLayout( 0, 0, 6, "layout18"); 

    buttonGroup12 = new TQButtonGroup( buttonGroup5, "buttonGroup12" );
    buttonGroup12->setColumnLayout(0, TQt::Vertical );
    buttonGroup12->layout()->setSpacing( 6 );
    buttonGroup12->layout()->setMargin( 11 );
    buttonGroup12Layout = new TQVBoxLayout( buttonGroup12->layout() );
    buttonGroup12Layout->setAlignment( TQt::AlignTop );

    animateEfeectsCombo = new TQComboBox( FALSE, buttonGroup12, "animateEfeectsCombo" );
    animateEfeectsCombo->setEnabled( FALSE );
    buttonGroup12Layout->addWidget( animateEfeectsCombo );

    layout37 = new TQHBoxLayout( 0, 0, 6, "layout37"); 

    textLabel1_8 = new TQLabel( buttonGroup12, "textLabel1_8" );
    textLabel1_8->setEnabled( FALSE );
    layout37->addWidget( textLabel1_8 );

    stepsSpinBox = new TQSpinBox( buttonGroup12, "stepsSpinBox" );
    stepsSpinBox->setEnabled( FALSE );
    stepsSpinBox->setMaxValue( 10 );
    stepsSpinBox->setMinValue( 1 );
    layout37->addWidget( stepsSpinBox );

    textLabel2_5 = new TQLabel( buttonGroup12, "textLabel2_5" );
    textLabel2_5->setEnabled( FALSE );
    layout37->addWidget( textLabel2_5 );

    intervalSpinBox = new TQSpinBox( buttonGroup12, "intervalSpinBox" );
    intervalSpinBox->setEnabled( FALSE );
    intervalSpinBox->setMaxValue( 1000 );
    intervalSpinBox->setMinValue( 1 );
    layout37->addWidget( intervalSpinBox );
    buttonGroup12Layout->addLayout( layout37 );

    KeepAnimateChkBox = new TQCheckBox( buttonGroup12, "KeepAnimateChkBox" );
    buttonGroup12Layout->addWidget( KeepAnimateChkBox );
    layout18->addWidget( buttonGroup12 );

    buttonGroup11 = new TQButtonGroup( buttonGroup5, "buttonGroup11" );
    buttonGroup11->setColumnLayout(0, TQt::Vertical );
    buttonGroup11->layout()->setSpacing( 6 );
    buttonGroup11->layout()->setMargin( 11 );
    buttonGroup11Layout = new TQVBoxLayout( buttonGroup11->layout() );
    buttonGroup11Layout->setAlignment( TQt::AlignTop );

    hoverTypeCombo = new TQComboBox( FALSE, buttonGroup11, "hoverTypeCombo" );
    buttonGroup11Layout->addWidget( hoverTypeCombo );

    layout14_2 = new TQHBoxLayout( 0, 0, 6, "layout14_2"); 

    textLabel1_4 = new TQLabel( buttonGroup11, "textLabel1_4" );
    layout14_2->addWidget( textLabel1_4 );

    effectsAmount_SpinBox = new TQSpinBox( buttonGroup11, "effectsAmount_SpinBox" );
    effectsAmount_SpinBox->setMaxValue( 10 );
    effectsAmount_SpinBox->setMinValue( 1 );
    layout14_2->addWidget( effectsAmount_SpinBox );
    buttonGroup11Layout->addLayout( layout14_2 );
    layout18->addWidget( buttonGroup11 );
    buttonGroup5Layout->addLayout( layout18 );

    buttonGroup13 = new TQButtonGroup( buttonGroup5, "buttonGroup13" );
    buttonGroup13->setColumnLayout(0, TQt::Vertical );
    buttonGroup13->layout()->setSpacing( 6 );
    buttonGroup13->layout()->setMargin( 11 );
    buttonGroup13Layout = new TQVBoxLayout( buttonGroup13->layout() );
    buttonGroup13Layout->setAlignment( TQt::AlignTop );

    layout19_2 = new TQHBoxLayout( 0, 0, 6, "layout19_2"); 

    layout17_2 = new TQHBoxLayout( 0, 0, 6, "layout17_2"); 

    textLabel1_3 = new TQLabel( buttonGroup13, "textLabel1_3" );
    layout17_2->addWidget( textLabel1_3 );

    activeHighlightClrBtn = new KColorButton( buttonGroup13, "activeHighlightClrBtn" );
    layout17_2->addWidget( activeHighlightClrBtn );
    layout19_2->addLayout( layout17_2 );

    layout18_2 = new TQHBoxLayout( 0, 0, 6, "layout18_2"); 

    textLabel1_3_2 = new TQLabel( buttonGroup13, "textLabel1_3_2" );
    layout18_2->addWidget( textLabel1_3_2 );

    inActiveHighlightClrBtn = new KColorButton( buttonGroup13, "inActiveHighlightClrBtn" );
    layout18_2->addWidget( inActiveHighlightClrBtn );
    layout19_2->addLayout( layout18_2 );
    buttonGroup13Layout->addLayout( layout19_2 );
    buttonGroup5Layout->addWidget( buttonGroup13 );
    TabPageLayout->addWidget( buttonGroup5 );

    buttonGroup5_2 = new TQButtonGroup( TabPage, "buttonGroup5_2" );
    buttonGroup5_2->setColumnLayout(0, TQt::Vertical );
    buttonGroup5_2->layout()->setSpacing( 6 );
    buttonGroup5_2->layout()->setMargin( 11 );
    buttonGroup5_2Layout = new TQHBoxLayout( buttonGroup5_2->layout() );
    buttonGroup5_2Layout->setAlignment( TQt::AlignTop );

    layout38 = new TQVBoxLayout( 0, 0, 6, "layout38"); 

    textLabel2_4 = new TQLabel( buttonGroup5_2, "textLabel2_4" );
    layout38->addWidget( textLabel2_4 );

    decoColorizeComboBox = new TQComboBox( FALSE, buttonGroup5_2, "decoColorizeComboBox" );
    layout38->addWidget( decoColorizeComboBox );
    buttonGroup5_2Layout->addLayout( layout38 );

    layout39 = new TQVBoxLayout( 0, 0, 6, "layout39"); 

    textLabel3 = new TQLabel( buttonGroup5_2, "textLabel3" );
    layout39->addWidget( textLabel3 );

    buttonsColorizeComboBox = new TQComboBox( FALSE, buttonGroup5_2, "buttonsColorizeComboBox" );
    layout39->addWidget( buttonsColorizeComboBox );
    buttonGroup5_2Layout->addLayout( layout39 );
    TabPageLayout->addWidget( buttonGroup5_2 );
    spacer6 = new TQSpacerItem( 20, 16, TQSizePolicy::Minimum, TQSizePolicy::Expanding );
    TabPageLayout->addItem( spacer6 );
    tabWidget2->insertTab( TabPage, TQString::fromLatin1("") );

    TabPage_2 = new TQWidget( tabWidget2, "TabPage_2" );
    TabPageLayout_2 = new TQVBoxLayout( TabPage_2, 11, 6, "TabPageLayout_2"); 

    useCusBtnClrChkBox = new TQCheckBox( TabPage_2, "useCusBtnClrChkBox" );
    TabPageLayout_2->addWidget( useCusBtnClrChkBox );

    buttonGroup16 = new TQButtonGroup( TabPage_2, "buttonGroup16" );
    buttonGroup16->setEnabled( FALSE );
    buttonGroup16->setColumnLayout(0, TQt::Vertical );
    buttonGroup16->layout()->setSpacing( 6 );
    buttonGroup16->layout()->setMargin( 11 );
    buttonGroup16Layout = new TQVBoxLayout( buttonGroup16->layout() );
    buttonGroup16Layout->setAlignment( TQt::AlignTop );

    textLabel1_7 = new TQLabel( buttonGroup16, "textLabel1_7" );
    buttonGroup16Layout->addWidget( textLabel1_7 );

    layout37_2 = new TQHBoxLayout( 0, 0, 6, "layout37_2"); 

    cusColActBtnChkBox = new TQCheckBox( buttonGroup16, "cusColActBtnChkBox" );
    layout37_2->addWidget( cusColActBtnChkBox );

    cusColInActBtnChkBox = new TQCheckBox( buttonGroup16, "cusColInActBtnChkBox" );
    layout37_2->addWidget( cusColInActBtnChkBox );
    buttonGroup16Layout->addLayout( layout37_2 );
    spacer10_2 = new TQSpacerItem( 20, 20, TQSizePolicy::Minimum, TQSizePolicy::Expanding );
    buttonGroup16Layout->addItem( spacer10_2 );

    layout42 = new TQHBoxLayout( 0, 0, 6, "layout42"); 

    layout41 = new TQVBoxLayout( 0, 0, 6, "layout41"); 

    layout38_2 = new TQHBoxLayout( 0, 0, 6, "layout38_2"); 

    textLabel9 = new TQLabel( buttonGroup16, "textLabel9" );
    layout38_2->addWidget( textLabel9 );

    closeClrBtn = new KColorButton( buttonGroup16, "closeClrBtn" );
    layout38_2->addWidget( closeClrBtn );
    layout41->addLayout( layout38_2 );

    layout25 = new TQHBoxLayout( 0, 0, 6, "layout25"); 

    textLabel1 = new TQLabel( buttonGroup16, "textLabel1" );
    layout25->addWidget( textLabel1 );

    maxClrBtn = new KColorButton( buttonGroup16, "maxClrBtn" );
    layout25->addWidget( maxClrBtn );
    layout41->addLayout( layout25 );

    layout28 = new TQHBoxLayout( 0, 0, 6, "layout28"); 

    textLabel4_2 = new TQLabel( buttonGroup16, "textLabel4_2" );
    layout28->addWidget( textLabel4_2 );

    helpClrBtn = new KColorButton( buttonGroup16, "helpClrBtn" );
    layout28->addWidget( helpClrBtn );
    layout41->addLayout( layout28 );

    layout29 = new TQHBoxLayout( 0, 0, 6, "layout29"); 

    textLabel5 = new TQLabel( buttonGroup16, "textLabel5" );
    layout29->addWidget( textLabel5 );

    stickyClrBtn = new KColorButton( buttonGroup16, "stickyClrBtn" );
    layout29->addWidget( stickyClrBtn );
    layout41->addLayout( layout29 );

    layout32 = new TQHBoxLayout( 0, 0, 6, "layout32"); 

    textLabel7 = new TQLabel( buttonGroup16, "textLabel7" );
    layout32->addWidget( textLabel7 );

    aboveClrBtn = new KColorButton( buttonGroup16, "aboveClrBtn" );
    layout32->addWidget( aboveClrBtn );
    layout41->addLayout( layout32 );

    layout28_2 = new TQHBoxLayout( 0, 0, 6, "layout28_2"); 

    textLabel4_2_2 = new TQLabel( buttonGroup16, "textLabel4_2_2" );
    layout28_2->addWidget( textLabel4_2_2 );

    belowClrBtn = new KColorButton( buttonGroup16, "belowClrBtn" );
    layout28_2->addWidget( belowClrBtn );
    layout41->addLayout( layout28_2 );

    layout31_2 = new TQHBoxLayout( 0, 0, 6, "layout31_2"); 

    textLabel6_2 = new TQLabel( buttonGroup16, "textLabel6_2" );
    layout31_2->addWidget( textLabel6_2 );

    shadeClrBtn = new KColorButton( buttonGroup16, "shadeClrBtn" );
    layout31_2->addWidget( shadeClrBtn );
    layout41->addLayout( layout31_2 );
    layout42->addLayout( layout41 );

    layout36 = new TQVBoxLayout( 0, 0, 6, "layout36"); 

    layout27 = new TQHBoxLayout( 0, 0, 6, "layout27"); 

    textLabel3_2 = new TQLabel( buttonGroup16, "textLabel3_2" );
    layout27->addWidget( textLabel3_2 );

    minClrBtn = new KColorButton( buttonGroup16, "minClrBtn" );
    layout27->addWidget( minClrBtn );
    layout36->addLayout( layout27 );

    layout26 = new TQHBoxLayout( 0, 0, 6, "layout26"); 

    textLabel2_2 = new TQLabel( buttonGroup16, "textLabel2_2" );
    layout26->addWidget( textLabel2_2 );

    restoreClrBtn = new KColorButton( buttonGroup16, "restoreClrBtn" );
    layout26->addWidget( restoreClrBtn );
    layout36->addLayout( layout26 );

    layout33_2 = new TQHBoxLayout( 0, 0, 6, "layout33_2"); 

    textLabel8_2 = new TQLabel( buttonGroup16, "textLabel8_2" );
    layout33_2->addWidget( textLabel8_2 );

    menuClrBtn = new KColorButton( buttonGroup16, "menuClrBtn" );
    layout33_2->addWidget( menuClrBtn );
    layout36->addLayout( layout33_2 );

    layout31 = new TQHBoxLayout( 0, 0, 6, "layout31"); 

    textLabel6 = new TQLabel( buttonGroup16, "textLabel6" );
    layout31->addWidget( textLabel6 );

    stickyDownClrBtn = new KColorButton( buttonGroup16, "stickyDownClrBtn" );
    layout31->addWidget( stickyDownClrBtn );
    layout36->addLayout( layout31 );

    layout33 = new TQHBoxLayout( 0, 0, 6, "layout33"); 

    textLabel8 = new TQLabel( buttonGroup16, "textLabel8" );
    layout33->addWidget( textLabel8 );

    aboveDownClrBtn = new KColorButton( buttonGroup16, "aboveDownClrBtn" );
    layout33->addWidget( aboveDownClrBtn );
    layout36->addLayout( layout33 );

    layout29_2 = new TQHBoxLayout( 0, 0, 6, "layout29_2"); 

    textLabel5_2 = new TQLabel( buttonGroup16, "textLabel5_2" );
    layout29_2->addWidget( textLabel5_2 );

    belowDownClrBtn = new KColorButton( buttonGroup16, "belowDownClrBtn" );
    layout29_2->addWidget( belowDownClrBtn );
    layout36->addLayout( layout29_2 );

    layout32_2 = new TQHBoxLayout( 0, 0, 6, "layout32_2"); 

    textLabel7_2 = new TQLabel( buttonGroup16, "textLabel7_2" );
    layout32_2->addWidget( textLabel7_2 );

    shadeDownClrBtn = new KColorButton( buttonGroup16, "shadeDownClrBtn" );
    layout32_2->addWidget( shadeDownClrBtn );
    layout36->addLayout( layout32_2 );
    layout42->addLayout( layout36 );
    buttonGroup16Layout->addLayout( layout42 );
    TabPageLayout_2->addWidget( buttonGroup16 );
    spacer18 = new TQSpacerItem( 20, 60, TQSizePolicy::Minimum, TQSizePolicy::Expanding );
    TabPageLayout_2->addItem( spacer18 );
    tabWidget2->insertTab( TabPage_2, TQString::fromLatin1("") );

    TabPage_3 = new TQWidget( tabWidget2, "TabPage_3" );
    TabPageLayout_3 = new TQVBoxLayout( TabPage_3, 11, 6, "TabPageLayout_3"); 

    buttonGroup3 = new TQButtonGroup( TabPage_3, "buttonGroup3" );
    buttonGroup3->setColumnLayout(0, TQt::Vertical );
    buttonGroup3->layout()->setSpacing( 6 );
    buttonGroup3->layout()->setMargin( 11 );
    buttonGroup3Layout = new TQVBoxLayout( buttonGroup3->layout() );
    buttonGroup3Layout->setAlignment( TQt::AlignTop );

    textLabel1_2 = new TQLabel( buttonGroup3, "textLabel1_2" );
    buttonGroup3Layout->addWidget( textLabel1_2 );

    framesPathKurl = new KURLRequester( buttonGroup3, "framesPathKurl" );
    buttonGroup3Layout->addWidget( framesPathKurl );

    textLabel2 = new TQLabel( buttonGroup3, "textLabel2" );
    buttonGroup3Layout->addWidget( textLabel2 );

    buttonsPathKurl = new KURLRequester( buttonGroup3, "buttonsPathKurl" );
    buttonGroup3Layout->addWidget( buttonsPathKurl );

    useMasks_Chkbox = new TQCheckBox( buttonGroup3, "useMasks_Chkbox" );
    buttonGroup3Layout->addWidget( useMasks_Chkbox );

    textLabel2_3 = new TQLabel( buttonGroup3, "textLabel2_3" );
    textLabel2_3->setEnabled( FALSE );
    buttonGroup3Layout->addWidget( textLabel2_3 );

    masksPathKurl = new KURLRequester( buttonGroup3, "masksPathKurl" );
    masksPathKurl->setEnabled( FALSE );
    buttonGroup3Layout->addWidget( masksPathKurl );
    TabPageLayout_3->addWidget( buttonGroup3 );
    spacer12_2 = new TQSpacerItem( 20, 100, TQSizePolicy::Minimum, TQSizePolicy::Expanding );
    TabPageLayout_3->addItem( spacer12_2 );
    tabWidget2->insertTab( TabPage_3, TQString::fromLatin1("") );

    TabPage_4 = new TQWidget( tabWidget2, "TabPage_4" );
    TabPageLayout_4 = new TQVBoxLayout( TabPage_4, 11, 6, "TabPageLayout_4"); 

    buttonGroup10 = new TQButtonGroup( TabPage_4, "buttonGroup10" );
    buttonGroup10->setColumnLayout(0, TQt::Vertical );
    buttonGroup10->layout()->setSpacing( 6 );
    buttonGroup10->layout()->setMargin( 11 );
    buttonGroup10Layout = new TQVBoxLayout( buttonGroup10->layout() );
    buttonGroup10Layout->setAlignment( TQt::AlignTop );

    layout12 = new TQHBoxLayout( 0, 0, 6, "layout12"); 
    spacer5 = new TQSpacerItem( 95, 20, TQSizePolicy::Expanding, TQSizePolicy::Minimum );
    layout12->addItem( spacer5 );

    previewLabael = new TQLabel( buttonGroup10, "previewLabael" );
    previewLabael->setSizePolicy( TQSizePolicy( (TQSizePolicy::SizeType)5, (TQSizePolicy::SizeType)5, 0, 0, previewLabael->sizePolicy().hasHeightForWidth() ) );
    previewLabael->setScaledContents( TRUE );
    layout12->addWidget( previewLabael );
    spacer4 = new TQSpacerItem( 95, 20, TQSizePolicy::Expanding, TQSizePolicy::Minimum );
    layout12->addItem( spacer4 );
    buttonGroup10Layout->addLayout( layout12 );
    TabPageLayout_4->addWidget( buttonGroup10 );

    themesKlstView = new TDEListView( TabPage_4, "themesKlstView" );
    themesKlstView->addColumn( tr2i18n( "Theme Name" ) );
    themesKlstView->setEnabled( TRUE );
    TabPageLayout_4->addWidget( themesKlstView );

    layout13 = new TQHBoxLayout( 0, 0, 6, "layout13"); 

    installthemeBtn = new TQPushButton( TabPage_4, "installthemeBtn" );
    layout13->addWidget( installthemeBtn );

    removeThemBtn = new TQPushButton( TabPage_4, "removeThemBtn" );
    layout13->addWidget( removeThemBtn );

    applyThemeBtn = new TQPushButton( TabPage_4, "applyThemeBtn" );
    layout13->addWidget( applyThemeBtn );
    TabPageLayout_4->addLayout( layout13 );
    tabWidget2->insertTab( TabPage_4, TQString::fromLatin1("") );

    TabPage_5 = new TQWidget( tabWidget2, "TabPage_5" );
    TabPageLayout_5 = new TQVBoxLayout( TabPage_5, 11, 6, "TabPageLayout_5"); 

    textEdit1 = new TQTextEdit( TabPage_5, "textEdit1" );
    textEdit1->setWordWrap( TQTextEdit::WidgetWidth );
    textEdit1->setReadOnly( TRUE );
    TabPageLayout_5->addWidget( textEdit1 );
    tabWidget2->insertTab( TabPage_5, TQString::fromLatin1("") );

    tab_2 = new TQWidget( tabWidget2, "tab_2" );
    tabLayout_2 = new TQGridLayout( tab_2, 1, 1, 11, 6, "tabLayout_2"); 
    spacer10 = new TQSpacerItem( 35, 20, TQSizePolicy::Expanding, TQSizePolicy::Minimum );
    tabLayout_2->addItem( spacer10, 1, 0 );
    spacer9 = new TQSpacerItem( 34, 20, TQSizePolicy::Expanding, TQSizePolicy::Minimum );
    tabLayout_2->addItem( spacer9, 1, 2 );
    spacer11 = new TQSpacerItem( 20, 60, TQSizePolicy::Minimum, TQSizePolicy::Expanding );
    tabLayout_2->addItem( spacer11, 0, 1 );
    spacer12 = new TQSpacerItem( 20, 80, TQSizePolicy::Minimum, TQSizePolicy::Expanding );
    tabLayout_2->addItem( spacer12, 2, 1 );

    kActiveLabel4 = new KActiveLabel( tab_2, "kActiveLabel4" );

    tabLayout_2->addWidget( kActiveLabel4, 1, 1 );
    tabWidget2->insertTab( tab_2, TQString::fromLatin1("") );
    ConfigDialogLayout->addWidget( tabWidget2 );
    languageChange();
    resize( TQSize(471, 525).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( useMasks_Chkbox, SIGNAL( toggled(bool) ), masksPathKurl, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), textLabel1_5, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), activeShdtextXSpinBox, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), textLabel1_5_2, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), activeShdtextYSpinBox, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), textLabel1_6, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), activeShdColBtn, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), buttonGroup7, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), textLabel1_5_4, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), inActiveShdtextXSpinBox, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), textLabel1_5_2_3, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), inActiveShdtextYSpinBox, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), textLabel1_6_3, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), inActiveShdColBtn, SLOT( setEnabled(bool) ) );
    connect( useShdtextChkBox, SIGNAL( toggled(bool) ), buttonGroup7_2, SLOT( setEnabled(bool) ) );
    connect( useAnimChkBox, SIGNAL( toggled(bool) ), animateEfeectsCombo, SLOT( setEnabled(bool) ) );
    connect( useCusBtnClrChkBox, SIGNAL( toggled(bool) ), buttonGroup16, SLOT( setEnabled(bool) ) );
    connect( useAnimChkBox, SIGNAL( toggled(bool) ), textLabel1_8, SLOT( setEnabled(bool) ) );
    connect( useAnimChkBox, SIGNAL( toggled(bool) ), stepsSpinBox, SLOT( setEnabled(bool) ) );
    connect( useAnimChkBox, SIGNAL( toggled(bool) ), textLabel2_5, SLOT( setEnabled(bool) ) );
    connect( useAnimChkBox, SIGNAL( toggled(bool) ), intervalSpinBox, SLOT( setEnabled(bool) ) );
    connect( useAnimChkBox, SIGNAL( toggled(bool) ), KeepAnimateChkBox, SLOT( setEnabled(bool) ) );
    connect( useMasks_Chkbox, SIGNAL( toggled(bool) ), textLabel2_3, SLOT( setEnabled(bool) ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
ConfigDialog::~ConfigDialog()
{
    // no need to delete child widgets, TQt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ConfigDialog::languageChange()
{
    setCaption( tr2i18n( "Config Dialog" ) );
    generalbox->setTitle( tr2i18n( "Decoration Settings" ) );
    titlealign->setTitle( tr2i18n( "Title &Alignment" ) );
    TQWhatsThis::add( titlealign, tr2i18n( "Use these buttons to set the alignment of the window title" ) );
    AlignLeft->setText( tr2i18n( "L&eft" ) );
    AlignLeft->setAccel( TQKeySequence( tr2i18n( "Alt+E" ) ) );
    TQToolTip::add( AlignLeft, TQString::null );
    AlignHCenter->setText( tr2i18n( "&Center" ) );
    AlignHCenter->setAccel( TQKeySequence( tr2i18n( "Alt+C" ) ) );
    TQToolTip::add( AlignHCenter, TQString::null );
    AlignRight->setText( tr2i18n( "Ri&ght" ) );
    AlignRight->setAccel( TQKeySequence( tr2i18n( "Alt+G" ) ) );
    TQToolTip::add( AlignRight, TQString::null );
    buttonGroup6->setTitle( tr2i18n( "Text Shadow" ) );
    useShdtextChkBox->setText( tr2i18n( "&Use shadowed text" ) );
    useShdtextChkBox->setAccel( TQKeySequence( tr2i18n( "Alt+U" ) ) );
    buttonGroup7->setTitle( tr2i18n( "Active" ) );
    textLabel1_5->setText( tr2i18n( "X :" ) );
    textLabel1_5_2->setText( tr2i18n( "Y :" ) );
    textLabel1_6->setText( tr2i18n( "Color" ) );
    activeShdColBtn->setText( TQString::null );
    buttonGroup7_2->setTitle( tr2i18n( "Inactive" ) );
    textLabel1_5_4->setText( tr2i18n( "X :" ) );
    textLabel1_5_2_3->setText( tr2i18n( "Y :" ) );
    textLabel1_6_3->setText( tr2i18n( "Color" ) );
    inActiveShdColBtn->setText( TQString::null );
    buttonGroup9->setTitle( tr2i18n( "Pressed Buttons Shift" ) );
    textLabel1_5_3->setText( tr2i18n( "X :" ) );
    textLabel1_5_2_2->setText( tr2i18n( "Y :" ) );
    useMenuImageChkBox->setText( tr2i18n( "Use menu button image insted o&f the app icon" ) );
    useMenuImageChkBox->setAccel( TQKeySequence( tr2i18n( "Alt+F" ) ) );
    ignoreAppIcnCol->setText( tr2i18n( "Ignore app icon colorizing" ) );
    dblClkCloseChkBox->setText( tr2i18n( "Close &window by by double clicking the menu button" ) );
    dblClkCloseChkBox->setAccel( TQKeySequence( tr2i18n( "Alt+W" ) ) );
    showBtmBorderChkBox->setText( tr2i18n( "Show &bottom border when window is shaded" ) );
    showBtmBorderChkBox->setAccel( TQKeySequence( tr2i18n( "Alt+B" ) ) );
    tabWidget2->changeTab( tab, tr2i18n( "M&isc" ) );
    buttonGroup2->setTitle( tr2i18n( "Colors" ) );
    buttonGroup14->setTitle( tr2i18n( "Active" ) );
    colorizeActFramesChkBox->setText( tr2i18n( "Colorize &frames" ) );
    colorizeActFramesChkBox->setAccel( TQKeySequence( tr2i18n( "Alt+F" ) ) );
    colorizeActButtonsChkBox->setText( tr2i18n( "Colorize &buttons" ) );
    colorizeActButtonsChkBox->setAccel( TQKeySequence( tr2i18n( "Alt+B" ) ) );
    buttonGroup14_2->setTitle( tr2i18n( "Inactive" ) );
    colorizeInActFramesChkBox->setText( tr2i18n( "Colorize &frames" ) );
    colorizeInActFramesChkBox->setAccel( TQKeySequence( tr2i18n( "Alt+F" ) ) );
    colorizeInActButtonsChkBox->setText( tr2i18n( "Colorize &buttons" ) );
    colorizeInActButtonsChkBox->setAccel( TQKeySequence( tr2i18n( "Alt+B" ) ) );
    buttonGroup5->setTitle( tr2i18n( "Hover Effects" ) );
    useAnimChkBox->setText( tr2i18n( "&Use buttons animation" ) );
    useAnimChkBox->setAccel( TQKeySequence( tr2i18n( "Alt+U" ) ) );
    buttonGroup12->setTitle( tr2i18n( "Animate Effect" ) );
    animateEfeectsCombo->clear();
    animateEfeectsCombo->insertItem( tr2i18n( "Intensity" ) );
    animateEfeectsCombo->insertItem( tr2i18n( "Blend" ) );
    animateEfeectsCombo->insertItem( tr2i18n( "Solarize" ) );
    animateEfeectsCombo->insertItem( tr2i18n( "Fade" ) );
    animateEfeectsCombo->insertItem( tr2i18n( "Trashed" ) );
    animateEfeectsCombo->insertItem( tr2i18n( "Hue Shift" ) );
    textLabel1_8->setText( tr2i18n( "Steps :" ) );
    textLabel2_5->setText( tr2i18n( "Interval" ) );
    KeepAnimateChkBox->setText( tr2i18n( "Keep Animating" ) );
    buttonGroup11->setTitle( tr2i18n( "Hover And Press Effect" ) );
    hoverTypeCombo->clear();
    hoverTypeCombo->insertItem( tr2i18n( "To Gray" ) );
    hoverTypeCombo->insertItem( tr2i18n( "Colorize" ) );
    hoverTypeCombo->insertItem( tr2i18n( "DeSaturate" ) );
    hoverTypeCombo->insertItem( tr2i18n( "To Gamma" ) );
    hoverTypeCombo->insertItem( tr2i18n( "Use Image Colors" ) );
    textLabel1_4->setText( tr2i18n( "Amount :" ) );
    buttonGroup13->setTitle( tr2i18n( "Highlight Colors" ) );
    textLabel1_3->setText( tr2i18n( "Active color" ) );
    activeHighlightClrBtn->setText( TQString::null );
    textLabel1_3_2->setText( tr2i18n( "Inactive color" ) );
    inActiveHighlightClrBtn->setText( TQString::null );
    buttonGroup5_2->setTitle( tr2i18n( "Colorizing Method" ) );
    textLabel2_4->setText( tr2i18n( "Deco's" ) );
    decoColorizeComboBox->clear();
    decoColorizeComboBox->insertItem( tr2i18n( "Liquid Method" ) );
    decoColorizeComboBox->insertItem( tr2i18n( "Kde Method" ) );
    decoColorizeComboBox->insertItem( tr2i18n( "Hue Adgustment" ) );
    textLabel3->setText( tr2i18n( "Buttons" ) );
    buttonsColorizeComboBox->clear();
    buttonsColorizeComboBox->insertItem( tr2i18n( "Liquid Method" ) );
    buttonsColorizeComboBox->insertItem( tr2i18n( "Kde Method" ) );
    buttonsColorizeComboBox->insertItem( tr2i18n( "Hue Adgustment" ) );
    tabWidget2->changeTab( TabPage, tr2i18n( "Color&s" ) );
    useCusBtnClrChkBox->setText( tr2i18n( "Use custom buttons colors" ) );
    buttonGroup16->setTitle( tr2i18n( "Custom Buttons Colors" ) );
    textLabel1_7->setText( tr2i18n( "Apply custom colors to:" ) );
    cusColActBtnChkBox->setText( tr2i18n( "Active buttons" ) );
    cusColInActBtnChkBox->setText( tr2i18n( "InActive buttons" ) );
    textLabel9->setText( tr2i18n( "Close" ) );
    closeClrBtn->setText( TQString::null );
    textLabel1->setText( tr2i18n( "Max" ) );
    maxClrBtn->setText( TQString::null );
    textLabel4_2->setText( tr2i18n( "Help" ) );
    helpClrBtn->setText( TQString::null );
    textLabel5->setText( tr2i18n( "Sticky" ) );
    stickyClrBtn->setText( TQString::null );
    textLabel7->setText( tr2i18n( "Above" ) );
    aboveClrBtn->setText( TQString::null );
    textLabel4_2_2->setText( tr2i18n( "Below" ) );
    belowClrBtn->setText( TQString::null );
    textLabel6_2->setText( tr2i18n( "Shade" ) );
    shadeClrBtn->setText( TQString::null );
    textLabel3_2->setText( tr2i18n( "Min" ) );
    minClrBtn->setText( TQString::null );
    textLabel2_2->setText( tr2i18n( "Restore" ) );
    restoreClrBtn->setText( TQString::null );
    textLabel8_2->setText( tr2i18n( "Menu" ) );
    menuClrBtn->setText( TQString::null );
    textLabel6->setText( tr2i18n( "Sticky Down" ) );
    stickyDownClrBtn->setText( TQString::null );
    textLabel8->setText( tr2i18n( "Above Down" ) );
    aboveDownClrBtn->setText( TQString::null );
    textLabel5_2->setText( tr2i18n( "Below Down" ) );
    belowDownClrBtn->setText( TQString::null );
    textLabel7_2->setText( tr2i18n( "Shade Down" ) );
    shadeDownClrBtn->setText( TQString::null );
    tabWidget2->changeTab( TabPage_2, tr2i18n( "Buttons" ) );
    buttonGroup3->setTitle( tr2i18n( "Tiles Path's" ) );
    textLabel1_2->setText( tr2i18n( "Frames tiles Path" ) );
    textLabel2->setText( tr2i18n( "Buttons tiles path" ) );
    useMasks_Chkbox->setText( tr2i18n( "&Use Masks" ) );
    useMasks_Chkbox->setAccel( TQKeySequence( tr2i18n( "Alt+U" ) ) );
    textLabel2_3->setText( tr2i18n( "Masks tiles path" ) );
    tabWidget2->changeTab( TabPage_3, tr2i18n( "&Paths" ) );
    buttonGroup10->setTitle( tr2i18n( "Preview" ) );
    TQWhatsThis::add( previewLabael, tr2i18n( "This is a Screen shot of what TDM will look like when you go to log in." ) );
    themesKlstView->header()->setLabel( 0, tr2i18n( "Theme Name" ) );
    installthemeBtn->setText( tr2i18n( "Install Ne&w Theme" ) );
    removeThemBtn->setText( tr2i18n( "R&emove Theme" ) );
    removeThemBtn->setAccel( TQKeySequence( tr2i18n( "Alt+E" ) ) );
    applyThemeBtn->setText( tr2i18n( "&Use This Theme" ) );
    applyThemeBtn->setAccel( TQKeySequence( tr2i18n( "Alt+M" ) ) );
    tabWidget2->changeTab( TabPage_4, tr2i18n( "&Themes" ) );
    textEdit1->setText( tr2i18n( "****** Summary ******\n"
"deKorator is a twin engine that takes several user-defined images and presents\n"
"them as a window decoration. deKorator expects to find those in a theme. Here\n"
"is a guide for building such a theme.\n"
"\n"
"****** In the package ******\n"
"deKorator comes with:\n"
"    * default-theme - Used by default, illustrates some of deKorator's\n"
"      features.\n"
"    * Bushido-Yellow-theme - shows how masking can be done.\n"
"\n"
"Some more themes are available in the extra/ directory of the source\n"
"distribution.\n"
"\n"
"****** Names ******\n"
"deKorator expects the same directory structure and file names as the ones in\n"
"default-theme. Every theme file should end with \"-theme\" (as in \"default-\n"
"theme\"), and should contain all the folders that are in default-theme (deco,\n"
"buttons, masks).\n"
"\n"
"****** Sizes ******\n"
"deKorator determines the 4 borders' sizes from:\n"
"\n"
"|Property 			|Source				|\n"
"------------------------------------------------------------------------------------------------\n"
"|the left border width   		|midLeftFrameBg's width		|\n"
"|the right border width  		|midRightFrameBg's width	|\n"
"|the top bar height      		|midTitleBg's height      		|\n"
"|the bottom border height        	|midBottomFrameBg's height	|\n"
"\n"
"All parts that build up a specific border should be in the same width or height\n"
"correspondingly. An example follows for a window decoration with a 10px high\n"
"top bar, a 20px wide left border, a 30px wide right border and a 40px high\n"
"bottom border.\n"
"\n"
"All tiles in the top bar should be 10 pixel high:\n"
"    * topLeftCornerBg\n"
"    * leftButtonsBg\n"
"    * leftTitleBg\n"
"    * midTitleBg\n"
"    * rightTitleBg\n"
"    * rightButtonsBg\n"
"    * topRightCornerBg\n"
"\n"
"All tiles in the left border should be 20 pixel wide:\n"
"    * topLeftFrameBg\n"
"    * midLeftFrameBg\n"
"    * bottomLeftFrameBg\n"
"\n"
"All tiles in the right border should be 30 pixel wide:\n"
"    * topRightFrameBg\n"
"    * midRightFrameBg\n"
"    * bottomRightFrameBg\n"
"\n"
"All tiles in the bottom border should be 40 pixel high:\n"
"    * leftBottomFrameBg\n"
"    * midBottomFrameBg\n"
"    * rightBottomFrameBg\n"
"\n"
"The corner tiles should fit into the tile grid:\n"
"Tile               Height Width\n"
"topLeftCornerBg    10     20\n"
"topRightCornerBg   10     30\n"
"leftBottomFrameBg  40     20\n"
"rightBottomFrameBg 40     30\n"
"\n"
"****** Buttons ******\n"
"The button images are separated into background and foreground ones.\n"
"\n"
"***** Background *****\n"
"The button background uses the leftButtonsBg and the rightButtonsBg tiles.\n"
"Their height should be the same as the top bar's. The background's repeated\n"
"horizontally to fit the buttons in.\n"
"\n"
"***** Foreground *****\n"
"The width is determined by the button width. This way theme makers can put the\n"
"buttons as close as they wish. To make space between buttons you can add\n"
"transparent pixels to the right and left. A button with a smaller height than\n"
"the top bar's gets centered vertically. To place the button in a custom height\n"
"use transparent pixels, too.\n"
"\n"
"****** Masks ******\n"
"Masks contain only black and white. Black pixels are subtracted from the\n"
"decoration.\n"
"\n"
"****** Image format ******\n"
"All images should be in PNG.\n"
"\n"
"****** Tips and Tricks ******\n"
"Allways start up building your theme from the template-theme.\n"
"" ) );
    tabWidget2->changeTab( TabPage_5, tr2i18n( "&Help" ) );
    kActiveLabel4->setText( tr2i18n( "<p align=\"center\"><h3>deKorator Window's Decoration Version 0.3</h3></p><br>\n"
"\n"
"\n"
"\n"
"<p align=\"center\">Art Designer:  jon clarke AKA  ArbitraryReason<br>  \n"
"Email: <a href=\"mailto:jjclarke2003@yahoo.com\"><font color=\"#ff0000\">jjclarke2003@yahoo.com</font></a><br>\n"
"<p align=\"center\">Theme contributer: Zoran Karavla AKA  the-error<br>  \n"
"Email: <a href=\"mailto:webmaster@the-error.net\"><font color=\"#ff0000\">webmaster@the-error.net</font></a><br>\n"
"<p align=\"center\">Author: moty rahamim<br>\n"
"Email: <a href=\"mailto:moty.rahamim@gmail.com\"><font color=\"#ff0000\">moty.rahamim@gmail.com</font></a></p>" ) );
    tabWidget2->changeTab( tab_2, tr2i18n( "&About" ) );
}

/****************************************************************************
** ConfigDialog meta object code from reading C++ file 'configdialog.h'
**
** Created by: The TQt Meta Object Compiler version 26 (TQt 3.5.0)
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "configdialog.h"
#include <ntqmetaobject.h>
#include <ntqapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.5.0. It"
#error "cannot be used with the include files from this version of TQt."
#error "(The moc has changed too much.)"
#endif

const char *ConfigDialog::className() const
{
    return "ConfigDialog";
}

TQMetaObject *ConfigDialog::metaObj = 0;
static TQMetaObjectCleanUp cleanUp_ConfigDialog( "ConfigDialog", &ConfigDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
TQString ConfigDialog::tr( const char *s, const char *c )
{
    if ( tqApp )
	return tqApp->translate( "ConfigDialog", s, c, TQApplication::DefaultCodec );
    else
	return TQString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
TQString ConfigDialog::trUtf8( const char *s, const char *c )
{
    if ( tqApp )
	return tqApp->translate( "ConfigDialog", s, c, TQApplication::UnicodeUTF8 );
    else
	return TQString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

TQMetaObject* ConfigDialog::staticMetaObject()
{
    if ( metaObj ) {
	return metaObj;
}
#ifdef QT_THREAD_SUPPORT
    if (tqt_sharedMetaObjectMutex) tqt_sharedMetaObjectMutex->lock();
    if ( metaObj ) {
	if (tqt_sharedMetaObjectMutex) tqt_sharedMetaObjectMutex->unlock();
	return metaObj;
    }
#endif // QT_THREAD_SUPPORT
    TQMetaObject* parentObject = TQWidget::staticMetaObject();
    static const TQUMethod slot_0 = {"languageChange", 0, 0 };
    static const TQMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, TQMetaData::Protected }
    };
    metaObj = TQMetaObject::new_metaobject(
	"ConfigDialog", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ConfigDialog.setMetaObject( metaObj );
#ifdef QT_THREAD_SUPPORT
    if (tqt_sharedMetaObjectMutex) tqt_sharedMetaObjectMutex->unlock();
#endif // QT_THREAD_SUPPORT
    return metaObj;
}

void* ConfigDialog::tqt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ConfigDialog" ) )
	return this;
    return TQWidget::tqt_cast( clname );
}

bool ConfigDialog::tqt_invoke( int _id, TQUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    default:
	return TQWidget::tqt_invoke( _id, _o );
    }
    return TRUE;
}

bool ConfigDialog::tqt_emit( int _id, TQUObject* _o )
{
    return TQWidget::tqt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ConfigDialog::tqt_property( int id, int f, TQVariant* v)
{
    return TQWidget::tqt_property( id, f, v);
}

bool ConfigDialog::tqt_static_property( TQObject* , int , int , TQVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES

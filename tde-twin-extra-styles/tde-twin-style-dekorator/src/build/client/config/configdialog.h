/****************************************************************************
** Form interface generated from reading ui file 'configdialog.ui'
**
** Created by: The TQt user interface compiler (TQt 3.5.0)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <ntqvariant.h>
#include <ntqwidget.h>

class TQVBoxLayout;
class TQHBoxLayout;
class TQGridLayout;
class TQSpacerItem;
class TQTabWidget;
class TQGroupBox;
class TQButtonGroup;
class TQRadioButton;
class TQCheckBox;
class TQLabel;
class TQSpinBox;
class KColorButton;
class TQComboBox;
class KURLRequester;
class TDEListView;
class TQPushButton;
class TQTextEdit;
class KActiveLabel;

class ConfigDialog : public TQWidget
{
    TQ_OBJECT

public:
    ConfigDialog( TQWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~ConfigDialog();

    TQTabWidget* tabWidget2;
    TQWidget* tab;
    TQGroupBox* generalbox;
    TQButtonGroup* titlealign;
    TQRadioButton* AlignLeft;
    TQRadioButton* AlignHCenter;
    TQRadioButton* AlignRight;
    TQButtonGroup* buttonGroup6;
    TQCheckBox* useShdtextChkBox;
    TQButtonGroup* buttonGroup7;
    TQLabel* textLabel1_5;
    TQSpinBox* activeShdtextXSpinBox;
    TQLabel* textLabel1_5_2;
    TQSpinBox* activeShdtextYSpinBox;
    TQLabel* textLabel1_6;
    KColorButton* activeShdColBtn;
    TQButtonGroup* buttonGroup7_2;
    TQLabel* textLabel1_5_4;
    TQSpinBox* inActiveShdtextXSpinBox;
    TQLabel* textLabel1_5_2_3;
    TQSpinBox* inActiveShdtextYSpinBox;
    TQLabel* textLabel1_6_3;
    KColorButton* inActiveShdColBtn;
    TQButtonGroup* buttonGroup9;
    TQLabel* textLabel1_5_3;
    TQSpinBox* btnShiftXSpinBox;
    TQLabel* textLabel1_5_2_2;
    TQSpinBox* btnShiftYSpinBox;
    TQCheckBox* useMenuImageChkBox;
    TQCheckBox* ignoreAppIcnCol;
    TQCheckBox* dblClkCloseChkBox;
    TQCheckBox* showBtmBorderChkBox;
    TQWidget* TabPage;
    TQButtonGroup* buttonGroup2;
    TQButtonGroup* buttonGroup14;
    TQCheckBox* colorizeActFramesChkBox;
    TQCheckBox* colorizeActButtonsChkBox;
    TQButtonGroup* buttonGroup14_2;
    TQCheckBox* colorizeInActFramesChkBox;
    TQCheckBox* colorizeInActButtonsChkBox;
    TQButtonGroup* buttonGroup5;
    TQCheckBox* useAnimChkBox;
    TQButtonGroup* buttonGroup12;
    TQComboBox* animateEfeectsCombo;
    TQLabel* textLabel1_8;
    TQSpinBox* stepsSpinBox;
    TQLabel* textLabel2_5;
    TQSpinBox* intervalSpinBox;
    TQCheckBox* KeepAnimateChkBox;
    TQButtonGroup* buttonGroup11;
    TQComboBox* hoverTypeCombo;
    TQLabel* textLabel1_4;
    TQSpinBox* effectsAmount_SpinBox;
    TQButtonGroup* buttonGroup13;
    TQLabel* textLabel1_3;
    KColorButton* activeHighlightClrBtn;
    TQLabel* textLabel1_3_2;
    KColorButton* inActiveHighlightClrBtn;
    TQButtonGroup* buttonGroup5_2;
    TQLabel* textLabel2_4;
    TQComboBox* decoColorizeComboBox;
    TQLabel* textLabel3;
    TQComboBox* buttonsColorizeComboBox;
    TQWidget* TabPage_2;
    TQCheckBox* useCusBtnClrChkBox;
    TQButtonGroup* buttonGroup16;
    TQLabel* textLabel1_7;
    TQCheckBox* cusColActBtnChkBox;
    TQCheckBox* cusColInActBtnChkBox;
    TQLabel* textLabel9;
    KColorButton* closeClrBtn;
    TQLabel* textLabel1;
    KColorButton* maxClrBtn;
    TQLabel* textLabel4_2;
    KColorButton* helpClrBtn;
    TQLabel* textLabel5;
    KColorButton* stickyClrBtn;
    TQLabel* textLabel7;
    KColorButton* aboveClrBtn;
    TQLabel* textLabel4_2_2;
    KColorButton* belowClrBtn;
    TQLabel* textLabel6_2;
    KColorButton* shadeClrBtn;
    TQLabel* textLabel3_2;
    KColorButton* minClrBtn;
    TQLabel* textLabel2_2;
    KColorButton* restoreClrBtn;
    TQLabel* textLabel8_2;
    KColorButton* menuClrBtn;
    TQLabel* textLabel6;
    KColorButton* stickyDownClrBtn;
    TQLabel* textLabel8;
    KColorButton* aboveDownClrBtn;
    TQLabel* textLabel5_2;
    KColorButton* belowDownClrBtn;
    TQLabel* textLabel7_2;
    KColorButton* shadeDownClrBtn;
    TQWidget* TabPage_3;
    TQButtonGroup* buttonGroup3;
    TQLabel* textLabel1_2;
    KURLRequester* framesPathKurl;
    TQLabel* textLabel2;
    KURLRequester* buttonsPathKurl;
    TQCheckBox* useMasks_Chkbox;
    TQLabel* textLabel2_3;
    KURLRequester* masksPathKurl;
    TQWidget* TabPage_4;
    TQButtonGroup* buttonGroup10;
    TQLabel* previewLabael;
    TDEListView* themesKlstView;
    TQPushButton* installthemeBtn;
    TQPushButton* removeThemBtn;
    TQPushButton* applyThemeBtn;
    TQWidget* TabPage_5;
    TQTextEdit* textEdit1;
    TQWidget* tab_2;
    KActiveLabel* kActiveLabel4;

protected:
    TQVBoxLayout* ConfigDialogLayout;
    TQVBoxLayout* tabLayout;
    TQSpacerItem* spacer11_2;
    TQVBoxLayout* generalboxLayout;
    TQHBoxLayout* titlealignLayout;
    TQVBoxLayout* buttonGroup6Layout;
    TQHBoxLayout* layout15;
    TQVBoxLayout* buttonGroup7Layout;
    TQHBoxLayout* layout11;
    TQHBoxLayout* layout10;
    TQVBoxLayout* buttonGroup7_2Layout;
    TQHBoxLayout* layout11_2;
    TQHBoxLayout* layout14;
    TQVBoxLayout* buttonGroup9Layout;
    TQHBoxLayout* layout17;
    TQSpacerItem* spacer2;
    TQHBoxLayout* layout16;
    TQVBoxLayout* TabPageLayout;
    TQSpacerItem* spacer6;
    TQVBoxLayout* buttonGroup2Layout;
    TQHBoxLayout* layout19;
    TQVBoxLayout* buttonGroup14Layout;
    TQVBoxLayout* buttonGroup14_2Layout;
    TQVBoxLayout* buttonGroup5Layout;
    TQHBoxLayout* layout18;
    TQVBoxLayout* buttonGroup12Layout;
    TQHBoxLayout* layout37;
    TQVBoxLayout* buttonGroup11Layout;
    TQHBoxLayout* layout14_2;
    TQVBoxLayout* buttonGroup13Layout;
    TQHBoxLayout* layout19_2;
    TQHBoxLayout* layout17_2;
    TQHBoxLayout* layout18_2;
    TQHBoxLayout* buttonGroup5_2Layout;
    TQVBoxLayout* layout38;
    TQVBoxLayout* layout39;
    TQVBoxLayout* TabPageLayout_2;
    TQSpacerItem* spacer18;
    TQVBoxLayout* buttonGroup16Layout;
    TQSpacerItem* spacer10_2;
    TQHBoxLayout* layout37_2;
    TQHBoxLayout* layout42;
    TQVBoxLayout* layout41;
    TQHBoxLayout* layout38_2;
    TQHBoxLayout* layout25;
    TQHBoxLayout* layout28;
    TQHBoxLayout* layout29;
    TQHBoxLayout* layout32;
    TQHBoxLayout* layout28_2;
    TQHBoxLayout* layout31_2;
    TQVBoxLayout* layout36;
    TQHBoxLayout* layout27;
    TQHBoxLayout* layout26;
    TQHBoxLayout* layout33_2;
    TQHBoxLayout* layout31;
    TQHBoxLayout* layout33;
    TQHBoxLayout* layout29_2;
    TQHBoxLayout* layout32_2;
    TQVBoxLayout* TabPageLayout_3;
    TQSpacerItem* spacer12_2;
    TQVBoxLayout* buttonGroup3Layout;
    TQVBoxLayout* TabPageLayout_4;
    TQVBoxLayout* buttonGroup10Layout;
    TQHBoxLayout* layout12;
    TQSpacerItem* spacer5;
    TQSpacerItem* spacer4;
    TQHBoxLayout* layout13;
    TQVBoxLayout* TabPageLayout_5;
    TQGridLayout* tabLayout_2;
    TQSpacerItem* spacer10;
    TQSpacerItem* spacer9;
    TQSpacerItem* spacer11;
    TQSpacerItem* spacer12;

protected slots:
    virtual void languageChange();

};

#endif // CONFIGDIALOG_H

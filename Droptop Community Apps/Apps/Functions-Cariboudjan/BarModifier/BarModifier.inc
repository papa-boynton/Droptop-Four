[Variables]
Functions.SearchButton=Search
Functions.VoiceTypingButton=VoiceTyping
Functions.ActionButton=Action
Functions.BluetoothButton=Bluetooth
Functions.WidgetsButton=Widgets
Functions.LanguageButton=Language

SearchLink0=[#SearchMode[#SearchModeNum]]
SearchLink1=[]
SearchLinkSelect=0

VoiceTypingButton1=["#@#Scripts\DroptopAHK.#AHKType#" "VoiceTyping"]
VoiceTypingButton0=["#@#Scripts\DroptopAHK.#AHKType#" "EscapeKey"]
VoiceTypingSelect=0

ActionButton0=[ms-actioncenter:]
ActionButton1=[]
ActionSelect=0

BluetoothAction0=
; BluetoothAction0=[!SetVariable BTStatus 1][!WriteKeyValue Variables BTStatus [#*BTStatus*] "#SKINSPATH#Droptop\Other\BackgroundProcesses\BluetoothVariables.inc"][!CommandMeasure "BluetoothStatusMeasure" "EnableBluetooth" "Droptop\Other\BackgroundProcesses"][!UpdateMeasure BluetoothStatusMeasure "Droptop\Other\BackgroundProcesses"][!UpdateMeasureGroup BluetoothPlugin "Droptop\Other\BackgroundProcesses"][!CommandMeasure LuaScript "Refresh()" "Droptop\Other\BackgroundProcesses"][!CommandMeasure LuaScript "RefreshStatus()" "Droptop\Other\BackgroundProcesses"][!UpdateMeter [#*CURRENTSECTION*]][!Redraw]
BluetoothAction1=

[Functions-Cariboudjan.Style]
ImageAlpha=0
W=((((((#TopHeight#+#TopBarIconHOffset#)*1.5)+(#TopBarSysAppWPadding#*2))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)+(#TopBarSysAppWPadding#*2))%1))*(#ShowSearchButton#+#ShowVoiceTypingButton#+#ShowActionButton#+#ShowWidgetsButton#+#ShowBluetoothButton#))+(((((#TopHeight#+#TopBarIconHOffset#)*2.5)+(#TopBarSysAppWPadding#*2))-((((#TopHeight#+#TopBarIconHOffset#)*2.5)+(#TopBarSysAppWPadding#*2))%1))*#ShowLanguageButton#))
MouseOverAction=[]

[Functions-Cariboudjan]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
LeftMouseDownAction=[]
MouseOverAction=[!Delay 10][!SetOption MeasureActionTimer Click1B[&mItemSubFolderID] """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID]
MouseLeaveAction=[!SetOptionGroup FunctionButtons ImageAlpha "#*TopBarTitleOpacity*#"][!SetOptionGroup FunctionButtons InlineSetting3 ""][!UpdateMeterGroup FunctionButtons]

[FunctionsButtonStyle]
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Functions-Cariboudjan\Icons\[##CURRENTSECTION#]\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]
Padding=#SysIconPadding#
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)*([#Show[##CURRENTSECTION#]Button]))
H=(#TopHeight#+#TopBarIconHOffset#)
Y=r
X=R
DynamicVariables=1
MouseOverAction=[!SetOptionGroup FunctionButtons ImageAlpha "(#*HighlightFontOpacity1*#/2)"][!SetOptionGroup FunctionButtons InlineSetting3 "Color | #*TopBarFontColor2*#,(#*HighlightFontOpacity1*#/2)"][!SetOption #CURRENTSECTION# ImageAlpha "#*HighlightFontOpacity1*#"][!SetOption #CURRENTSECTION# InlineSetting3 "Color | #*TopBarFontColor2*#,#*HighlightFontOpacity1*#"][!UpdateMeterGroup FunctionButtons][!Redraw]
MouseLeaveAction=
Group=SysTray | CustomApp#Functions-Cariboudjan#Sys | FunctionButtons
Hidden=(([#Show[##CURRENTSECTION#]Button]-1)*-1)

[Functions.SearchButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
X=[Functions-Cariboudjan:X]
Y=[Functions-Cariboudjan:Y]
LeftMouseDownAction=[!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!EnableMouseActionGroup "MouseOverAction" Buttons00][#SearchLink[#SearchLinkSelect]][!SetVariable SearchLinkSelect (#SearchLinkSelect#=1?0:1)][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!HideMeterGroup HighlightSelected][!UpdateMeterGroup SysTray][!UpdateMeter #CURRENTSECTION#][!Redraw][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
MouseLeaveAction=[!SetVariable SearchLinkSelect 0][!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#]

[Functions.VoiceTypingButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
Y=[Functions-Cariboudjan:Y]
LeftMouseDownAction=[!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!HideMeterGroup HighlightSelected][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!UpdateMeterGroup SysTray][!Redraw]["#@#Scripts\DroptopAHK.#AHKType#" "VoiceTyping"][!UpdateMeter #CURRENTSECTION#][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
MouseLeaveAction=[!SetVariable VoiceTypingSelect 0][!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#]

[Functions.ActionButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
Y=[Functions-Cariboudjan:Y]
LeftMouseDownAction=[!CommandMeasure MeasureActionTimer "Stop 3"][#ActionButton[#ActionSelect]][!SetVariable ActionSelect (#ActionSelect#=1?0:1)][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!HideMeterGroup HighlightSelected][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\Folders\Folder#ActiveFolder#"][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\PowerMenu"][!UpdateMeter *][!Redraw][!Log "#ErrorMessage#" Notice][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
MouseLeaveAction=[!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Functions.WidgetsButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
Y=[Functions-Cariboudjan:Y]
LeftMouseDownAction=[!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideGroup ContextBox][!HideGroup SettingsMenu][!HideMeterGroup HighlightSelected][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!UpdateMeterGroup SysTray][!Redraw]["#@#Scripts\DroptopAHK.#AHKType#" "WinWidgets"][!UpdateMeter #CURRENTSECTION#][!Delay 105][!HideGroup SettingsMenu][!HideGroup ContextBox]
MouseLeaveAction=[!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Functions.BluetoothButton]
Meter=Image
MeterStyle=FunctionsButtonStyle
Y=[Functions-Cariboudjan:Y]
ImageName=#SKINSPATH#Droptop Community Apps\Apps\Functions-Cariboudjan\Icons\[##CURRENTSECTION#]\Button1[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]]
LeftMouseDownAction=[!DeactivateConfig "Droptop\Other\Apps\Wifi\Folder"][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][!EnableMouseActionGroup "MouseOverAction" Buttons00][!HideFadeGroup Folders][!HideFadeGroup Tray][!HideFadeGroup WebView][!HideFadeGroup ContextBox][!HideFadeGroup SettingsMenu][!Redraw][#BluetoothAction[#BTStatus]][!Hide "Droptop\Other\Apps\Wifi\Folder"][!SetVariable ActionTimer.StartAnimationSysSub 0 "Droptop\Other\Apps\Wifi\Folder"][!ActivateConfig "Droptop\Other\Apps\Wifi\Folder" "Folder4.ini"][!SetAnchor "0%" "0%" "Droptop\Other\Apps\Wifi\Folder"][!SetWindowPosition ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+(([#CURRENTCONFIGX]+[#CURRENTSECTION#:X])<([#CURRENTCONFIGWIDTH]/2)?0:[#CURRENTSECTION#:W])-1) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownMenuYOffset#) "(([#CURRENTCONFIGX]+[#CURRENTSECTION#:X])<([#CURRENTCONFIGWIDTH]/2)?0:100)%" "0" "Droptop\Other\Apps\Wifi\Folder"][!SetVariable SelectedFolderY [#CurrentSubFolder#:Y] "Droptop\Other\Apps\Wifi\Folder"][!SetVariable ParentFolderX [#CURRENTCONFIGX] "Droptop\Other\Apps\Wifi\Folder"][!UpdateMeasure * "Droptop\Other\Apps\Wifi\Folder"][!UpdateMeter HighlightSelected][!HideMeter HighlightSelected][!Redraw][!HideMeter 99Icon "Droptop\Other\Apps\Wifi\Folder"][!UpdateMeter * "Droptop\Other\Apps\Wifi\Folder"][!Redraw "Droptop\Other\Apps\Wifi\Folder"][!CommandMeasure MeasureActionTimer "Stop 2" "Droptop\Other\Apps\Wifi\Folder"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\Apps\Wifi\Folder"][!SetVariable ActionTimer.ActionNum 0][!DisableMeasure #CURRENTSECTION#]
MouseLeaveAction=[!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Functions.LanguageButton]
StringAlign=CenterCenter
Meter=String
MeterStyle=InfoStyle | FunctionsButtonStyle
StringCase=UPPER
Text=#CurrentLanguageID#
X=((((#TopHeight#+#TopBarIconHOffset#)*2.5)*([#Show[#Functions.LanguageButton]Button]))/2)R
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))
W=(((#TopHeight#+#TopBarIconHOffset#)*2.5)*([#Show[#Functions.LanguageButton]Button]))
FontSize=((#TopHeight#+#TopBarIconHOffset#)/2.5)
LeftMouseDownAction=[!WriteKeyValue Variables NotificationText "#KeyboardLayoutTip#" "#SKINSPATH#Droptop\Other\NotificationPopup\NotificationPopup.ini"][!DeactivateConfig "Droptop\Other\NotificationPopup"][!ActivateConfig "Droptop\Other\NotificationPopup" "NotificationPopup.ini"][!Move ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+([#CURRENTSECTION#:W]/2)) ([#CURRENTCONFIGY]+#TopHeight#) "Droptop\Other\NotificationPopup"]
MouseLeaveAction=[!SetVariable ActionSelect 0][!UpdateMeter #CURRENTSECTION#]
DynamicVariables=1

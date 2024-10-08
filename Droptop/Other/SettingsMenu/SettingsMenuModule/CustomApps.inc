[Rainmeter]
OnRefreshAction=[!ShowMeterGroup [#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]ItemCount]][!ShowMeterGroup F[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount]][!ShowMeterGroup D[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]DividerCount]][!Delay 200][!CommandMeasure MeasureActionTimer "Execute 4" "Droptop\Other\SettingsMenu\SettingsMenu2"]

@IncludeMeters=#@#GlobalVar\FolderSettings.inc

[Variables]
16=1
32=2

; DropdownItemPadding1=(63*#DroptopSize#)
; DropdownIconXoffset=(34*#DroptopSize#)

MeasureAppName1=1
MeasureAppName2=2
MeasureAppName3=3
MeasureAppName4=4
MeasureAppName5=5
MeasureAppName6=6
MeasureAppName7=7
MeasureAppName8=8
MeasureAppName9=9
MeasureAppName10=10

1ToggleIconNum=1
2ToggleIconNum=2
3ToggleIconNum=3
4ToggleIconNum=4
5ToggleIconNum=5
6ToggleIconNum=6
7ToggleIconNum=7
8ToggleIconNum=8
9ToggleIconNum=9
10ToggleIconNum=10

;----------------------------------------------------

[MeasureAppName1]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName2]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName3]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName4]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName5]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName6]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName7]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName8]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName9]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName10]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

;----------------------------------------------------

[InfoStyle]
; X=(40*#DroptopSize#)
; Padding=(#DropdownItemPadding1#-(40*#DroptopSize#)),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageAlpha "([#HideAppCustomApp[##*CURRENTSECTION*#]]=1?(#*DropdownItemOpacity*#/3):#*HighlightFontOpacity2*#)"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageAlpha "([#HideAppCustomApp[##*CURRENTSECTION*#]]=1?(#*DropdownItemOpacity*#/3):#*DropdownItemOpacity*#)"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!ShowMeter HighlightSelected][!Redraw]

[CustomAppIconStyle]
ImageCrop=-16,-16,32,32,5
ImageAlpha=([#HideAppCustomApp[##CURRENTSECTION#]]=1?(#DropdownItemOpacity#/3):#DropdownItemOpacity#)
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\Button.png
; Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*([##CURRENTSECTION#]-1)))
W=#IconW#
H=#IconH#

[SupporterLockedStyle0]
ImageName=#@#Icons\Fixed\#IconSize#\lock.png
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
ImageAlpha=(#DropdownItemOpacity#/3)
FillColor=Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/3)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]

[SupporterLockedStyle1]

[6]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[7]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[8]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[9]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[10]
MeterStyle=InfoStyle | SupporterLockedStyle#Supporter#

[1Icon]
MeterStyle=IconStyle | CustomAppIconStyle
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1)

[2Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[3Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[4Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[5Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[6Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[7Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[8Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[9Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[10Icon]
MeterStyle=IconStyle | CustomAppIconStyle | SupporterLockedStyle#Supporter#

[6Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[7Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[8Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[9Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[10Arrow]
MeterStyle=ArrowStyle | SupporterLockedStyle#Supporter#

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*10)-(#DividerHeight#/2))

[11]
Y=(#DividerSpace#*2)R

[11Icon]
MeterStyle=IconStyle
Y=(#DividerSpace#*2)R

[11Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*10)+(#DividerSpace#*2))
Hidden=0
DynamicVariables=1

[Divider2]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*11)-(#DividerHeight#/2))

[12]
Y=(#DividerSpace#*2)R

[12Icon]
MeterStyle=IconStyle
Y=(#DividerSpace#*2)R

[12Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*11)+(#DividerSpace#*4))
Hidden=0
DynamicVariables=1

[13]

[13Icon]
MeterStyle=IconStyle

[13Arrow]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*12)+(#DividerSpace#*4))
Hidden=0
DynamicVariables=1

[FolderBlockB]
Meter=Image
X=1
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*10)+(#DividerSpace#*2))
W=#DropdownMenuWidth#
H=#DropdownItemHeight#
; LeftMouseDownAction=[!SetTransparencyGroup 0 SM3][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [[#CurrentSubFolder]:Y]][!WriteKeyValue Variables SettingsMenuNumber "1.7.[#CurrentSubFolder]" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuIndex3 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYOffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!DeactivateConfig "Droptop\Other\SettingsMenu\SettingsMenu3"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu3"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+[[#CurrentSubFolder]:Y]) "Droptop\Other\SettingsMenu\SettingsMenu3"][!ShowFade "Droptop\Other\SettingsMenu\SettingsMenu3"][!UpdateMeter HighlightSelected][!Redraw][!CommandMeasure MeasureActionTimer "Stop 4" "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 4" "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"]
LeftMouseDownAction=#ResetActiveFolders#[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]
; MouseOverAction=[!SetVariable FolderMode 1][!CommandMeasure MeasureActionTimer "Execute 1"]
; MouseLeaveAction=[!SetVariable FolderMode 0][!CommandMeasure MeasureActionTimer "Stop 1"]
MouseOverAction=[!SetVariable FolderMode 1]
MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1
Group=Items

[FolderBlockC]
Meter=Image
X=1
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*11)+(#DividerSpace#*4))
W=#DropdownMenuWidth#
H=(#DropdownItemHeight#*2)
; LeftMouseDownAction=[!SetTransparencyGroup 0 SM3][!Refresh "Droptop\Other\SettingsMenu\SettingsMenu3"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [[#CurrentSubFolder]:Y]][!WriteKeyValue Variables SettingsMenuNumber "1.7.[#CurrentSubFolder]" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuIndex3 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYOffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu3"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+[[#CurrentSubFolder]:Y]) "Droptop\Other\SettingsMenu\SettingsMenu3"][!ShowFade "Droptop\Other\SettingsMenu\SettingsMenu3"][!UpdateMeter HighlightSelected][!Redraw][!CommandMeasure MeasureActionTimer "Stop 4" "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 4" "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"]
LeftMouseDownAction=#ResetActiveFolders#[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]
; MouseOverAction=[!SetVariable FolderMode 1][!CommandMeasure MeasureActionTimer "Execute 1"]
; MouseLeaveAction=[!SetVariable FolderMode 0][!CommandMeasure MeasureActionTimer "Stop 1"]
MouseOverAction=[!SetVariable FolderMode 1]
MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1
Group=Items

; [ToggleIconStyle]
; ; ImageAlpha=([#HideAppCustomApp[##CURRENTSECTION#Num]]=1?(#DropdownItemOpacity#/3):(#DropdownItemOpacity#*0.9)
; ImageAlpha=(#DropdownItemOpacity#/2)
; ImageName=#@#Icons\Fixed\Medium\toggle.png
; ImageFlip=[#IconFlip1[#HideAppCustomApp[##CURRENTSECTION#Num]]]
; LeftMouseDownAction=#OptionChanged.Suite#[!SetVariable HideAppCustomApp[##CURRENTSECTION#Num] ([#HideAppCustomApp[##CURRENTSECTION#Num]]=1?0:1)][!WriteKeyValue Variables HideAppCustomApp[##CURRENTSECTION#Num] [#HideAppCustomApp[##CURRENTSECTION#Num]] "#@#GlobalVar\FolderSettings.inc"][!SetVariable IsOverflowCustomApp[##CURRENTSECTION#Num] 0][!SetVariable IsOverflowCustomApp[##CURRENTSECTION#Num] 0 "Droptop\DropdownBar"][!SetVariable IsOverflowCustomApp[##CURRENTSECTION#Num]] 0 "Droptop\Other\BackgroundProcesses"][!WriteKeyValue Variables IsOverflowCustomApp[##CURRENTSECTION#Num] 0 "#@#GlobalVar\FolderSettings.inc"][!UpdateMeter *][!Redraw]
; MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #*DropdownItemOpacity*#][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha (#*DropdownItemOpacity*#/2)][!UpdateMeter #CURRENTSECTION#][!Redraw]
; Hidden=0
; X=r
; Y=R

; [1ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle
; X=(#DropdownIconXoffset#-(25*#DroptopSize#))
; Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+1)

; [2ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle

; [3ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle

; [4ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle

; [5ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle

; [6ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle

; [7ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle

; [8ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle

; [9ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle

; [10ToggleIcon]
; Meter=Image
; MeterStyle=IconStyle | ToggleIconStyle

; [11ToggleIcon]
; Meter=String

; [12ToggleIcon]
; Meter=String

; [13ToggleIcon]
; Meter=String

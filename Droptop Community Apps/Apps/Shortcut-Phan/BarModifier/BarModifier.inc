[Variables]
Shortcut-Phan.LeftMouseDownAction=[]
Shortcut-Phan.ButtonAction=[]
Shortcut-Phan.MouseOverAction=[!SetOptionGroup [#*CURRENTSECTION*]Sys ImageTint "255,255,255,#*TopBarTitleOpacity*#"][!UpdateMeterGroup [#*CURRENTSECTION*]Sys][!Redraw]
Shortcut-Phan.MouseLeaveAction=[!SetOptionGroup [#*CURRENTSECTION*]Sys ImageTint "255,255,255,#*TopBarTitleOpacity*#"][!UpdateMeterGroup [#*CURRENTSECTION*]Sys][!Redraw]

[Shortcut-Phan.Style]
ImageAlpha=(#Shortcut.NumberOfItems#=0?255:0)
; W=((((((#TopHeight#-#TopIconWH#)/2)*2)+#TopIconWH#)-(((((#TopHeight#-#TopIconWH#)/2)*2)+#TopIconWH#)%1))*(#Shortcut.NumberOfItems#=0?1:#Shortcut.NumberOfItems#))
; W=(((#TopHeight#*1)+((#TopHeight#*1)-#TopIconWH#))*(#Shortcut.NumberOfItems#=0?1:#Shortcut.NumberOfItems#))
; W=(((#TopHeight#*#Shortcut.IconSize#)+(((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)*2))*(#Shortcut.NumberOfItems#=0?1:#Shortcut.NumberOfItems#))
W=(((#TopHeight#*#Shortcut.IconSize#)+(((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)*2))*(#Shortcut.NumberOfItems#=0?1:#Shortcut.NumberOfItems#))

[Shortcut-Phan]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
LeftMouseDownAction=["#SKINSPATH#Droptop Community Apps\Apps\Shortcut-Phan\Shortcuts"]
MouseOverAction=[!Delay 10][!SetOption MeasureActionTimer Click1B[&mItemSubFolderID] """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID]
MouseLeaveAction=[!SetOptionGroup ShortcutButtons ImageAlpha "#*TopBarTitleOpacity*#"][!UpdateMeterGroup ShortcutButtons]

; --------

[Shortcut.mPath]
Measure=Plugin
Plugin=FileView
Path="#SKINSPATH#Droptop Community Apps\Apps\Shortcut-Phan\Shortcuts"
ShowDotDot=0
SortType=Name
SortAscending=0
SortDateType=Modified
ShowFile=1
ShowFolder=0
ShowSystem=0
ShowHidden=0
HideExtensions=0
;WildCardSearch="**"
;Recursive=0
Count=10
FinishAction=[!UpdateMeterGroup Items][!Redraw]
Group=Shortcut.mPath | FileName | IconImage

;----------------------------------------------------

[Shortcut.FileCount]
Measure=Plugin
Plugin=FolderInfo
Folder="[Shortcut.mPath]"
InfoType=FileCount
IncludeHiddenFiles=0
IncludeSubFolders=0
IncludeSystemFiles=0
RegExpFilter=(?i).*.*
DynamicVariables=1
Group=UpdateMeasure10S
OnChangeAction=[!Refresh]

[Shortcut.AnalyzeTotal]
Measure=Calc
Formula=Shortcut.FileCount
IfCondition=#CURRENTSECTION# > 10
IfTrueAction=[!WriteKeyValue Variables Shortcut.AboveTotal 1 "#MyVariablesLoc#"][!WriteKeyValue Variables Shortcut.NumberOfItems 10 "#MyVariablesLoc#"][!SetVariable Shortcut.NumberOfItems 10][!SetVariable Shortcut.AboveTotal 1][!ShowMeterGroup 10][!UpdateMeter *][!Redraw]
IfFalseAction=[!WriteKeyValue Variables Shortcut.AboveTotal 0 "#MyVariablesLoc#"][!WriteKeyValue Variables Shortcut.NumberOfItems ([#CURRENTSECTION#]=0?0:[#CURRENTSECTION#]) "#MyVariablesLoc#"][!SetVariable Shortcut.NumberOfItems ([#CURRENTSECTION#]=0?0:[#CURRENTSECTION#])][!SetVariable Shortcut.AboveTotal 0][!ShowMeterGroup [#CURRENTSECTION#]][!UpdateMeter *][!Redraw]

;----------------------------------------------------

[Shortcut.mIndex1Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=1

[Shortcut.mIndex2Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=2

[Shortcut.mIndex3Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=3

[Shortcut.mIndex4Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=4

[Shortcut.mIndex5Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=5

[Shortcut.mIndex6Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=6

[Shortcut.mIndex7Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=7

[Shortcut.mIndex8Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=8

[Shortcut.mIndex9Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=9

[Shortcut.mIndex10Icon]
Measure=Plugin
Plugin=FileView
Path=[Shortcut.mPath]
Type=Icon
IconSize=Medium
Group=Shortcut.mPath | IconImage
Index=10

; --------

[ShortcutButtonStyle]
MeasureName=Shortcut.mIndex#CURRENTSECTION#Icon
MouseOverAction=[!SetOptionGroup Items ImageAlpha "(#*TopBarTitleOpacity*#/2)"][!SetOption #CURRENTSECTION# ImageAlpha "#*TopBarTitleOpacity*#"][!UpdateMeterGroup Items][!Redraw]
MouseLeaveAction=
LeftMouseDownAction=[!CommandMeasure Shortcut.mIndex#CURRENTSECTION#Icon "Open"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
X=R
Padding=((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1),((#TopHeight#-(#TopHeight#*#Shortcut.IconSize#))/2),((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1),(((#TopHeight#-(#TopHeight#*#Shortcut.IconSize#))/2)-(((#TopHeight#-(#TopHeight#*#Shortcut.IconSize#))/2)%1))
Y=0
W=(#TopHeight#*#Shortcut.IconSize#)
H=(#TopHeight#*#Shortcut.IconSize#)
Container=SystemTrayContainer
ImageAlpha=(255*(([#HideAppCustomApp[#Shortcut-Phan]]-1)*-1))
DynamicVariables=1
Greyscale=#Shortcut.Greyscale#
Group=SysTray
Hidden=1

[1]
Meter=Image
MeterStyle=ShortcutButtonStyle
X=([#SideAppSlotXPos[#SideAppPosCustomApp[#Shortcut-Phan]]]+#TopBarSysAppWPadding#)
Y=0
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys

[2]
Meter=Image
MeterStyle=ShortcutButtonStyle
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys

[3]
Meter=Image
MeterStyle=ShortcutButtonStyle
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys

[4]
Meter=Image
MeterStyle=ShortcutButtonStyle
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys

[5]
Meter=Image
MeterStyle=ShortcutButtonStyle
Group=5 | 6 | 7 | 8 | 9 | 10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys

[6]
Meter=Image
MeterStyle=ShortcutButtonStyle
Group=6 | 7 | 8 | 9 | 10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys

[7]
Meter=Image
MeterStyle=ShortcutButtonStyle
Group=7 | 8 | 9 | 10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys

[8]
Meter=Image
MeterStyle=ShortcutButtonStyle
Group=8 | 9 | 10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys

[9]
Meter=Image
MeterStyle=ShortcutButtonStyle
Group=9 | 10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys

[10]
Meter=Image
MeterStyle=ShortcutButtonStyle
Group=10 | Items | ItemName | Animation | ShortcutButtons | SysTray | CustomApp#Shortcut-Phan#Sys
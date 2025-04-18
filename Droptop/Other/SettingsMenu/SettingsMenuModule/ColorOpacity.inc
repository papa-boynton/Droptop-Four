[Rainmeter]

[Variables]

SetChangesAction=

[CheckSetColorByWallpaperOFF]
Measure=Calc
IfCondition=#LockSetColorByWallpaperOFF#=1
IfTrueAction=[!SetOption 1 FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 1Icon ImageAlpha (#*DropdownItemOpacity*#/3)][!SetOption 1Icon ImageName "#@#Icons\Fixed\#IconSize#\x.png"][!SetOption 1Icon MaskImageName "#@#Icons\Fixed\#IconSize#\blank.png"][!DisableMouseAction 1 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!UpdateMeter *][!Redraw]
IfCondition2=#SetColorByWallpaperOFF#=0
IfTrueAction2=[!EnableMouseActionGroup * ReverseOption][!DisableMouseActionGroup * ColorOption][!HideMeter HighlightSelected][!SetOptionGroup ColorOption FontColor "[#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!SetOption ColorOption FontColor "[#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!SetOptionGroup ReverseOption FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup F9 FillColor "Fill Color [#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!UpdateMeterGroup ColorOption][!Redraw]
IfFalseAction2=[!DisableMouseActionGroup * ReverseOption][!EnableMouseActionGroup * ColorOption][!EnableMouseAction FolderBlock *][!SetOptionGroup ColorOption FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup ReverseOption FontColor "[#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!SetOptionGroup F9 FillColor "Fill Color [#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!UpdateMeterGroup ColorOption][!Redraw]
IfCondition3=#LockColorReset#=1
IfTrueAction3=[!SetOption 10 FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 10Icon ImageAlpha (#*DropdownItemOpacity*#/3)][!SetOption 10Icon ImageName "#@#Icons\Fixed\#IconSize#\x.png"][!DisableMouseAction 10 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!UpdateMeter *][!Redraw]
UpdateDivider=-1
IfConditionMode=1
DynamicVariables=1

[InfoStyleB]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!Redraw]

[FolderBlock]
H=(#DropdownItemHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount])
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*1)+(#DividerSpace#*2))
Group=ColorOption

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[2]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[2Icon]
Y=(#DividerSpace#*2)R
Hidden=1
Group=None

[2Arrow]
Y=(#DividerSpace#*2)R
Group=F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22 | F23 | F24 | F25 | F26 | F27 | ColorOption

[3]
MeterStyle=InfoStyle | InfoStyleB
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[3Icon]
Hidden=1
Group=None

[4]
MeterStyle=InfoStyle | InfoStyleB
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[4Icon]
Hidden=1
Group=None

[5]
MeterStyle=InfoStyle | InfoStyleB
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[5Icon]
Hidden=1
Group=None

[6]
MeterStyle=InfoStyle | InfoStyleB
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[6Icon]
Hidden=1
Group=None

[7]
MeterStyle=InfoStyle | InfoStyleB
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[7Icon]
Hidden=1
Group=None

[8]
MeterStyle=InfoStyle | InfoStyleB
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[8Icon]
Hidden=1
Group=None

[9]
MeterStyle=InfoStyle | InfoStyleB
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | Items | ColorOption

[9Icon]
Hidden=1
Group=None

[Divider2]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*9)-(#DividerHeight#/2))

[10]
MeterStyle=InfoStyle
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*9)+(#DividerSpace#*4))

[10Icon]
Y=(#DropdownIconYOffset#-(#DropdownIconYOffset#%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*9)+(#DividerSpace#*4))

; [99Style]
; LeftMouseDownAction=[]
; MouseOverAction=[]
; MouseLeaveAction=[]

; [99Style]
; LeftMouseDownAction=[]
; MouseOverAction=[]
; MouseLeaveAction=[]

; [9]
; MeterStyle=InfoStyle | #ThemeNum#Style
; Y=(#DividerSpace#*2)R
; FontColor=#DropdownFontColor1#,(#ThemeNum#=99?([#DropdownItemOpacity]/3):[#DropdownItemOpacity])

; [9Icon]
; Y=(#DividerSpace#*2)R

[1Arrow]
Shape=

[3Arrow]
Group=F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22 | F23 | F24 | F25 | F26 | F27 | ColorOption

[4Arrow]
Group=F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22 | F23 | F24 | F25 | F26 | F27 | ColorOption

[5Arrow]
Group=F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22 | F23 | F24 | F25 | F26 | F27 | ColorOption

[6Arrow]
Group=F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22 | F23 | F24 | F25 | F26 | F27 | ColorOption

[7Arrow]
Group=F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22 | F23 | F24 | F25 | F26 | F27 | ColorOption

[8Arrow]
Group=F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22 | F23 | F24 | F25 | F26 | F27 | ColorOption

[9Arrow]
Group=F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22 | F23 | F24 | F25 | F26 | F27 | ColorOption
Hidden=0

[IconBStyle]
ImageName=#@#Icons\Fixed\#IconSize#\largecircle.png
MaskImageName=
MaskImagePath=
ImageAlpha=#DropdownItemOpacity#
Y=R
Hidden=0
Group=None
DynamicVariables=1
Container=AnimationContainer

[2IconB]
Meter=Image
MeterStyle=IconStyle | IconBStyle
ImageTint=#TopBarBGColor1#
Y=(#DropdownIconYOffset#-(#DropdownIconYOffset#%1)+#DropdownItemYOffset#+#DropdownItemHeight#+(#DividerSpace#*2))

[3IconB]
Meter=Image
MeterStyle=IconStyle | IconBStyle
ImageTint=#TopBarFontColor1#

[4IconB]
Meter=Image
MeterStyle=IconStyle | IconBStyle
ImageTint=#DropdownBGColor1#

[5IconB]
Meter=Image
MeterStyle=IconStyle | IconBStyle
ImageTint=#DropdownFontColor1#

[6IconB]
Meter=Image
MeterStyle=IconStyle | IconBStyle
ImageTint=#TopBarHLColor1#

[7IconB]
Meter=Image
MeterStyle=IconStyle | IconBStyle
ImageTint=#TopBarFontColor2#

[8IconB]
Meter=Image
MeterStyle=IconStyle | IconBStyle
ImageTint=#DropdownItemHL#

[9IconB]
Meter=Image
MeterStyle=IconStyle | IconBStyle
ImageTint=#DropdownFontColor2#
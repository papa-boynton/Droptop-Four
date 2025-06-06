[Rainmeter]
OnRefreshAction=[!ShowMeterGroup 10][!UpdateMeterGroup 10][!UpdateMeasureGroup ScrollBar][!UpdateMeterGroup ScrollBar]

[Variables]
;----------------------------------
LuaLoc=#@#Scripts\Lua\DropScroll.lua
;----------------------------------
MaxItem=10

ScrollTracker=10
AboveTotal=1

ContentFade=1

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]

DropdownItemPadding1=#DropdownNoIconPadding#
NumberOfItems=11

[ScrollCheck]
Measure=Calc
IfCondition=AnalyzeTotal = #ScrollTracker#
IfTrueAction=[!SetOptionGroup Items MouseScrollDownAction """[]"""]
IfFalseAction=[!SetOptionGroup Items MouseScrollDownAction ""]
IfCondition2=#ScrollTracker# = #MaxItem#
IfTrueAction2=[!SetOptionGroup Items MouseScrollUpAction """[]"""]
IfFalseAction2=[!SetOptionGroup Items MouseScrollUpAction ""]
DynamicVariables=1

;----------------------------------------------------
; Measures
;----------------------------------------------------

[mPath]
Measure=Plugin
Plugin=FileView
Path="#@#Fonts"
ShowDotDot=0
SortType=Name
SortAscending=1
SortDateType=
ShowFile=1
ShowFolder=0
ShowSystem=0
ShowHidden=0
HideExtensions=1
;WildCardSearch="**"
;Recursive=0
Count=10
; FinishAction=[!UpdateMeterGroup Items][!Redraw]

;----------------------------------------------------

[FileCount]
Measure=Plugin
Plugin=FolderInfo
Folder="[mPath]"
InfoType=FileCount
IncludeHiddenFiles=0
IncludeSubFolders=0
IncludeSystemFiles=1
RegExpFilter=(?i).*.*

[AnalyzeTotal]
Measure=Calc
Formula=FileCount
IfCondition=(#CURRENTSECTION# <> #NumberOfItems#) && (#NumberOfItems# < #MaxItem#) && (#CURRENTSECTION# > 0)
IfTrueAction=[!WriteKeyValue Variables NumberOfItems ([#CURRENTSECTION#]=0?1:[#CURRENTSECTION#]) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\FontSelect.inc"][!Refresh]
IfCondition2=#CURRENTSECTION# > #MaxItem#
IfTrueAction2=[!WriteKeyValue Variables AboveTotal 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\FontSelect.inc"]][!WriteKeyValue Variables NumberOfItems #MaxItem# "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\FontSelect.inc"]][!SetVariable AboveTotal 1][!SetVariable NumberOfItems #MaxItem#][!ShowMeterGroup 10][!EnableMeasureGroup Scrollbar][!ShowMeterGroup Scrollbar][!UpdateMeasure *][!UpdateMeter *][!Redraw][!EnableMouseAction * "MouseScrollDownAction|MouseScrollUpAction"]
IfFalseAction2=[!WriteKeyValue Variables AboveTotal 0 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\FontSelect.inc"]][!WriteKeyValue Variables NumberOfItems ([#CURRENTSECTION#]=0?1:[#CURRENTSECTION#]) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\FontSelect.inc"]][!SetVariable AboveTotal 0][!SetVariable NumberOfItems ([#CURRENTSECTION#]=0?1:[#CURRENTSECTION#])][!ShowMeterGroup [#CURRENTSECTION#]][!DisableMouseAction * "MouseScrollDownAction|MouseScrollUpAction"]

;----------------------------------------------------

[ScrollTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation
ActionList1=Start1|Wait 100|Start2|Wait 16|Repeat ContentFade,#W#,9|Wait 16|Finish
Start1=
Start2=[!UpdateMeasureGroup IconImage][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]
ContentFade=[!SetVariable ContentFade "(Clamp([#ContentFade]+0.1,0,1))"]#U#
Finish=[!SetVariable ContentFade 1][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]#U#
DynamicVariables=1
IgnoreWarnings=1

;----------------------------------------------------

[AnimationContainer]
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,((#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2))*#ActionTimer.StartAnimation#),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)-(#DropdownMenuCutout#*2)+(#DividerSpace#*2)+#DividerHeight#),#DropdownBGCorner# | Fill Color 255,255,255,(255*#ActionTimer.StartAnimation#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color 255,255,255,(255*#ActionTimer.StartAnimation#)

[Background]
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)-(#DropdownMenuCutout#*2)+(#DividerSpace#*2)+#DividerHeight#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:((#DropdownMenuOpacity1#*(#DropdownMenuBlur#=1?[#MicaEnabled[#UseMicaBlur][#Win10Apps]]:1))+1))) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#

;----------------------------------------------------

[0]
Meter=String
MeterStyle=InfoStyle
Text=➕ #SettingsFontSelect1#
FontFace=#FontName0#
AntiAlias=#DropdownAntialias#
; FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#ContentFade#)
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
Y=((#DropdownIconYOffset#+([#CURRENTSECTION#:H]/2))-((#DropdownIconYOffset#+([#CURRENTSECTION#:H]/2))%1)+#DropdownItemYOffset#)
; LeftMouseDownAction=[!HideFadeGroup SM1][!CommandMeasure FileChoose "ChooseFile 5" "Droptop\DropdownBar"]
LeftMouseDownAction=[!HideMeter HighlightSelected "Droptop\DropdownBar"][!HideFadeGroup SM1][!Redraw "Droptop\DropdownBar"][!CommandMeasure FileChoose "ChooseFile 5" "Droptop\DropdownBar"]
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter FolderBlock][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!EnableMouseActionGroup "MouseOverAction" Items][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!HideMeterGroup Highlight][!Redraw]
Group=0 | Items | ItemName

;---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+(#DropdownItemHeight#/2)+#DividerSpace#)
Hidden=0

;---

[1]
; Y=((#DropdownItemHeight#/2)+#DividerSpace#)R
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2)+#DropdownItemHeight#)-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+(#DividerSpace#*2)+#DividerHeight#)

;----------------------------------------------------
; Name & Icon measures
;----------------------------------------------------

;----------------------------------------------------
; Index 1

[mIndex1Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=1
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Index 2

[mIndex2Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=2
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Index 3

[mIndex3Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=3
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Index 4

[mIndex4Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=4
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Index 5

[mIndex5Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=5
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Index 6

[mIndex6Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=6
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Index 7

[mIndex7Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=7
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Index 8

[mIndex8Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=8
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Index 9

[mIndex9Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=9
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Index 10

[mIndex10Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=10
Substitute="^#FontName0#$":"☑ #FontName0#"
RegExpSubstitute=1
DynamicVariables=1
Group=FontName

;----------------------------------------------------
; Item Names
;----------------------------------------------------

[RunCommand.CopyFont]
Measure=Plugin
Plugin=RunCommand
Parameter=cd "#SKINSPATH#Droptop Folders\Other files\Themes" & del /f /q "*.*tf" & cd "#SKINSPATH#Droptop\@Resources\Fonts" & xcopy /E /I /Y "[#FontName0].*" "#SKINSPATH#Droptop Folders\Other files\Themes"
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1

[InfoStyle]
InlinePattern3=☑
InlineSetting3=Color | #Lime#,(255*#ContentFade#)
InlinePattern4=☑
InlineSetting4=Shadow | 0 | 1 | 2 | 0,0,0,(205*#ContentFade#)
InlinePattern5=[#FontName0]
InlineSetting5=Face | [#FontName0]
MeasureName=mIndex#CURRENTSECTION#Name
FontFace=[mIndex#CURRENTSECTION#Name]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#ContentFade#)
LeftMouseDownAction=#OptionChanged.Suite#[!WriteKeyValue Variables FontName0 "[mIndex#CURRENTSECTION#Name]" "#@#Themes\#ThemeNum#Settings.inc"][!SetVariableGroup FontName0 "[mIndex#CURRENTSECTION#Name]" "DroptopSuite"][!SetVariableGroup TopBarFontName "[mIndex#CURRENTSECTION#Name]" "DroptopSuite"][!UpdateMeasureGroup FontName][!UpdateMeterGroup Items][!UpdateMeter * "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar"][!UpdateGroup DroptopSuite][!RedrawGroup DroptopSuite][!Redraw][!UpdateMeasure RunCommand.CopyFont][!CommandMeasure RunCommand.CopyFont "Run"]
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter FolderBlock][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!EnableMouseActionGroup "MouseOverAction" Items][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!HideMeterGroup Highlight][!Redraw]
MiddleMouseDownAction=[!CommandMeasure mIndex#CURRENTSECTION#Name "[#MiddleClickBehavior[#MiddleClickNum]]"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!Hide "#CURRENTCONFIG#"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MouseScrollUpAction=[!SetVariable ScrollTracker (#ScrollTracker#<=#MaxItem#?#MaxItem#:(#ScrollTracker#-#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!CommandMeasure mPath "PageUp"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
MouseScrollDownAction=[!SetVariable ScrollTracker (#ScrollTracker#>=[AnalyzeTotal]?[AnalyzeTotal]:(#ScrollTracker#+#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!CommandMeasure mPath "PageDown"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
AntiAlias=1

; ;----------------------------------------------------
; ; Scrollbar
; ;----------------------------------------------------

; [ScrollbarTop]
; Meter=Image
; X=3
; Y=(#DropdownItemHeight#+(#DropdownItemHeight#/2)+(#DividerSpace#*1))
; ; Y=(#DropdownIconYOffset#-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+#DropdownItemHeight#-1)
; UpdateDivider=-1
; Container=AnimationContainer

; [Size]
; Measure=Calc
; Formula=((#DropdownItemHeight#*#MaxItem#)-#DropdownIconYOffset#)
; UpdateDivider=-1
; Group=Scrollbar

; [ScrollH]
; Measure=Calc
; Formula=Size * (#MaxItem# / (AnalyzeTotal = 0 ? 1 : AnalyzeTotal))
; Group=Scrollbar

; [ScrollbarScript]
; Measure=Script
; ScriptFile=#LuaLoc#
; UpdateDivider=-1

; [CurrentPos]
; Meter=Shape
; Shape=Rectangle 0,0,(3*#DroptopSize#),([ScrollH]<1?1:[ScrollH]),2 | Fill Color #DropdownFontColor1#,155 | StrokeWidth 0 | StrokeColor #DropdownBGColor1#,55
; X=(#DropdownMenuWidth#-(3*#DroptopSize#)-(#DropdownStrokeWidth#/2))
; Y=(#DropdownIconYOffset#-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+1)
; DynamicVariables=1
; Group=ScrollBar | Items
; Container=AnimationContainer

; ;-------------------------------------------

; [OpenFolder]
; Meter=Image
; ImageName=#@#Icons\Fixed\Medium\dot.png
; ImageTint=#DropdownFontColor1#,#DropdownItemOpacity#
; ImageAlpha=(#DropdownItemOpacity#/3)
; X=(8*#DroptopSize#)
; Y=(#DropdownIconYOffset#-(#DropdownIconYOffset#%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*#NumberOfItems#)+((#DropdownMenuLandingHeight#-(16*#DroptopSize#))/2)+(#DividerSpace#*2)+#DividerHeight#)
; H=(16*#DroptopSize#)
; LeftMouseDownAction=#CloseSettingsMenu#["#@#Fonts"]
; MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Icons\Fixed\Medium\open.png"][!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Icons\Fixed\Medium\dot.png"][!SetOption #CURRENTSECTION# ImageAlpha (#*DropdownItemOpacity*#/3)][!UpdateMeter #CURRENTSECTION#][!Redraw]
; DynamicVariables=1
; UpdateDivider=-1
; Container=AnimationContainer

; [DownArrow]
; Meter=Shape
; Shape=Rectangle (-2*#DroptopSize#),(1*#DroptopSize#),(15*#DroptopSize#),(15*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
; Shape2=Rectangle 0,0,(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
; Shape3=Rectangle 0,(-2*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
; Shape4=Combine Shape2 | Exclude Shape3
; Look=Fill Color #DropdownFontColor1#,(#ScrollTracker#>=[AnalyzeTotal]?0:(#DropdownItemOpacity#/3))
; LeftMouseDownAction=[!SetVariable ScrollTracker (#ScrollTracker#>=[AnalyzeTotal]?[AnalyzeTotal]:(#ScrollTracker#+#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!CommandMeasure mPath "PageDown"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
; MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#>=[AnalyzeTotal]?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#>=[AnalyzeTotal]?0:(#DropdownItemOpacity#/3))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; X=(#DropdownMenuWidth#-(25*#DroptopSize#))
; Y=r
; DynamicVariables=1
; Container=AnimationContainer

; [UpArrow]
; Meter=Shape
; Shape=Rectangle (-2*#DroptopSize#),(1*#DroptopSize#),(15*#DroptopSize#),(15*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
; Shape2=Rectangle 0,(7*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
; Shape3=Rectangle 0,(9*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
; Shape4=Combine Shape2 | Exclude Shape3
; Look=Fill Color #DropdownFontColor1#,(#ScrollTracker#<=#MaxItem#?0:(#DropdownItemOpacity#/3))
; LeftMouseDownAction=[!SetVariable ScrollTracker (#ScrollTracker#<=#MaxItem#?#MaxItem#:(#ScrollTracker#-#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!CommandMeasure mPath "PageUp"][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
; MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#<=#MaxItem#?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#<=#MaxItem#?0:(#DropdownItemOpacity#/3))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; X=(#DropdownMenuWidth#-(45*#DroptopSize#))
; Y=r
; DynamicVariables=1
; Container=AnimationContainer

; ;dummy
; [0Arrow]
; Meter=String
; Hidden=1
; Container=AnimationContainer

; ;----------------------------------------------------
; ; Scrollbar
; ;----------------------------------------------------

; [ScrollUpButton]
; Meter=Shape
; Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1),((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3),#DropdownBGCorner# | StrokeWidth 0 | Extend FillColor
; Shape2=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),(3*#DroptopSize#) | StrokeWidth 1 | Rotate 45 | Extend ArrowColor
; Shape3=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)+(8*#DroptopSize#)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 0 | Rotate 45 | Fill Color 255,55,55
; Shape4=Combine Shape2 | Exclude Shape3
; FillColor=Fill Color 0,0,0,0
; ArrowColor=Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
; X=(#DropdownMenuWidth#-#DropdownStrokeWidth#-1)
; Y=2
; MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!SetOption [#CurrentSubFolder]ArrowIcon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption [#CurrentSubFolder]Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption [#CurrentSubFolder]ArrowIcon ImageAlpha "(#*DropdownItemOpacity*#/3)"][!UpdateMeter [#CurrentSubFolder]ArrowIcon][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!UpdateMeter [#CurrentSubFolder]Icon][!Redraw][!CommandMeasure MeasureActionTimer "Stop 1"]
; MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw][!CommandMeasure ScrollTimer "Stop 2"][!CommandMeasure ScrollTimer "Stop 3"][!UpdateMeasure MeasureActionTimer][!CommandMeasure ScrollTimer "Execute 1"]
; LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
; LeftMouseUpAction=[!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker (#ScrollTracker#<=#MaxItem#?#MaxItem#:(#ScrollTracker#-#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!SetOptionGroup ArrowIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!CommandMeasure ScrollTimer "Stop 2"][!Delay 16][!CommandMeasure ScrollTimer "Execute 1"]
; DynamicVariables=1
; Group=ScrollBar | Items
; Container=AnimationContainer

; [ScrollDownButton]
; Meter=Shape
; Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1),((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3),#DropdownBGCorner# | StrokeWidth 0 | Extend FillColor
; Shape2=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),(3*#DroptopSize#) | StrokeWidth 1 | Rotate 45 | Extend ArrowColor
; Shape3=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)-(8*#DroptopSize#)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 0 | Rotate 45 | Fill Color 255,55,55
; Shape4=Combine Shape2 | Exclude Shape3
; FillColor=Fill Color 0,0,0,0
; ArrowColor=Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
; X=r
; Y=R
; MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!SetOption [#CurrentSubFolder]ArrowIcon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption [#CurrentSubFolder]Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption [#CurrentSubFolder]ArrowIcon ImageAlpha "(#*DropdownItemOpacity*#/3)"][!UpdateMeter [#CurrentSubFolder]ArrowIcon][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!UpdateMeter [#CurrentSubFolder]Icon][!Redraw][!CommandMeasure MeasureActionTimer "Stop 1"]
; MouseLeaveAction=[!CommandMeasure ScrollTimer "Stop 2"][!CommandMeasure ScrollTimer "Stop 3"][!CommandMeasure ScrollTimer "Execute 1"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
; LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
; LeftMouseUpAction=[!CommandMeasure mPath "PageDown"][!SetVariable ScrollTracker (#ScrollTracker#>=[AnalyzeTotal]?[AnalyzeTotal]:(#ScrollTracker#+#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!SetOptionGroup ArrowIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!CommandMeasure ScrollTimer "Stop 3"][!Delay 16][!CommandMeasure ScrollTimer "Execute 1"]
; DynamicVariables=1
; Group=ScrollBar | Items
; Container=AnimationContainer

; [ScrollbarTop]
; Meter=Image
; X=3
; Y=(#DropdownIconYOffset#-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-1)
; UpdateDivider=-1
; Container=AnimationContainer

; [Size]
; Measure=Calc
; Formula=((#DropdownItemHeight#*#MaxItem#)-#DropdownIconYOffset#)
; UpdateDivider=-1
; Group=Scrollbar

; [ScrollH]
; Measure=Calc
; Formula=Size * (#MaxItem# / (AnalyzeTotal = 0 ? 1 : AnalyzeTotal))
; UpdateDivider=-1
; Group=Scrollbar
; Disabled=1

; [ScrollbarScript]
; Measure=Script
; ScriptFile=#LuaLoc#
; UpdateDivider=-1

; [CurrentPos]
; Meter=Shape
; Shape=Rectangle 0,0,(3*#DroptopSize#),([ScrollH]<1?1:[ScrollH]),2 | Fill Color #DropdownFontColor1#,155 | StrokeWidth 0 | StrokeColor #DropdownBGColor1#,155
; X=(#DropdownMenuWidth#-(3*#DroptopSize#)-(#DropdownStrokeWidth#/2))
; Y=(#DropdownIconYOffset#-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+1)
; DynamicVariables=1
; Container=AnimationContainer
; Group=ScrollBar | Items
; Hidden=1

;----------------------------------------------------
; Scrollbar
;----------------------------------------------------

[ScrollUpButton]
Meter=Shape
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1),((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3),#DropdownBGCorner# | StrokeWidth 0 | Extend FillColor
Shape2=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),(3*#DroptopSize#) | StrokeWidth 1 | Rotate 45 | Extend ArrowColor
Shape3=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)+(8*#DroptopSize#)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 0 | Rotate 45 | Fill Color 255,55,55
Shape4=Combine Shape2 | Exclude Shape3
FillColor=Fill Color 0,0,0,0
ArrowColor=Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
X=(#DropdownMenuWidth#-#DropdownStrokeWidth#-1)
Y=2
; MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption 0Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption 0 FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
; LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
LeftMouseDownAction=[]
LeftMouseUpAction=[!SetVariable ContentFade 0.1][!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker ([#ScrollTracker]-([#ScrollTracker]-[#MaxItem]<=[#MaxItem]?([#ScrollTracker]-[#MaxItem]):[#MaxItem]))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-[#MaxItem])][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Execute 1"]
DynamicVariables=1
Group=ScrollBar | Items
Container=AnimationContainer

[ScrollDownButton]
Meter=Shape
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1),((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3),#DropdownBGCorner# | StrokeWidth 0 | Extend FillColor
Shape2=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),(3*#DroptopSize#) | StrokeWidth 1 | Rotate 45 | Extend ArrowColor
Shape3=Rectangle (#DropdownMenuCutout#-(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)),((#DropdownMenuCutout#+(((([Background:H]-#DropdownMenuCutout#-#DropdownStrokeWidth#)/2)-3)/2))+(((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)/4)-(8*#DroptopSize#)),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),((((#DropdownMenuWidth#/8)-#DropdownStrokeWidth#)*-1)/2),0 | StrokeWidth 0 | Rotate 45 | Fill Color 255,55,55
Shape4=Combine Shape2 | Exclude Shape3
FillColor=Fill Color 0,0,0,0
ArrowColor=Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
X=r
Y=R
; MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption 0Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption 0 FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
; LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
LeftMouseDownAction=[]
LeftMouseUpAction=[!SetVariable ContentFade 0.1][!CommandMeasure mPath "PageDown"][!SetVariable ScrollTracker ([#ScrollTracker]+([&AnalyzeTotal]>[#MaxItem]?([#ScrollTracker]+[#MaxItem]>=[&AnalyzeTotal]?([&AnalyzeTotal]-[#ScrollTracker]):[#MaxItem]):0))][!CommandMeasure ScrollbarScript UpdateCurrentPos([#MaxItem])][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Execute 1"]
DynamicVariables=1
Group=ScrollBar | Items
Container=AnimationContainer

[ScrollbarTop]
Meter=Image
X=3
Y=[1:Y]
UpdateDivider=-1
Container=AnimationContainer

[Size]
Measure=Calc
Formula=((#DropdownItemHeight#*#MaxItem#)-#DropdownIconYOffset#)
UpdateDivider=-1
Group=Scrollbar

[ScrollH]
Measure=Calc
Formula=Size * (#MaxItem# / (AnalyzeTotal = 0 ? 1 : AnalyzeTotal))
UpdateDivider=-1
Group=Scrollbar

[ScrollbarScript]
Measure=Script
ScriptFile=#LuaLoc#
UpdateDivider=-1

[CurrentPos]
Meter=Shape
Shape=Rectangle 0,0,(3*#DroptopSize#),([ScrollH]<1?1:[ScrollH]),2 | Fill Color #DropdownFontColor1#,155 | StrokeWidth 0 | StrokeColor #DropdownBGColor1#,155
X=(#DropdownMenuWidth#-(3*#DroptopSize#)-(#DropdownStrokeWidth#/2))
Y=[1:Y]
DynamicVariables=1
Container=AnimationContainer
Group=ScrollBar | Items

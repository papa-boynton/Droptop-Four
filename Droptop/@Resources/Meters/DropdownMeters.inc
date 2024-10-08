[Rainmeter]
; OnFocusAction=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure Focus "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MouseY "Droptop\Other\BackgroundProcesses"]
; OnUnfocusAction=[!SetVariable Focused 0 "Droptop\Other\BackgroundProcesses"]
SkinWidth=(#DropdownMenuWidth#+2)
RightMouseDownAction=[]
MouseActionCursor=Arrow
Update=-1
; MouseLeaveAction=[!SetVariable FolderMode 0][!UpdateMeasure MeasureActionTimer][!HideMeterGroup Highlight][!Redraw]
OnRefreshAction=[!UpdateMeasureGroup Scrollbar]
; MouseOverAction=[!Delay 100][!CommandMeasure Focus "#CURRENTCONFIG#" "Droptop\Other\BackgroundProcesses"]

[Variables]
MenuBlur=#DropdownMenuBlur#
ScrollTracker=#MaxItem#

FolderMode=0

ContentFade=1

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]
U.HL=[!UpdateMeasureGroup Animation.HL][!UpdateMeterGroup Animation.HL][!Redraw]
U.SU=[!UpdateMeasureGroup Animation.SU][!UpdateMeterGroup Animation.SU][!Redraw]

;-----------------------------------
Padding0=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
Padding1=0,#DropdownItemPaddingY#,0,(#DropdownItemPaddingY#*-1)
;---
Padding0B=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
Padding1B=#DropdownArrowHighlightW#,#DropdownItemPaddingY#,(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),(#DropdownItemPaddingY#*-1)

;----------------------------------------------------
; Measures
;----------------------------------------------------

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=(#ForceOpaque#=1?0:#DropdownMenuBlur#)
Type=[#BlurType[#BlurTypeNum]0[#Win10Apps]]
Border=[#Shadows[#DropdownMenuShadow]]
Corner=[#BlurCorner[#DropdownRoundCorners]]
BorderVisible=#ShowDropdownBlurBorder#
DynamicVariables=1

[MeasureActionTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 200|FolderMouseOver[&mItemSubFolderID].#FolderMode#
; FolderMouseOver1=[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]
FolderMouseOver0=
ActionList2=Wait 16|ActionTimer.HLFadeIn.Start|Wait 16|Repeat ActionTimer.HLFadeIn,#W#,8|Wait 100|ActionTimer.HLFadeIn.End
ActionTimer.HLFadeIn.Start=[!SetVariable ActionTimer.HLFadeIn 0.2]#U.HL#
ActionTimer.HLFadeIn=[!SetVariable ActionTimer.HLFadeIn "(Clamp(#ActionTimer.HLFadeIn#+0.1,0,1))"]#U.HL#
ActionTimer.HLFadeIn.End=[!SetVariable ActionTimer.HLFadeIn 1]#U.HL#
Group=Animation | Animation.HL
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

[MeasureActionTimer.Actions]
Measure=Calc
IfCondition=(#ActionTimer.ActionNum#=1)
IfTrueAction=[!CommandMeasure Focus "#CURRENTCONFIG#" "Droptop\Other\BackgroundProcesses"][!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!HideGroup Folder0][!SetVariable ActionTimer.StartAnimation 0 "Droptop\Other\Folders\Folder01"][!SetVariable ScrollTracker "15" "Droptop\Other\Folders\Folder01"][!ActivateConfig "Droptop\Other\Folders\Folder01"][!HideMeter HighlightSelected "Droptop\Other\Folders\Folder01"][!SetVariable HighlightSelectedY (-999*#DroptopSize#) "Droptop\Other\Folders\Folder01"][!SetVariable HighlightSelectedY [[#CurrentSubFolder]:Y]][!SetVariable Folder01Loc "[mPath][mIndex[#CurrentSubFolder]Name]"][!SetVariable FolderNum [#FolderNum] "Droptop\Other\Folders\Folder01"][!SetVariable CurrentFolder "#CurrentFolder#" "Droptop\Other\Folders\Folder01"][!SetVariable SelectedFolderY [[#CurrentSubFolder]:Y] "Droptop\Other\Folders\Folder01"][!SetVariable Folder01Loc "[#Folder01Loc]" "Droptop\Other\Folders\Folder01"][!SetOption CurrentPos Y "(#DropdownIconYOffset#-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+1)" "Droptop\Other\Folders\Folder01"][!SetOption mPath Path "[#Folder01Loc]" "Droptop\Other\Folders\Folder01"][!CommandMeasure mPath "Update" "Droptop\Other\Folders\Folder01"][!UpdateMeasure * "Droptop\Other\Folders\Folder01"][!UpdateMeter HighlightSelected][!HideMeter HighlightSelected][!Redraw][!UpdateMeter * "Droptop\Other\Folders\Folder01"][!Redraw "Droptop\Other\Folders\Folder01"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[[#CurrentSubFolder]:Y]-[1:Y]) "Droptop\Other\Folders\Folder01"][!CommandMeasure MeasureActionTimer "Stop 3" "Droptop\Other\Folders\Folder01"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 3" "Droptop\Other\Folders\Folder01"][!SetVariable ActionTimer.ActionNum 0][!CommandMeasure ScrollbarScript Initialize() "Droptop\Other\Folders\Folder01"][!DisableMeasure #CURRENTSECTION#]
IfConditionMode=1
DynamicVariables=1
Disabled=1

[mItemSubFolderID]
Measure=Calc
Formula=Random
LowBound=0
HighBound=9999
UpdateRandom=1
DynamicVariables=1
UpdateDivider=-1

[CalcFolderNum]
Measure=Calc
Formula=Clamp(([FolderCount]-(#ScrollTracker#-#MaxItem#)),0,#MaxItem#)
OnChangeAction=[!HideMeterGroup F20][!ShowMeterGroup F[CalcFolderNum]][!UpdateMeter FolderBlock]
DynamicVariables=1
Group=Scrollbar

[ScrollCheck]
Measure=Calc
IfCondition=AnalyzeTotal = #ScrollTracker#
IfTrueAction=[!DisableMouseActionGroup "MouseScrollDownAction" ItemName][!DisableMouseAction ScrollDownButton "LeftMouseDownAction"]
IfFalseAction=[!EnableMouseActionGroup "MouseScrollDownAction" ItemName][!EnableMouseAction ScrollDownButton "LeftMouseDownAction"]
IfCondition2=#ScrollTracker# = #MaxItem#
IfTrueAction2=[!DisableMouseActionGroup "MouseScrollUpAction" ItemName][!DisableMouseAction ScrollUpButton "LeftMouseDownAction"]
IfFalseAction2=[!EnableMouseActionGroup "MouseScrollUpAction" ItemName][!EnableMouseAction ScrollUpButton "LeftMouseDownAction"]
DynamicVariables=1
UpdateDivider=-1
Group=mPath | Scrollbar

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
; Styles
;----------------------------------------------------

[InfoStyle]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#ContentFade#)
FontFace=#FontName0#
FontSize=#DropdownItemFontSize#
FontWeight=#FontWeight#
AntiAlias=#DropdownAntiAlias#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
InlineSetting2=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#

[ItemStyle]
StringAlign=LeftCenter
MeasureName=mIndex#CURRENTSECTION#Name
LeftMouseDownAction=#ResetActiveFolders#[!CommandMeasure mIndex#CURRENTSECTION#Name "Open"][!HideGroup Folders][!SetVariable ActiveFolder 0 "Droptop\DropdownBar"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup Folders "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
RightMouseUpAction=[!Hide "Droptop\Other\PopupMenu"][!SetVariable FolderMode 0][!CommandMeasure MeasureActionTimer "Stop 1"][!HideMeter HighlightSelected][!WriteKeyValue Variables PopupModule "FolderItemSettings" "#SKINSPATH#Droptop\Other\PopupMenu\PopupMenu.ini"][!WriteKeyValue Variables PopupModuleIndex [#CURRENTSECTION] "#SKINSPATH#Droptop\Other\PopupMenu\PopupMenu.ini"][!WriteKeyValue Variables PopupModuleIndex2 "[&mPath][&mIndex#CURRENTSECTION#Name]" "#SKINSPATH#Droptop\Other\PopupMenu\PopupMenu.ini"][!WriteKeyValue Variables PopupModuleIndex3 "#CurrentFolder#" "#SKINSPATH#Droptop\Other\PopupMenu\PopupMenu.ini"][!WriteKeyValue Variables FolderLoc "#FolderLoc#" "#SKINSPATH#Droptop\Other\PopupMenu\PopupMenuModule\FolderItemSettings.inc"][!WriteKeyValue Variables ParentConfig "#CURRENTCONFIG#" "#SKINSPATH#Droptop\Other\PopupMenu\PopupMenuModule\FolderItemSettings.inc"][!Refresh "Droptop\Other\PopupMenu"][!ActivateConfig "Droptop\Other\PopupMenu" "PopupMenu.ini"][!Move (([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+$MouseX$)-(10*#DroptopSize#)) (([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]+$MouseY$)-(10*#DroptopSize#)) "Droptop\Other\PopupMenu"][!HideFadeGroup Folder02][!Delay 125][!ShowFade "Droptop\Other\PopupMenu"]
MiddleMouseDownAction=#ResetActiveFolders#[!SetVariable FolderMode 0][!UpdateMeasure MeasureActionTimer][!CommandMeasure mIndex#CURRENTSECTION#Name "[#MiddleClickBehavior[#MiddleClickNum]]"][!HideGroup Folders][!SetVariable ActiveFolder 0 "Droptop\DropdownBar"][!SetVariable UnfocusAction 0 "Droptop\DropdownBar"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup Folders "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 200|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Icon ImageAlpha "#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 2"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!EnableMouseActionGroup "MouseOverAction" Items][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION#Icon ImageAlpha ""][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!HideMeterGroup Highlight][!ShowMeter HighlightSelected][!Redraw]
MouseScrollUpAction=[!UpdateMeasure MeasureActionTimer][!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker ([#ScrollTracker]-([#ScrollTracker]-[#MaxItem]<=[#MaxItem]?([#ScrollTracker]-[#MaxItem]):[#MaxItem]))][!SetVariable HighlightSelectedY (-999*#DroptopSize#)][!CommandMeasure ScrollbarScript UpdateCurrentPos(-[#MaxItem])][!HideGroup Folder0][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
MouseScrollDownAction=[!UpdateMeasure MeasureActionTimer][!CommandMeasure mPath "PageDown"][!SetVariable ScrollTracker ([#ScrollTracker]+([&AnalyzeTotal]>[#MaxItem]?([#ScrollTracker]+[#MaxItem]>=[&AnalyzeTotal]?([&AnalyzeTotal]-[#ScrollTracker]):[#MaxItem]):0))][!SetVariable HighlightSelectedY (-999*#DroptopSize#)][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!HideGroup Folder0][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
W=(#DropdownMenuWidth#-#DropdownArrowHighlightW#-#DropdownItemPadding1#)
H=#DropdownItemHeight#
Padding=#Padding0B#
DynamicVariables=1
ClipString=1
Text="%1"
Hidden=1
X=1
Y=R

@IncludeArrowStyle=#@#Meters\ArrowStyle\ArrowStyle#DropdownArrowStyle#.ini

[ArrowStyle]
Container=

[ArrowStyleB]
Container=

[IconStyle]
MeasureName=mIndex#CURRENTSECTION#
X=#DropdownIconXoffset#
Y=R
W=#IconW#
H=#IconH#
Greyscale=#DropdownIconGreyscale#
ImageAlpha=#DropdownItemOpacity#
ImageTint=#DropdownIconTint#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
DynamicVariables=1
UpdateDivider=-1
Hidden=1

[BackgroundStyle]
LeftMouseDownAction=[]
DynamicVariables=1

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

; [AnimationContainer]
; Meter=Shape
; MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color 255,255,255,255 | StrokeWidth #DropdownStrokeWidth# | Stroke Color 0,0,0,255
; Shape2=#FlatTopShape#
; Shape3=Combine Shape | Union Shape2
; Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)-(#DropdownMenuCutout#*2))+#DropdownStrokeWidth#),0 | StrokeWidth 0 | Fill Color 0,0,0,0
; DynamicVariables=1

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=#FlatTopShape#
Shape3=Combine Shape | Union Shape2
Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)-(#DropdownMenuCutout#*2))+#DropdownStrokeWidth#),0 | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
; Container=AnimationContainer

;----------------------------------------------------
; Item Highlight
;----------------------------------------------------

[HighlightBackground]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#ActionTimer.HLFadeIn#)
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,((25*#ReverseDarkLight#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0 | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#ActionTimer.HLFadeIn#)
HLColorGradient=0 | #DropdownItemHL#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) ; 1.0 | #DropdownItemHL2#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) ; 0.0
HLShadowGradient=90 | 255,255,255,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 1.0 | 0,0,0,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 0.0
X=1
Y=[#CurrentSubFolder#:Y]
Group=Highlight | HL | Animation.HL
DynamicVariables=1
Hidden=1

[HighlightSelected]
Meter=Shape
Shape=Rectangle [#HLSelectedShape[#HLSelectedShapeNum]]
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,([#DropdownMenuWidth]-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,([#DropdownMenuWidth]-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill Color 255,255,255,(55*#DropdownHLSolidColor#) | StrokeWidth 0 | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
ShapeOption=[#HLSelectedOption[#HLSelectedShapeNum]]
HLColorGradient=0 | #DropdownItemHL#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor2B#) ; 1.0 | #DropdownItemHL2#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor2B#) ; 0.0
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=1
Y=#HighlightSelectedY#
Group=HighlightSelected
DynamicVariables=1
Hidden=1

;----------------------------------------------------
; Item Names
;----------------------------------------------------

[NA]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Text="#FoldersItem0A#"
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
RightMouseUpAction=[]
LeftMouseDownAction=["#FolderLoc#"][!HideGroup Folders][!SetVariable ActiveFolder 0 "Droptop\DropdownBar"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup Folders "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageAlpha (#*HighlightFontOpacity2*#-(#*HighlightFontOpacity2*#*#HideIcons#))][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!SetOptionGroup Highlight W [#CURRENTSECTION#:W]][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint #*DropdownFontColor1*#][!SetOption #CURRENTSECTION#Icon ImageAlpha (#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=0 | Items | ItemName

[1]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[2]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[3]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[4]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[5]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[6]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[7]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[8]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[9]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[10]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[11]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[12]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[13]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[14]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[15]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[16]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=16 | 17 | 18 | 19 | 20 | Items | ItemName | Animation

[17]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=17 | 18 | 19 | 20 | Items | ItemName | Animation

[18]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=18 | 19 | 20 | Items | ItemName | Animation

[19]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=19 | 20 | Items | ItemName | Animation

[20]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=20 | Items | ItemName | Animation

;----------------------------------------------------
; Icons
;----------------------------------------------------

[NAIcon]
Meter=Image
MeterStyle=IconStyle
ImageName=#@#Icons\Fixed\#IconSize#\noitem.png
ImageTint=#DropdownFontColor1#
ImageAlpha=(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#)
DynamicVariables=1
UpdateDivider=1
Group=0 | ItemIcon

[1Icon]
Meter=Image
MeterStyle=IconStyle
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#)
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon | Animation

[2Icon]
Meter=Image
MeterStyle=IconStyle
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon | Animation

[3Icon]
Meter=Image
MeterStyle=IconStyle
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon | Animation

[4Icon]
Meter=Image
MeterStyle=IconStyle
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[5Icon]
Meter=Image
MeterStyle=IconStyle
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[6Icon]
Meter=Image
MeterStyle=IconStyle
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[7Icon]
Meter=Image
MeterStyle=IconStyle
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[8Icon]
Meter=Image
MeterStyle=IconStyle
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[9Icon]
Meter=Image
MeterStyle=IconStyle
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[10Icon]
Meter=Image
MeterStyle=IconStyle
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[11Icon]
Meter=Image
MeterStyle=IconStyle
Group=11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[12Icon]
Meter=Image
MeterStyle=IconStyle
Group=12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[13Icon]
Meter=Image
MeterStyle=IconStyle
Group=13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[14Icon]
Meter=Image
MeterStyle=IconStyle
Group=14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[15Icon]
Meter=Image
MeterStyle=IconStyle
Group=15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[16Icon]
Meter=Image
MeterStyle=IconStyle
Group=16 | 17 | 18 | 19 | 20 | ItemIcon

[17Icon]
Meter=Image
MeterStyle=IconStyle
Group=17 | 18 | 19 | 20 | ItemIcon

[18Icon]
Meter=Image
MeterStyle=IconStyle
Group=18 | 19 | 20 | ItemIcon

[19Icon]
Meter=Image
MeterStyle=IconStyle
Group=19 | 20 | ItemIcon

[20Icon]
Meter=Image
MeterStyle=IconStyle
Group=20 | ItemIcon

;----------------------------------------------------
; Folders
;----------------------------------------------------

[FolderBlock]
Meter=Image
SolidColor=0,0,0,0
X=1
Y=[1:Y]
W=#DropdownMenuWidth#
H=(#DropdownItemHeight#*[CalcFolderNum])
LeftMouseDownAction=[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]
MouseOverAction=[!SetVariable FolderMode 1][!UpdateMeasure MeasureActionTimer]
MouseLeaveAction=[!SetVariable FolderMode 0][!UpdateMeasure MeasureActionTimer]
DynamicVariables=1
Group=Item

;----------------------------------------------------
; Arrows
;----------------------------------------------------

[1Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation
Y=[1Icon:Y]

[2Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[3Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[4Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[5Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[6Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[7Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[8Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[9Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[10Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[11Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[12Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[13Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[14Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F14 | F15 | F16 | F17 | F18 | F19 | F20 | Animation

[15Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F15 | F16 | F17 | F18 | F19 | F20 | Animation

[16Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F16 | F17 | F18 | F19 | F20 | Animation

[17Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F17 | F18 | F19 | F20 | Animation

[18Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F18 | F19 | F20 | Animation

[19Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F19 | F20 | Animation

[20Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F20 | Animation

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
MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption [#CurrentSubFolder]Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder]Arrow FillColor "Fill Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder] FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!UpdateMeter [#CurrentSubFolder]Icon][!Redraw]
MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
; LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
LeftMouseDownAction=[]
LeftMouseUpAction=[!UpdateMeasure MeasureActionTimer][!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker ([#ScrollTracker]-([#ScrollTracker]-[#MaxItem]<=[#MaxItem]?([#ScrollTracker]-[#MaxItem]):[#MaxItem]))][!SetVariable HighlightSelectedY (-999*#DroptopSize#)][!CommandMeasure ScrollbarScript UpdateCurrentPos(-[#MaxItem])][!HideGroup Folder0][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
DynamicVariables=1
Group=ScrollBar | Items
; Container=AnimationContainer
Hidden=1

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
MouseOverAction=[!SetVariable [##CurrentSubFolder#]FolderActive 0][!DisableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption [#CurrentSubFolder]Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder]Arrow FillColor "Fill Color #*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption [#CurrentSubFolder] FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!SetOption #CURRENTSECTION# FillColor "Fill Color #DropdownFontColor1#,105"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color #DropdownBGColor1#,200 | Stroke Color 0,0,0,125"][!UpdateMeter [#CurrentSubFolder]Arrow][!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!UpdateMeter [#CurrentSubFolder]Icon][!Redraw]
MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" ItemName][!SetOption #CURRENTSECTION# FillColor "Fill Color 0,0,0,0"][!SetOption #CURRENTSECTION# ArrowColor "Fill Color 0,0,0,0 | Stroke Color 0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter [#CurrentSubFolder]][!Redraw]
; LeftMouseDownAction=[#[#CURRENTSECTION][#DeviceIsNotTouch]]
LeftMouseDownAction=[]
LeftMouseUpAction=[!UpdateMeasure MeasureActionTimer][!CommandMeasure mPath "PageDown"][!SetVariable ScrollTracker ([#ScrollTracker]+([&AnalyzeTotal]>[#MaxItem]?([#ScrollTracker]+[#MaxItem]>=[&AnalyzeTotal]?([&AnalyzeTotal]-[#ScrollTracker]):[#MaxItem]):0))][!SetVariable HighlightSelectedY (-999*#DroptopSize#)][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!HideGroup Folder0][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Stop 1"][!UpdateMeasure ScrollTimer][!CommandMeasure ScrollTimer "Execute 1"]
DynamicVariables=1
Group=ScrollBar | Items
; Container=AnimationContainer
Hidden=1

[ScrollbarTop]
Meter=Image
X=3
Y=(#DropdownIconYOffset#-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-1)
UpdateDivider=-1
; Container=AnimationContainer

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
Disabled=1

[ScrollbarScript]
Measure=Script
ScriptFile=#LuaLoc#
UpdateDivider=-1

[CurrentPos]
Meter=Shape
Shape=Rectangle 0,0,(3*#DroptopSize#),([ScrollH]<1?1:[ScrollH]),2 | Fill Color #DropdownFontColor1#,155 | StrokeWidth 0 | StrokeColor #DropdownBGColor1#,155
X=(#DropdownMenuWidth#-(3*#DroptopSize#)-(#DropdownStrokeWidth#/2))
Y=(#DropdownIconYOffset#-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+1)
DynamicVariables=1
; Container=AnimationContainer
Group=ScrollBar | Items
Hidden=1
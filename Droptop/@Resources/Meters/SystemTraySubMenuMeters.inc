[Rainmeter]
; OnFocusAction=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure Focus "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MouseY "Droptop\Other\BackgroundProcesses"]
; OnUnfocusAction=[!SetVariable Focused 0 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
Group=DroptopSuite | Tray | Folders | Submenus | CustomAppSubmenus
MouseActionCursor=Arrow
; SkinWidth=(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#+2)
OnRefreshAction=[!Hide]
RightMouseDownAction=[]
Update=-1

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=1
DefaultAnchorX=100%

[Metadata]
Name=Droptop Four
Author=Cariboudjan / Thomas Sven Whittaker
Information=The frogurt is also cursed
License=Creative Commons Attribution-Non-Commercial-Share Alike 3.0

[Variables]

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]
U.HL=[!UpdateMeasureGroup Animation.HL][!UpdateMeterGroup Animation.HL][!Redraw]
U.SU=[!UpdateMeasureGroup Animation.SU][!UpdateMeterGroup Animation.SU][!Redraw]
U.UI=[!UpdateMeasureGroup Animation][!UpdateMeter [#*AnimateIconNum*]Icon][!Redraw]

ParentFolderX=0

;-----------------------------------
; Padding0=#DropdownItemPadding1#,#DropdownItemPaddingY#,#DropdownItemPadding2#,(#DropdownItemPaddingY#*-1)
Padding0=#DropdownItemPadding1#,#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
; Padding1=#DropdownItemPadding2#,#DropdownItemPaddingY#,#DropdownItemPadding1#,(#DropdownItemPaddingY#*-1)
Padding1=#DropdownArrowHighlightW#,#DropdownItemPaddingY#,#DropdownItemPadding1#,(#DropdownItemPaddingY#*-1)
;---
Padding0B=#DropdownItemPadding1#,#DropdownItemPaddingY#,(#DropdownNoIconPadding#*2),(#DropdownItemPaddingY#*-1)
Padding1B=(#DropdownNoIconPadding#*2),#DropdownItemPaddingY#,#DropdownItemPadding1#,(#DropdownItemPaddingY#*-1)
;-----------------------------------

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=(#ForceOpaque#=1?0:#DropdownMenuBlur#)
Type=[#BlurType[#BlurTypeNum]0[#Win10Apps][#UseMicaBlur]]
Border=[#Shadows[#DropdownMenuShadow]]
Corner=[#BlurCorner[#DropdownRoundCorners]]
BorderVisible=#ShowDropdownBlurBorder#
DarkMode=((#ChamLum1#-1)*-1)
DynamicVariables=1
UpdateDivider=-1

[MeasureActionTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation | Animation.HL | Animation.SU
ActionList1=Wait 16|ActionTimer.HLFadeIn.Start|Wait 16|Repeat ActionTimer.HLFadeIn,#W#,4|Wait 100|ActionTimer.HLFadeIn.End
ActionTimer.HLFadeIn.Start=[!SetVariable ActionTimer.HLFadeIn 0.2]#U.HL#
ActionTimer.HLFadeIn=[!SetVariable ActionTimer.HLFadeIn "(Clamp(#ActionTimer.HLFadeIn#+0.2,0,1))"]#U.HL#
ActionTimer.HLFadeIn.End=[!SetVariable ActionTimer.HLFadeIn 1]#U.HL#
ActionList2=Wait 16|ActionTimer.StartAnimationLeft.Start|Wait 32|Repeat ActionTimer.StartAnimationLeft,10,#ActionTimer.StartAnimation.Steps#|Wait 100|ActionTimer.StartAnimationLeft.End
ActionTimer.StartAnimationLeft.Start=[!ShowFade]
ActionTimer.StartAnimationLeft=[!SetVariable ActionTimer.StartAnimationSysSub "(Clamp(#ActionTimer.StartAnimationSysSub#+(1/#ActionTimer.StartAnimation.Steps#),0,1))"]#U.SU#
ActionTimer.StartAnimationLeft.End=
ActionList3=Wait 0
ActionList4=Wait 16|ActionTimer.RotateIcon.Start|Wait 16|Repeat ActionTimer.RotateIcon,#W#,134|Wait 16|ActionTimer.RotateIcon.End
ActionTimer.RotateIcon.Start=[!SetOption #AnimateIconNum#Icon ImageRotate "#*ActionTimer.RotateIcon*#"][!SetVariable ActionTimer.RotateIcon 0]#U.UI#
ActionTimer.RotateIcon=[!SetVariable ActionTimer.RotateIcon "(Clamp(#ActionTimer.RotateIcon#+2.686,0,360))"]#U.UI#
ActionTimer.RotateIcon.End=[!SetOption #AnimateIconNum#Icon ImageRotate 0][!SetVariable AnimateIconNum 0][!SetVariable ActionTimer.RotateIcon 0]#U.UI#
ActionList5=Wait 16|ActionTimer.ToggleIcon.Start|Wait 16|Repeat ActionTimer.ToggleIcon,10,10|Wait 16|ActionTimer.ToggleIcon.End
ActionTimer.ToggleIcon.Start=[!DisableMouseActionGroup "LeftMouseDownAction" Items][!SetVariable ActionTimer.ToggleDirection (#ActionTimer.ToggleIcon#=1?-0.1:0.1)][!SetOption #AnimateIconNum#Icon MaskImageName "#*ActionTimer.ToggleIcon*#.png"]#U.UI#
ActionTimer.ToggleIcon=[!SetVariable ActionTimer.ToggleIcon "(Clamp(#ActionTimer.ToggleIcon#+(#ActionTimer.ToggleDirection#),0,1))"]#U.UI#
ActionTimer.ToggleIcon.End=[!EnableMouseActionGroup "LeftMouseDownAction" Items][!SetOption #AnimateIconNum#Icon MaskImageName "#ActionTimer.ToggleIcon#.png"][!SetVariable AnimateIconNum 0]#U.UI#
ActionList6=Wait 16|ActionTimer.CheckmarkIcon.Start|Wait 16|Repeat ActionTimer.CheckmarkIcon,10,10|Wait 16|ActionTimer.CheckmarkIcon.End
ActionTimer.CheckmarkIcon.Start=[!DisableMouseActionGroup "LeftMouseDownAction" Items][!SetOption #AnimateIconNum#Icon ImageName "#*ActionTimer.CheckmarkIcon*#.png"][!SetVariable ActionTimer.CheckmarkIcon 0]#U.UI#
ActionTimer.CheckmarkIcon=[!SetVariable ActionTimer.CheckmarkIcon "(Clamp(#ActionTimer.CheckmarkIcon#+0.1,0,1))"]#U.UI#
ActionTimer.CheckmarkIcon.End=[!EnableMouseActionGroup "LeftMouseDownAction" Items][!SetOption #AnimateIconNum#Icon ImageName "1.png"][!SetVariable AnimateIconNum 0]#U.UI#
ActionList7=Wait 16|ActionTimer.RotateIcon360.Start|Wait 16|Repeat ActionTimer.RotateIcon360,#W#,134|Wait 16|ActionTimer.RotateIcon360.End
ActionTimer.RotateIcon360.Start=[!SetOption #AnimateIconNum#Icon ImageRotate "#*ActionTimer.RotateIcon*#"][!SetVariable ActionTimer.RotateIcon 0]#U.UI#
ActionTimer.RotateIcon360=[!SetVariable ActionTimer.RotateIcon "(Clamp(#ActionTimer.RotateIcon#+2.686,0,360))"]#U.UI#
ActionTimer.RotateIcon360.End=[!SetOption #AnimateIconNum#Icon ImageRotate 0][!SetVariable AnimateIconNum 0][!SetVariable ActionTimer.RotateIcon 0]#U.UI#
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

;----------------------------------------------------

[MeasureCheckmark0]
Measure=Calc
Formula=[#[#CheckmarkKey]]
OnChangeAction=[!SetVariable AnimateIconNum #CurrentSubFolder#][!SetOptionGroup ItemIcon ImageName "0.png"][!UpdateMeterGroup ItemIcon][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 6"]
OnUpdateAction=[!SetOptionGroup ItemIcon ImageName "0.png"][!SetOption [&MeasureCheckmark0]Icon ImageName "1.png"][!SetOption #CURRENTSECTION# OnUpdateAction ""]
DynamicVariables=1
UpdateDivider=-1

[MeasureCheckmarkA]
Measure=String
String=ItemCheckmarkValue[#ItemCheckmarkGroup1]1=[#ItemCheckmarkValue1] - ItemCheckmarkValue[#ItemCheckmarkGroup2]2=[#ItemCheckmarkValue2] - ItemCheckmarkValue[#ItemCheckmarkGroup3]3=[#ItemCheckmarkValue3] - ItemCheckmarkValue[#ItemCheckmarkGroup4]4=[#ItemCheckmarkValue4] - ItemCheckmarkValue[#ItemCheckmarkGroup5]5=[#ItemCheckmarkValue5] - ItemCheckmarkValue[#ItemCheckmarkGroup6]6=[#ItemCheckmarkValue6] - ItemCheckmarkValue[#ItemCheckmarkGroup7]7=[#ItemCheckmarkValue7] - ItemCheckmarkValue[#ItemCheckmarkGroup8]8=[#ItemCheckmarkValue8] - ItemCheckmarkValue[#ItemCheckmarkGroup9]9=[#ItemCheckmarkValue9] - ItemCheckmarkValue[#ItemCheckmarkGroup10]10=[#ItemCheckmarkValue10] .
Substitute="^.*ItemCheckmarkValue[##CURRENTSECTION#]([0-9]|[0-9][0-9])=[#[#CheckmarkKey[##CURRENTSECTION#]]] .*$":"\1","^ItemCheckmarkValue.*?1.*$":""
OnChangeAction=[!SetVariable AnimateIconNum [&MeasureCheckmark[##CURRENTSECTION#]]][!SetOptionGroup CheckmarkGroup[##CURRENTSECTION#] ImageName "0.png"][!UpdateMeterGroup CheckmarkGroup[##CURRENTSECTION#]][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 6"]
OnUpdateAction=[!SetOptionGroup CheckmarkGroup[##CURRENTSECTION#] ImageName "0.png"][!SetOptionGroup CheckmarkGroup[##CURRENTSECTION#].[&MeasureCheckmark[##CURRENTSECTION#]] ImageName "1.png"][!SetOption #CURRENTSECTION# OnUpdateAction ""]
DynamicVariables=1
RegExpSubstitute=1
UpdateDivider=-1

[MeasureCheckmarkB]
Measure=String
String=ItemCheckmarkValue[#ItemCheckmarkGroup1]1=[#ItemCheckmarkValue1] - ItemCheckmarkValue[#ItemCheckmarkGroup2]2=[#ItemCheckmarkValue2] - ItemCheckmarkValue[#ItemCheckmarkGroup3]3=[#ItemCheckmarkValue3] - ItemCheckmarkValue[#ItemCheckmarkGroup4]4=[#ItemCheckmarkValue4] - ItemCheckmarkValue[#ItemCheckmarkGroup5]5=[#ItemCheckmarkValue5] - ItemCheckmarkValue[#ItemCheckmarkGroup6]6=[#ItemCheckmarkValue6] - ItemCheckmarkValue[#ItemCheckmarkGroup7]7=[#ItemCheckmarkValue7] - ItemCheckmarkValue[#ItemCheckmarkGroup8]8=[#ItemCheckmarkValue8] - ItemCheckmarkValue[#ItemCheckmarkGroup9]9=[#ItemCheckmarkValue9] - ItemCheckmarkValue[#ItemCheckmarkGroup10]10=[#ItemCheckmarkValue10] .
Substitute="^.*ItemCheckmarkValue[##CURRENTSECTION#]([0-9]|[0-9][0-9])=[#[#CheckmarkKey[##CURRENTSECTION#]]] .*$":"\1","^ItemCheckmarkValue.*?1.*$":""
OnChangeAction=[!SetVariable AnimateIconNum [&MeasureCheckmark[##CURRENTSECTION#]]][!SetOptionGroup CheckmarkGroup[##CURRENTSECTION#] ImageName "0.png"][!UpdateMeterGroup CheckmarkGroup[##CURRENTSECTION#]][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 6"]
OnUpdateAction=[!SetOptionGroup CheckmarkGroup[##CURRENTSECTION#] ImageName "0.png"][!SetOptionGroup CheckmarkGroup[##CURRENTSECTION#].[&MeasureCheckmark[##CURRENTSECTION#]] ImageName "1.png"][!SetOption #CURRENTSECTION# OnUpdateAction ""]
DynamicVariables=1
RegExpSubstitute=1
UpdateDivider=-1

[MeasureCheckmarkC]
Measure=String
String=ItemCheckmarkValue[#ItemCheckmarkGroup1]1=[#ItemCheckmarkValue1] - ItemCheckmarkValue[#ItemCheckmarkGroup2]2=[#ItemCheckmarkValue2] - ItemCheckmarkValue[#ItemCheckmarkGroup3]3=[#ItemCheckmarkValue3] - ItemCheckmarkValue[#ItemCheckmarkGroup4]4=[#ItemCheckmarkValue4] - ItemCheckmarkValue[#ItemCheckmarkGroup5]5=[#ItemCheckmarkValue5] - ItemCheckmarkValue[#ItemCheckmarkGroup6]6=[#ItemCheckmarkValue6] - ItemCheckmarkValue[#ItemCheckmarkGroup7]7=[#ItemCheckmarkValue7] - ItemCheckmarkValue[#ItemCheckmarkGroup8]8=[#ItemCheckmarkValue8] - ItemCheckmarkValue[#ItemCheckmarkGroup9]9=[#ItemCheckmarkValue9] - ItemCheckmarkValue[#ItemCheckmarkGroup10]10=[#ItemCheckmarkValue10] .
Substitute="^.*ItemCheckmarkValue[##CURRENTSECTION#]([0-9]|[0-9][0-9])=[#[#CheckmarkKey[##CURRENTSECTION#]]] .*$":"\1","^ItemCheckmarkValue.*?1.*$":""
OnChangeAction=[!SetVariable AnimateIconNum [&MeasureCheckmark[##CURRENTSECTION#]]][!SetOptionGroup CheckmarkGroup[##CURRENTSECTION#] ImageName "0.png"][!UpdateMeterGroup CheckmarkGroup[##CURRENTSECTION#]][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 6"]
OnUpdateAction=[!SetOptionGroup CheckmarkGroup[##CURRENTSECTION#] ImageName "0.png"][!SetOptionGroup CheckmarkGroup[##CURRENTSECTION#].[&MeasureCheckmark[##CURRENTSECTION#]] ImageName "1.png"][!SetOption #CURRENTSECTION# OnUpdateAction ""]
DynamicVariables=1
RegExpSubstitute=1
UpdateDivider=-1

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]
StringAlign=LeftCenter
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=#FontName0#
FontSize=#DropdownItemFontSize#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
InlineSetting2=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#
X=1
Y=R
W=(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownNoIconPadding#*2)-#DropdownItemPadding1#)
H=#DropdownItemHeight#
Text="%1"
FontWeight=#FontWeight#
Padding=#Padding0B#
AntiAlias=#DropdownAntiAlias#
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
ClipString=1
Group=Items
Container=AnimationContainer

[IconStyle]
ImageTint=#DropdownFontColor1#,#DropdownItemOpacity#
X=#DropdownIconXoffset#
Y=R
W=#IconW#
H=#IconH#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Greyscale=#DropdownIconGreyscale#
DynamicVariables=1
Group=Items
Container=AnimationContainer

[FolderStyle]
StringAlign=Right
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#SlideOpac2#)
FontFace=#FontName0#
FontSize=#DropdownItemFontSize#
X=(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#+1)
Y=R
W=(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-3)
H=#DropdownItemHeight#
Text=❯
Padding=0,0,3,0
AntiAlias=#DropdownAntiAlias#
DynamicVariables=1
ClipString=1
Group=Folders

[CheckmarkIconStyle]
ImagePath=#@#Icons\Fixed\#IconSize#\Checkmark\#CheckmarkStyle#
ImageName=0.png
ImageTint=#DropdownFontColor1#
X=#DropdownIconXoffset#
Y=R
W=#IconW#
H=#IconH#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Greyscale=#DropdownIconGreyscale#
DynamicVariables=1
Group=ItemIcon
Container=AnimationContainer

[BackgroundStyle]
LeftMouseDownAction=[]
DynamicVariables=1

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[AnimationContainer]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,((#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#+2-(#DropdownMenuCutout#*2))*#ActionTimer.StartAnimationSysSub#),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color 0,0,0,(255*#ActionTimer.StartAnimationSysSub#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color 0,0,0,(255*#ActionTimer.StartAnimationSysSub#)
Shape2=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
DynamicVariables=1
Group=Animation.SU

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:((#DropdownMenuOpacity1#*(#DropdownMenuBlur#=1?[#MicaEnabled[#UseMicaBlur][#Win10Apps]]:1))+1))) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
; UpdateDivider=-1
Container=AnimationContainer

;----------------------------------------------------
; Item highlight

[HighlightBackground]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#ActionTimer.HLFadeIn#)
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,((25*#ReverseDarkLight#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
HLColorGradient=0 | #DropdownItemHL#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) ; 1.0 | #DropdownItemHL2#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) ; 0.0
HLShadowGradient=90 | 255,255,255,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 1.0 | 0,0,0,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 0.0
X=1
Y=[#CurrentSubFolder#:Y]
Group=Highlight | HL | Animation.HL
DynamicVariables=1
Hidden=1
Container=AnimationContainer


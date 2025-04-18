[Rainmeter]
MouseActionCursor=Arrow
; OnFocusAction=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure Focus "Droptop\Other\BackgroundProcesses"]
; OnUnfocusAction=[!SetVariable Focused 0 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
RightMouseDownAction=[]
SkinWidth=(#DropdownMenuWidth#+#SysAppMenuXOffset#+#DropdownMenuWidthOffset#+#SysAppMenuWOffset#+2)
; MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"]

[Variables]
MenuBlur=#DropdownMenuBlur#

W=20
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]
U.HL=[!UpdateMeasureGroup Animation.HL][!UpdateMeterGroup Animation.HL][!Redraw]
U.SU=[!UpdateMeasureGroup Animation.SU][!UpdateMeterGroup Animation.SU][!Redraw]
U.UI=[!UpdateMeasureGroup Animation][!UpdateMeter [#*AnimateIconNum*]Icon][!Redraw]

;-----------------------------------
Padding0=#DropdownItemPadding1#,#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
Padding1=#DropdownArrowHighlightW#,#DropdownItemPaddingY#,#DropdownItemPadding1#,(#DropdownItemPaddingY#*-1)
;---
Padding0B=#DropdownItemPadding1#,#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
Padding1B=(#DropdownItemPadding1#*2),#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
;-----------------------------------

SubmenuDirection=1

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
ActionList1=Wait 200|FolderMouseOver
FolderMouseOver=[!SetVariable ActionTimer.ActionNum #SubmenuDirection#][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]
ActionList2=Wait 16|ActionTimer.HLFadeIn.Start|Wait 16|Repeat ActionTimer.HLFadeIn,#W#,4|Wait 100|ActionTimer.HLFadeIn.End
ActionTimer.HLFadeIn.Start=[!SetVariable ActionTimer.HLFadeIn 0.2]#U.HL#
ActionTimer.HLFadeIn=[!SetVariable ActionTimer.HLFadeIn "(Clamp(#ActionTimer.HLFadeIn#+0.2,0,1))"]#U.HL#
ActionTimer.HLFadeIn.End=[!SetVariable ActionTimer.HLFadeIn 1]#U.HL#
;Startup for Community Apps submenus
ActionList3=Wait 16|ActionTimer.StartAnimationLeft.Start|Wait 32|Repeat ActionTimer.StartAnimationLeft,10,#ActionTimer.StartAnimation.Steps#|Wait 100|ActionTimer.StartAnimationLeft.End
ActionTimer.StartAnimationLeft.Start=[!ShowFade]
ActionTimer.StartAnimationLeft=[!SetVariable ActionTimer.StartAnimationSysSub "(Clamp(#ActionTimer.StartAnimationSysSub#+(1/#ActionTimer.StartAnimation.Steps#),0,1))"]#U.SU#
ActionTimer.StartAnimationLeft.End=[!SetVariable ActionTimer.StartAnimationSysSub 1 "#CURRENTCONFIG#\Folder"]#U.SU#
ActionList4=Wait 16|ActionTimer.RotateIcon360.Start|Wait 16|Repeat ActionTimer.RotateIcon360,#W#,134|Wait 16|ActionTimer.RotateIcon360.End
ActionTimer.RotateIcon360.Start=[!SetOption #AnimateIconNum#Icon ImageRotate "#*ActionTimer.RotateIcon*#"][!SetVariable ActionTimer.RotateIcon 0]#U.UI#
ActionTimer.RotateIcon360=[!SetVariable ActionTimer.RotateIcon "(Clamp(#ActionTimer.RotateIcon#+2.686,0,360))"]#U.UI#
ActionTimer.RotateIcon360.End=[!SetOption #AnimateIconNum#Icon ImageRotate 0][!SetVariable AnimateIconNum 0][!SetVariable ActionTimer.RotateIcon 0]#U.UI#
ActionList5=Wait 16|ActionTimer.ToggleIcon.Start|Wait 16|Repeat ActionTimer.ToggleIcon,10,10|Wait 16|ActionTimer.ToggleIcon.End
ActionTimer.ToggleIcon.Start=[!DisableMouseActionGroup "LeftMouseDownAction" Items][!SetVariable ActionTimer.ToggleDirection (#ActionTimer.ToggleIcon#=1?-0.1:0.1)][!SetOption #AnimateIconNum#Icon MaskImageName "#*ActionTimer.ToggleIcon*#.png"]#U.UI#
ActionTimer.ToggleIcon=[!SetVariable ActionTimer.ToggleIcon "(Clamp(#ActionTimer.ToggleIcon#+(#ActionTimer.ToggleDirection#),0,1))"]#U.UI#
ActionTimer.ToggleIcon.End=[!EnableMouseActionGroup "LeftMouseDownAction" Items][!SetOption #AnimateIconNum#Icon MaskImageName "#ActionTimer.ToggleIcon#.png"][!SetVariable AnimateIconNum 0]#U.UI#
ActionList6=Wait 16|ActionTimer.CheckmarkIcon.Start|Wait 16|Repeat ActionTimer.CheckmarkIcon,10,10|Wait 16|ActionTimer.CheckmarkIcon.End
ActionTimer.CheckmarkIcon.Start=[!DisableMouseActionGroup "LeftMouseDownAction" Items][!SetOption #AnimateIconNum#Icon ImageName "#*ActionTimer.CheckmarkIcon*#.png"][!SetVariable ActionTimer.CheckmarkIcon 0]#U.UI#
ActionTimer.CheckmarkIcon=[!SetVariable ActionTimer.CheckmarkIcon "(Clamp(#ActionTimer.CheckmarkIcon#+0.1,0,1))"]#U.UI#
ActionTimer.CheckmarkIcon.End=[!EnableMouseActionGroup "LeftMouseDownAction" Items][!SetOption #AnimateIconNum#Icon ImageName "1.png"][!SetVariable AnimateIconNum 0]#U.UI#
ActionList7=Wait 16|ActionTimer.PopoutFadeIn.Start|Wait 16|Repeat ActionTimer.PopoutFadeIn,#W#,4|Wait 16|ActionTimer.PopoutFadeIn.End
ActionTimer.PopoutFadeIn.Start=[!SetVariable ActionTimer.PopoutFadeIn 0.2]#U.SU#
ActionTimer.PopoutFadeIn=[!SetVariable ActionTimer.PopoutFadeIn "(Clamp(#ActionTimer.PopoutFadeIn#+0.2,0,1))"]#U.SU#
ActionTimer.PopoutFadeIn.End=[!SetVariable ActionTimer.PopoutFadeIn 1]#U.SU#
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

[MeasureActionTimer.Actions]
Measure=Calc
IfCondition=#ActionTimer.ActionNum#=1 && [#ItemIsFolder[#CurrentSubFolder]]=(#CustomAppID.Num#>0?1:0)
IfTrueAction=[!WriteKeyValue Variables FolderNumber #CurrentSubFolder# "#CURRENTPATH#Folder\Config\FolderConfig.inc"][!Hide "#CURRENTCONFIG#\Folder"][!SetVariable ActionTimer.StartAnimationSysSub 0 "#CURRENTCONFIG#\Folder"][!DeactivateConfig "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder#CurrentSubFolder#.ini"][!SetAnchor "100%" "0%" "#CURRENTCONFIG#\Folder"][!Move ([#CURRENTCONFIGX]-#DropdownSubMenuXOffset#+1) ([#CURRENTCONFIGY]+[#CurrentSubFolder#:Y]-(#DropdownIconYOffset#-((#DropdownIconYOffset#)%1)+#DropdownItemYOffset#)) "#CURRENTCONFIG#\Folder"][!SetVariable HighlightSelectedY [#CurrentSubFolder#:Y]][!SetVariable SelectedFolderY [#CurrentSubFolder#:Y] "#CURRENTCONFIG#\Folder"][!SetVariable ParentFolderX [#CURRENTCONFIGX] "#CURRENTCONFIG#\Folder"][!UpdateMeter HighlightSelected][!HideMeter HighlightSelected][!Redraw][!UpdateMeasure * "#CURRENTCONFIG#\Folder"][!UpdateMeter * "#CURRENTCONFIG#\Folder"][!Redraw "#CURRENTCONFIG#\Folder"][!CommandMeasure MeasureActionTimer "Stop 2" "#CURRENTCONFIG#\Folder"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 2" "#CURRENTCONFIG#\Folder"][!SetVariable ActionTimer.ActionNum 0][!DisableMeasure #CURRENTSECTION#]
IfCondition2=#ActionTimer.ActionNum#=2
IfTrueAction2=[!Hide "#CURRENTCONFIG#\Folder"][!SetVariable ActionTimer.StartAnimationSysSub 0 "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder#CurrentSubFolder#.ini"][!SetAnchor "0%" "0%" "#CURRENTCONFIG#\Folder"][!SetVariable HighlightSelectedY [#CurrentSubFolder#:Y]][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#+#SysAppMenuXOffset#+1) ([#CURRENTCONFIGY]+[#CurrentSubFolder#:Y]-(#DropdownIconYOffset#-((#DropdownIconYOffset#)%1)+#DropdownItemYOffset#)) "#CURRENTCONFIG#\Folder"][!SetVariable SelectedFolderY [#CurrentSubFolder#:Y] "#CURRENTCONFIG#\Folder"][!SetVariable ParentFolderX [#CURRENTCONFIGX] "#CURRENTCONFIG#\Folder"][!UpdateMeasure * "#CURRENTCONFIG#\Folder"][!UpdateMeter HighlightSelected][!HideMeter HighlightSelected][!Redraw][!UpdateMeter * "#CURRENTCONFIG#\Folder"][!Redraw "#CURRENTCONFIG#\Folder"][!CommandMeasure MeasureActionTimer "Stop 2" "#CURRENTCONFIG#\Folder"][!Delay 16][!CommandMeasure MeasureActionTimer "Execute 2" "#CURRENTCONFIG#\Folder"][!SetVariable ActionTimer.ActionNum 0][!DisableMeasure #CURRENTSECTION#]
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
X=(1+#SysAppMenuXOffset#)
Y=R
W=(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-#DropdownArrowHighlightW#-#DropdownItemPadding1#)
H=#DropdownItemHeight#
Text="%1"
FontWeight=#FontWeight#
Padding=#Padding0#
AntiAlias=#DropdownAntiAlias#
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageAlpha "#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 2"][!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageAlpha "#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!ShowMeter HighlightSelected][!Redraw]
Hidden=(#NumberOfItems#>=#CURRENTSECTION#?0:1)
DynamicVariables=1
ClipString=1
Group=Items

[FolderStyle]
LeftMouseDownAction=#ResetActiveFolders#[!SetVariable ActionTimer.ActionNum #SubmenuDirection#][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID] """[!SetVariable ActionTimer.ActionNum #SubmenuDirection#][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 200|FolderMouseOver[&mItemSubFolderID]"""][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable ActionTimer.ActionNum #SubmenuDirection#][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# FontEffectColor "#*DropdownFontColor2*#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID] """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!CommandMeasure MeasureActionTimer "Stop 2"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!ShowMeter HighlightSelected][!Redraw]
UpdateDivider=1

@IncludeArrowStyle=#SKINSPATH#Droptop\@Resources\Meters\ArrowStyle\ArrowStyle#DropdownArrowStyle#.ini

[IconStyle]
X=(#DropdownIconXoffset#+#SysAppMenuXOffset#)
Y=R
W=#IconW#
H=#IconH#
ImageTint=#DropdownFontColor1#,#DropdownItemOpacity#
Greyscale=#DropdownIconGreyscale#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
DynamicVariables=1
; Group=Items

[CheckmarkIconStyle]
ImagePath=#@#Icons\Fixed\#IconSize#\Checkmark\#CheckmarkStyle#
ImageName=0.png

[BackgroundStyle]
LeftMouseUpAction=[]
DynamicVariables=1

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

; [AnimationContainer]
; Meter=Shape
; MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#DropdownMenuWidthOffset#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color 0,0,0,255 | StrokeWidth #DropdownStrokeWidth# | Stroke Color 255,255,255,255
; Shape2=#FlatTopShape#
; Shape3=Combine Shape | Union Shape2
; Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#)+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
; X=#SysAppMenuXOffset#
; DynamicVariables=1

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#DropdownMenuWidthOffset#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:((#DropdownMenuOpacity1#*(#DropdownMenuBlur#=1?[#MicaEnabled[#UseMicaBlur][#Win10Apps]]:1))+1))) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=#FlatTopShape#
Shape3=Combine Shape | Union Shape2
Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYOffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#)+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
X=#SysAppMenuXOffset#
DynamicVariables=1
; Container=AnimationContainer

;----------------------------------------------------
; Item Highlight

[HighlightBackground]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#ActionTimer.HLFadeIn#)
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,((25*#ReverseDarkLight#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),[#CurrentSubFolder#:H],#DropdownHighlightCorner# | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0 | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#ActionTimer.HLFadeIn#)
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
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill Color 255,255,255,(55*#DropdownHLSolidColor#) | StrokeWidth 0 | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
ShapeOption=[#HLSelectedOption[#HLSelectedShapeNum]]
HLColorGradient=0 | #DropdownItemHL#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor2B#) ; 1.0 | #DropdownItemHL2#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor2B#) ; 0.0
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=1
Y=#HighlightSelectedY#
Group=HighlightSelected
DynamicVariables=1
Hidden=1

[1Icon]
Meter=Image

[2Icon]
Meter=Image

[3Icon]
Meter=Image

[4Icon]
Meter=Image

[5Icon]
Meter=Image

[6Icon]
Meter=Image

[7Icon]
Meter=Image

[8Icon]
Meter=Image

[9Icon]
Meter=Image

[10Icon]
Meter=Image

;----------------------

[0Arrow]
Meter=Shape

[1Arrow]
Meter=Shape
Y=[1Icon:Y]

[2Arrow]
Meter=Shape

[3Arrow]
Meter=Shape

[4Arrow]
Meter=Shape

[5Arrow]
Meter=Shape

[6Arrow]
Meter=Shape

[7Arrow]
Meter=Shape

[8Arrow]
Meter=Shape

[9Arrow]
Meter=Shape

[10Arrow]
Meter=Shape

;----------------------

[Divider1]
DynamicVariables=1

[Divider2]
DynamicVariables=1

[Divider3]
DynamicVariables=1

[Divider4]
DynamicVariables=1

[Divider5]
DynamicVariables=1

[Divider6]
DynamicVariables=1

[Divider7]
DynamicVariables=1

[Divider8]
DynamicVariables=1

[Divider9]
DynamicVariables=1

[Divider10]
DynamicVariables=1
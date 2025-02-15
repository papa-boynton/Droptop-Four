;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=5

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

Box1=1
Box2=2

Box1Text=1
Box2Text=2

BoxPosition1=0
BoxPosition2=1

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
; Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(([1:YH]+[2:H]+[3:H])+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),([1:YH]+[2:H]+[3:H]+[1:Y]),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=#FlatTopShape#
Shape3=Combine Shape | Union Shape2
Shape4=
X=#SysAppMenuXOffset#
DynamicVariables=1

[HighlightBackground]

[InfoStyle]

[IconStyle]

[ArrowStyleB]
Hidden=1

[BoxStyle]

[TextStyle]

;-----------------------------------------

[MeasureTimer]
Measure=Calc
Formula=(MeasureTimer%#SwitchTime#)+1
IfCondition=[MeasureTimer]=#SwitchTime#
IfTrueAction=[!SetVariable QuoteNumber [MeasureNext]][!UpdateMeterGroup "Box1Group"][!UpdateMeter *][!Update]
IfConditionMode=1
DynamicVariables=1

[MeasureNext]
Measure=Calc
Formula=#QuoteNumber#+1>3?1:(#QuoteNumber#+1)
DynamicVariables=1

[MeasurePrevious]
Measure=Calc
Formula=#QuoteNumber#-1<1?3:(#QuoteNumber#-1)
DynamicVariables=1

;-----------------------------------------

[1]
Meter=String
MeterStyle=#DefaultMeterStyle#
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

;-----------------------------------------

[1Icon]
Meter=Image
MeterStyle=IconStyle
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#)

;----------------------------------------------------

[Box1]
Meter=Shape
MeterStyle=BoxStyle
Y=[Background:H]

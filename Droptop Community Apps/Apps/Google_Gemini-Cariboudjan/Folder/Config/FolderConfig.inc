;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=9

FolderNumber=2

@IncludeCommunityAppSubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppSubMenuMeters.inc

MyAppIsWebView=0

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
LeftMouseDownAction=#Action0#

[IconStyle]
ImageName=#CURRENTPATH#Icons\#FolderNumber#\[##CURRENTSECTION#]Icon.png

[ArrowStyleB]
Hidden=1

[Background]
Shape2=

[HighlightBackground]

[HighlightSelected]

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[2Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[3Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[4Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[5Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[6Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[7Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[8Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[9Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[10Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

;-----------------------------------------

[DividerStyle]
Shape=#DividerShapeSub#
Y=(#NumberOfItems#>[##CURRENTSECTION#]?([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#):0)
Hidden=(#NumberOfItems#>[##CURRENTSECTION#]?(([#DividerExists[##CURRENTSECTION#]]-1)*-1):1)
Container=AnimationContainer
DynamicVariables=1

[Divider1]
Meter=Shape
MeterStyle=DividerStyle

[Divider2]
Meter=Shape
MeterStyle=DividerStyle

[Divider3]
Meter=Shape
MeterStyle=DividerStyle

[Divider4]
Meter=Shape
MeterStyle=DividerStyle

[Divider5]
Meter=Shape
MeterStyle=DividerStyle

[Divider6]
Meter=Shape
MeterStyle=DividerStyle

[Divider7]
Meter=Shape
MeterStyle=DividerStyle

[Divider8]
Meter=Shape
MeterStyle=DividerStyle

[Divider9]
Meter=Shape
MeterStyle=DividerStyle

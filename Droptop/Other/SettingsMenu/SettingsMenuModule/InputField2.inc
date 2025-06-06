[Rainmeter]

[Variables]
DropdownItemPadding1=#DropdownNoIconPadding#

[IconStyle]
ImageName=
ImageFlip=None

[NumberOfInputFields]
Measure=Calc
Formula=#NumberOfItems#
IfBelowValue=4
IfBelowAction=[!HideMeter 2]

[1]
SolidColor=#DropdownFontColor1#,128
FontColor=#DropdownBGColor1#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #DropdownFontColor1#,165][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #DropdownFontColor1#,128][!UpdateMeter #CURRENTSECTION#][!Redraw]

[2]
SolidColor=#DropdownFontColor1#,128
FontColor=#DropdownBGColor1#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #DropdownFontColor1#,165][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #DropdownFontColor1#,128][!UpdateMeter #CURRENTSECTION#][!Redraw]
Y=(1*#DroptopSize#)R

[3]
FontColor=#DropdownFontColor1#,128
MouseOverAction=[]
MouseLeaveAction=[]
Y=(#DropdownItemHeight#*(#NumberOfItems#-1)+((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#))
Hidden=0

[4]
Hidden=0
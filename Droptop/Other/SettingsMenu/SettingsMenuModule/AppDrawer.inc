[Rainmeter]

[Variables]

[DisabledItems0]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)
ImageAlpha=(#DropdownItemOpacity#/3)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]

[DisabledItems1]

[DisabledItems2]

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[2]
Y=(#DividerSpace#*2)R

[2Icon]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*2)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[3]
MeterStyle=InfoStyle | DisabledItems[#LegacyAppDrawer]
MouseLeaveAction=[!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]

[3Icon]
MeterStyle=IconStyle | DisabledItems[#LegacyAppDrawer]

; [4]
; MeterStyle=InfoStyle | DisabledItems0

; [4Icon]
; MeterStyle=IconStyle | DisabledItems0
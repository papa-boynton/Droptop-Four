[Rainmeter]

[Variables]

InputName1=WeatherLocation
InputName2=

Input1=[#*[#*InputName1*]*]
Input2=[#*[#*InputName2*]*]

InputLoc1=#@#GlobalVar\UserSettings.inc
InputLoc2=#@#GlobalVar\UserSettings.inc

; DropdownItemPadding1=#DropdownNoIconPadding#

;---------------------------

[IconStyle]

[HotInput]
Measure=Plugin
Plugin=HotInput
UseLuaEscape=1
InputAction=[!CommandMeasure InputHandler """HandleInput('$input$')"""]
NavigateAction=[!CommandMeasure InputHandler """HandleNavigation('$navigation$')"""]

[InputHandler]
Measure=Script
ScriptFile=#@#Scripts\Lua\InputHandler.lua
Multiline=0
MainMeterName=1
TargetVariableName=#InputName1#
ContainingFilePath="#InputLoc1#"
CaretMeterName=MICaret
FakeMeterName=MIFake
CaretCharacter=|
UpdateGroup=Items
OnFinishAction=[!ActivateConfig "Droptop\Other\BackgroundProcesses\Tasks" "LocationParser.ini"]
DynamicVariables=1

;---------------------------

[InputBox1]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),(1*#DroptopSize#),(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),(#DropdownItemHeight#-(2*#DroptopSize#)),#DropdownBGCorner# | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYOffset#)-((#DropdownIconYOffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
DynamicVariables=1
Container=AnimationContainer

[InputStyle]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input[#CURRENTSECTION]]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName[#CURRENTSECTION]]"][!SetOption InputHandler ContainingFilePath "[#InputLoc[#CURRENTSECTION]]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox#CURRENTSECTION# FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseOverAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]

;---------------------------

[1]
Text=#WeatherLocation#
MeterStyle=InfoStyle | InputStyle
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,0,(#DropdownItemPaddingY#*-1)
ImageFlip=None
InlineSetting2=Shadow | 0 | 0 | 0 | 0,0,0,0
InlineSetting3=Color | 0,0,0,#DropdownItemOpacity#
InlinePattern4=[##InputName[#CURRENTSECTION]#].*
InlineSetting4=Color | 0,0,0,(#DropdownItemOpacity#/1.5)
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input[#CURRENTSECTION]]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName[#CURRENTSECTION]]"][!SetOption InputHandler ContainingFilePath "[#InputLoc[#CURRENTSECTION]]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox#CURRENTSECTION# FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseOverAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]


[MICaret]
Meter=String
MeterStyle=InfoStyle
StringAlign=LeftCenter
FontColor=0,0,0,0
InlinePattern2=\|$
InlineSetting2=Color | 0,0,0,255
InlinePattern3=\|$
InlineSetting3=CharacterSpacing | -1.5
InlinePattern4=\|$
InlineSetting4=Weight | 200
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=1
Padding=#DropdownNoIconPadding#,0,0,0
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

; [1Icon]
; ImageName=
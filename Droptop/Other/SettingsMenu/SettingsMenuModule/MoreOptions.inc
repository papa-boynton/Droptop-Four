[Variables]
ExitDroptopNum=0
ExitDroptopAction0=[!SetVariable ExitDroptopNum 1][!UpdateMeter [#*CURRENTSECTION*]][!Redraw]
ExitDroptopAction1=#HideSettingsMenu#[!HideGroup ContextBox][!DeactivateConfigGroup DroptopSuite]

InputName1=USER
InputName2=

Input1=[#*[#*InputName1*]*]
Input2=[#*[#*InputName2*]*]

InputLoc1=#@#GlobalVar\UserSettings.inc
InputLoc2=#@#GlobalVar\UserSettings.inc

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
OnFinishAction=
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

[MeasureRegistry]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize
RegValue=SystemUsesLightTheme
Substitute="0":"Temp","1":"0","Temp":"1"
UpdateDivider=-1

[RunCommand.ToggleLightMode]
Measure=Plugin
Plugin=RunCommand
Parameter=reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Themes\Personalize" /v SystemUsesLightTheme /t REG_DWORD /d [MeasureRegistry] /f
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1

[RunCommand.Restart]
Measure=Plugin
Plugin=RunCommand
Parameter=taskkill /f /im "Rainmeter.exe" && start "" "#PROGRAMPATH#Rainmeter.exe"
State=Hide
OutputType=ANSI
OutputFile=

[1]
MeterStyle=InfoStyle | InputStyle
InlineSetting2=Shadow | 0 | 0 | 0 | 0,0,0,0
InlineSetting3=Color | 0,0,0,#DropdownItemOpacity#
InlinePattern4=[##InputName[#CURRENTSECTION]#].*
InlineSetting4=Color | 0,0,0,(#DropdownItemOpacity#/1.5)
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input[#CURRENTSECTION]]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName[#CURRENTSECTION]]"][!SetOption InputHandler ContainingFilePath "[#InputLoc[#CURRENTSECTION]]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox#CURRENTSECTION# FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseOverAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]

[1Icon]
ImageTint=0,0,0,#DropdownItemOpacity#

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[2]
Y=(#DividerSpace#*2)R
MouseOverAction=[]
MouseLeaveAction=[]
LeftMouseDownAction=[]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/3)

[2Icon]
Y=(#DividerSpace#*2)R
ImageAlpha=(#DropdownItemOpacity#/3)

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
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
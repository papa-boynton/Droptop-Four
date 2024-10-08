[Rainmeter]

[Variables]
InputName10=UserTimeFormat

Input10=[#*[#*InputName10*]*]

InputLoc10=#@#GlobalVar\UserSettings.inc

;3:00 PM / 15:00
[MeasureTime]
Measure=Time
Format="%[#TimeLeadingZero[#TimeLeadingZeroNum]][#TimeFormatA[#Time24HourNum]]:%M [#TimeFormatB[#Time24HourNum]]"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;January *17*
[MeasureDayNum]
Measure=Time
Format="%[#TimeLeadingZero[#TimeLeadingZeroNum]]d"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;*Sun* 17
[MeasureDayName1]
Measure=Time
Format="%a"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;*Sunday* 17
[MeasureDayName2]
Measure=Time
Format="%A"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;17 *1* 2021
[MeasureMonthNum]
Measure=Time
Format="%[#TimeLeadingZero[#TimeLeadingZeroNum]]m"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;*Jan* 17 2021
[MeasureMonthName1]
Measure=Time
Format="%b"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;*January* 17 2021
[MeasureMonthName2]
Measure=Time
Format="%B"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;January 17 *2021*
[MeasureYear1]
Measure=Time
Format="%y"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;January 17 *2021*
[MeasureYear2]
Measure=Time
Format="%Y"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;17/01/21
[MeasureDate]
Measure=Time
Format="%d/%m/%y"
; FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;17/01/21
[MeasureDateInt]
Measure=Time
Format="%Y-%m-%d"
; FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;01/17/21
[MeasureDateUS]
Measure=Time
Format="%D"
; FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;---------------------------

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
MainMeterName=0B
TargetVariableName=#InputName1#
ContainingFilePath="#InputLoc1#"
CaretMeterName=MICaret
FakeMeterName=MIFake
CaretCharacter=|
UpdateGroup=Items
OnFinishAction=[!SetVariableGroup CenterTimeFormatTypeNum 0 "DroptopSuite"][!WriteKeyValue Variables CenterTimeFormatTypeNum 0 "#@#GlobalVar\UserSettings.inc"][!UpdateMeasureGroup TimeSys "Droptop\DropdownBar"][!UpdateMeasure *][!UpdateMeter * "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar"][!UpdateMeter TimeCenter "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeter *][!Redraw]
DynamicVariables=1

;---------------------------

[InputBox10]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#+(10*#DroptopSize#)),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)-(20*#DroptopSize#)-(40*#DroptopSize#)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
Padding=#Padding0B#
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*9)-(#DividerHeight#/2)+#DividerSpace#)
Group=InputBox
DynamicVariables=1
Container=AnimationContainer

[InputStyle]
InlineSetting2=
FontColor=0,0,0,255
LeftMouseDownAction=[!SetOptionGroup InputBox FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName[#CURRENTSECTION]]"][!SetOption InputHandler ContainingFilePath "[#InputLoc[#CURRENTSECTION]]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox#CURRENTSECTION# FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseOverAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]

;---------------------------

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
X=(#DropdownItemPadding1#+(10*#DroptopSize#))
Y=((#DropdownIconYOffset#+(#DropdownItemHeight#/2))-((#DropdownIconYOffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
W=(#DropdownMenuWidth#-(#DropdownNoIconPadding#*2)-#DropdownItemPadding1#-(40*#DroptopSize#))
Padding=(10*#DroptopSize#),#DropdownItemPaddingY#,(#DropdownNoIconPadding#*2),(#DropdownItemPaddingY#*-1)

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*9)-(#DividerHeight#/2))

[10]
Meter=String
MeterStyle=InfoStyle | InputStyle
Padding=(#DropdownItemPadding1#+(10*#DroptopSize#)),#DropdownItemPaddingY#,(#DropdownNoIconPadding#*2),(#DropdownItemPaddingY#*-1)
X=(10*#DroptopSize#)
Y=(#DividerSpace#*2)R
W=(#DropdownMenuWidth#-#DropdownArrowHighlightW#-#DropdownItemPadding1#-(40*#DroptopSize#))
Group=None
Hidden=0

[10Icon]
X=#DropdownIconXoffset#
Y=(#DividerSpace#*2)R
LeftMouseDownAction=#CloseSettingsMenu#["https://docs.rainmeter.net/manual/measures/time/"]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=None
Hidden=0
; Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | SupporterThemes | SupporterFolders
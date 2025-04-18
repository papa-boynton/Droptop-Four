[Rainmeter]
Group=DroptopSuite | LoadingScreen
; OnFocusAction=#HideAll#
MiddleMouseDownAction=[!Refresh]
; RightMouseDownAction=[]
MouseActionCursor=0
Update=-1

DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultKeepOnScreen=0
DefaultFadeDuration=105
DefaultStartHidden=1
DefaultAutoSelectScreen=1

[Variables]

InputFontSizeA=13
InputFontSizeB=12

Input.SaveLocation=#@#GlobalVar\UserSettings.inc

ButtonXText=X

SecondaryExitActionNum=0

Button1=1
Button2=2
Button3=3
Button4=4
Button5=5
Button6=6
Button7=7
Button8=8
Button9=9
Button10=10

Button1Text=1
Button2Text=2
Button3Text=3
Button4Text=4
Button5Text=5
Button6Text=6
Button7Text=7
Button8Text=8
Button9Text=9
Button10Text=10

Input1=1
Input2=2
Input3=3
Input4=4
Input5=5
Input6=6
Input7=7
Input8=8
Input9=9
Input10=10

Input1Text=1
Input2Text=2
Input3Text=3
Input4Text=4
Input5Text=5
Input6Text=6
Input7Text=7
Input8Text=8
Input9Text=9
Input10Text=10

Input1Icon=1
Input2Icon=2
Input3Icon=3
Input4Icon=4
Input5Icon=5
Input6Icon=6
Input7Icon=7
Input8Icon=8
Input9Icon=9
Input10Icon=10

Input1IconText=1
Input2IconText=2
Input3IconText=3
Input4IconText=4
Input5IconText=5
Input6IconText=6
Input7IconText=7
Input8IconText=8
Input9IconText=9
Input10IconText=10

Input0Checkmark=0
Input1Checkmark=1
Input2Checkmark=2
Input3Checkmark=3
Input4Checkmark=4
Input5Checkmark=5
Input6Checkmark=6
Input7Checkmark=7
Input8Checkmark=8
Input9Checkmark=9
Input10Checkmark=10

Input1.Filled=0
Input2.Filled=0
Input3.Filled=0
Input4.Filled=0
Input5.Filled=0
Input6.Filled=0
Input7.Filled=0
Input8.Filled=0
Input9.Filled=0
Input10.Filled=0

Input1.Output=
Input2.Output=
Input3.Output=
Input4.Output=
Input5.Output=
Input6.Output=
Input7.Output=
Input8.Output=
Input9.Output=
Input10.Output=

Button1.Active=0
Button2.Active=0
Button3.Active=0

;---------------------------------------------

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=(#ForceOpaque#=1?0:#MenuBlur#)
Corner=1
BorderVisible=#ShowDropdownBlurBorder#
DarkMode=((#ChamLum1#-1)*-1)
DynamicVariables=1
Type=Blur

[CheckConnection]
Measure=Plugin
Plugin=SysInfo
SysInfoType=INTERNET_CONNECTIVITY
SysInfoData=1
UpdateDivider=1
IfEqualValue=-1
IfEqualAction=[!ShowMeterGroup NoInternetScreen][!HideMeterGroup ReplaceDefaultScreen][!Redraw]
IfAboveValue=-1
IfAboveAction=[!DisableMeasure #CURRENTSECTION#]

[MeasureRegistry]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop\WindowMetrics
RegValue=AppliedDPI
UpdateDivider=-1

[Input:FontSize]
Measure=Calc
Formula=((#InputFontSizeB#-(((#InputFontSizeB#*(((ROUND(([MeasureRegistry]/100)/0.25)))*0.25))-#InputFontSizeB#)/2))-((#InputFontSizeB#-(((#InputFontSizeB#*(((ROUND(([MeasureRegistry]/100)/0.25)))*0.25))-#InputFontSizeB#)/2))%1))
DynamicVariables=1

[Input:M]
Measure=Plugin
Plugin=InputText.dll
SolidColor=90,90,90
FontColor=255,255,255
FontFace=Urbanist
FontSize=([Input:FontSize]*#DroptopSize#)
StringAlign=LeftCenter
W=(380*#Scale#-#Sec.P#)
H=(30*#Scale#)
DynamicVariables=1
Password=0
; InputLimit=25
TopMost=1
FocusDismiss=0
DefaultValue="[#[#Editing].Output]"
OnDismissAction=[!SetOptionGroup InputBox StrokeColor "Stroke Color 90,90,90"][!UpdateMeterGroup InputBox][!Redraw]
; Command1=[!SetVariable [#Editing].Output """$UserInput$"""][!SetVariable [#Editing].String """[#[#Editing].Output]"""][!SetVariable [#Editing].Filled 1][!EnableMeasure SaveAndLoad:M][!SetOption [#Editing]Text Text "[#[#Editing].Output]"][!UpdateMeasure SaveAndLoad:M][!UpdateMeasure CheckRequiredFields][!SetOptionGroup InputBox StrokeColor "Stroke Color 90,90,90"][!UpdateMeterGroup InputBox][!Redraw]
Command1=[!SetVariable [#Editing].Output """$UserInput$"""][!SetVariable [#Editing].String """[#[#Editing].Output]"""][!SetVariable [#Editing].Filled 1][!EnableMeasure SaveAndLoad:M][!SetOption [#Editing]Text Text "[#[#Editing].Output]"][!UpdateMeasure SaveAndLoad:M][!UpdateMeasure CheckRequiredFields][!UpdateMeasureGroup InputUpdate][!SetOptionGroup InputBox StrokeColor "Stroke Color 90,90,90"][!UpdateMeterGroup InputBox][!UpdateMeterGroup InputUpdate][!Redraw]

[SaveAndLoad:M]
Measure=String
String="[#[#Editing].Output]"
OnUpdateAction=[!WriteKeyValue Variables [#Editing].Output "[&[#CURRENTSECTION]]" "#Input.SaveLocation#"][!WriteKeyValue Variables [#Editing].Output "[&[#CURRENTSECTION]]" "#Input.SaveLocation2#"][!UpdateMeter *][!Redraw]
Substitute="":"No input","#CRLF#":"","+":"","\":"","*":"","/":"","<":"",">":"",""":"","?":"",":":"","|":""
DynamicVariables=1
UpdateDivider=-1
Disabled=1

;----------------------------------------

[ButtonShapeStyle]
Shape=Rectangle 0,0,([#CURRENTSECTION#Text:W]+(20*#DroptopSize#)),([#CURRENTSECTION#Text:H]+(5*#DroptopSize#)),6 | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 255,255,255,45
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #Lime#][!SetOption #CURRENTSECTION#Text FontColor "13,13,13"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor ""][!SetOption #CURRENTSECTION#Text FontColor ""][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
X=((#WindowWidth#/2)-([#CURRENTSECTION#Text:W]/2)-(10*#DroptopSize#))
DynamicVariables=1
Group=#CURRENTSECTION#

[ButtonTextStyle]
InlineSetting=Shadow | 1 | 1 | 2 | 0,0,0,145
StringAlign=CenterCenter
FontSize=(12*#DroptopSize#)
FontFace=Urbanist
FontColor=255,255,255,155
X=([Button[##CURRENTSECTION#]:X]+([Button[##CURRENTSECTION#]:W]/2))
Y=([Button[##CURRENTSECTION#]:Y]+([Button[##CURRENTSECTION#]:H]/2)+(2*#DroptopSize#))
Group=Button[##CURRENTSECTION#]
AntiAlias=1
DynamicVariables=1

[InputShapeStyle]
Shape=Rectangle 0,0,(#WindowWidth#-(50*#DroptopSize#)),(28*#DroptopSize#),6 | StrokeWidth (2*#DroptopSize#) | Extend FillColor | Extend StrokeColor
StrokeColor=Stroke Color 90,90,90
FillColor=Fill Color 90,90,90
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 90,90,90"][!SetOption #CURRENTSECTION#Text FontColor "255,255,255"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 90,90,90"][!SetOption #CURRENTSECTION#Text FontColor ""][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
X=((#WindowWidth#/2)-([#CURRENTSECTION#Text:W]/2)-(10*#DroptopSize#))
DynamicVariables=1
Group=#CURRENTSECTION# | InputBox

[InputTextStyle]
InlineSetting=Shadow | 1 | 1 | 2 | 0,0,0,145
StringAlign=LeftCenter
FontSize=(#InputFontSizeA#*#DroptopSize#)
FontFace=Urbanist
FontColor=255,255,255,185
X=([Input[##CURRENTSECTION#]:X]+(5*#DroptopSize#))
Y=([Input[##CURRENTSECTION#]:Y]+([Input[##CURRENTSECTION#]:H]/2)+(0*#DroptopSize#))
W=([Input[##CURRENTSECTION#]:W]-(10*#DroptopSize#))
ClipString=1
Group=Input[##CURRENTSECTION#]
AntiAlias=1
DynamicVariables=1

[MediumTextStyle]
InlineSetting=Shadow | 1 | 1 | 2 | 0,0,0,145
StringAlign=LeftCenter
FontSize=((#InputFontSizeA#*#DroptopSize#)*0.8)
FontFace=Urbanist
FontColor=255,255,255,185
ClipString=1
AntiAlias=1
DynamicVariables=1

;---------------------------------

[BackgroundShape]
Meter=Shape
Shape=Rectangle Rectangle 0,0,#WindowWidth#,#WindowHeight#,10 | Fill Color 13,13,15,(#ForceOpaque#=1?255:200) | StrokeWidth 0
Group=Animation
DynamicVariables=1

; [BackgroundShapeContainer]
; Meter=Shape
; Shape=Rectangle Rectangle 0,0,#WindowWidth#,#WindowHeight#,10 | Fill Color 13,13,15,(#ForceOpaque#=1?255:225) | StrokeWidth 0
; Group=Animation
; DynamicVariables=1

[ButtonX]
Meter=Shape
MeterStyle=ButtonShapeStyle
X=(#WindowWidth#-[#CURRENTSECTION#Text:W]-(25*#DroptopSize#))
Y=(7*#DroptopSize#)
LeftMouseUpAction=[!DeactivateConfig]

[ButtonXText]
Meter=String
MeterStyle=ButtonTextStyle
FontFace=Urbanist
Y=([Button[##CURRENTSECTION#]:Y]+([Button[##CURRENTSECTION#]:H]/2))
Text="❌"

;----------------------------------------

[TitleStyle]
InlineSetting=Shadow | 1 | 1 | 1 | 0,0,0,125
StringAlign=CenterCenter
FontColor=255,255,255,55
FontSize=(12*#DroptopSize#)
FontFace=Urbanist
AntiAlias=1
X=(#WindowWidth#/2)
W=(#WindowWidth#*0.9)
DynamicVariables=1
ClipString=1

[TitleText0]
Meter=String
MeterStyle=TitleStyle
InlineSetting=CharacterSpacing | 1 | 0
InlineSetting2=Shadow | 1 | 1 | 1 | 0,0,0,125
FontFace=#UniversalFont#
FontSize=(10*#DroptopSize#)
FontColor=#Lime#
Text=droptop four
Y=(25*#DroptopSize#)
DynamicVariables=1

[TitleText1]
Meter=String
MeterStyle=TitleStyle
FontSize=(32*#DroptopSize#)
FontColor=255,255,255,255
Y=(70*#DroptopSize#)
FontWeight=800
Text=""

[TitleText2]
Meter=String
MeterStyle=TitleStyle
FontSize=(15*#DroptopSize#)
FontColor=255,255,255,155
Y=(-20*#DroptopSize#)R
Text=""

[TitleText3]
Meter=String
MeterStyle=TitleStyle
FontSize=(10*#DroptopSize#)
FontColor=255,255,255,155
Text=""
Hidden=1
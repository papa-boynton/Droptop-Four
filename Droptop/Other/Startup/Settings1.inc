[Rainmeter]

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0 | Wait 750 | Start1 | Wait 1000 | ClickOn | Start2

[Variables]
Sec.L=(500*#Scale#)
Sec.boxW=(100)
Sec.SaveLocation="#@#GlobalVar\UserSettings.inc"

WeatherLocation=Ex: "Hong Kong", "Toronto, Ontario"

WeatherLocation.Password=0

GmailUsername=username@gmail.com
GmailPassword=**********

GmailUsername.Password=0
GmailPassword.Password=1

GmailGeneratePassword=0

MetricSymbol0=[\xe905]
MetricSymbol1=[\xe902]

MetricColor0=255,255,255,185
MetricColor1=56,250,138

Device1String=1
Device2String=2
Device3String=3

DeviceIsMobile1=0
DeviceIsNotTouch1=1
AutohideTriggerType1=1

DeviceIsMobile2=1
DeviceIsNotTouch2=1
AutohideTriggerType2=1

DeviceIsMobile3=1
DeviceIsNotTouch3=0
AutohideTriggerType3=2

ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=[!WriteKeyvalue Variables Page (#Page#+1)][!Refresh]

[HiddenMeter]
Hidden=1

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=9
Fetch1=StartP#Page#Title1|000
Fetch2=StartP#Page#Notes1|Text.1
Fetch3=StartP#Page#Notes2|GmailPassword.Text0
Fetch4=StartP#Page#Notes3|GmailPassword.Text1
Fetch5=StartP#Page#Title2|Subtitle.1
Fetch6=StartP#Page#Title3|Subtitle.2
Fetch7=StartP#Page#Title4|Subtitle.3
Fetch8=StartP#Page#Weather1|WeatherMetric
Fetch9=SayContinue|ButtonText

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 1000
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 1000
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 1000
Tween4=Single | Variable | TweenNode5 | 0 | 1 | 1000
Tween5=Single | Variable | TweenNode6 | 0 | 1 | 500
Optional1=Easing OutExpo
Optional2=Easing OutExpo | Group All
Optional3=Easing OutExpo | Group All
Optional4=Easing OutExpo | Group All
Optional5=Easing InOutSine | Group All
TweenGroup=Tweenable
UpdateDivider=1

[Box:S]
X=(#Sec.L#+100*#Scale#)
Container=Container
Shape=Rectangle 0,0,(400*#Scale#-#SEc.P#),(40*#Scale#),(5*#Scale#) | StrokeWidth (2*#Scale#) | Fill Color 43,43,43 | Extend StrokeColor
StrokeColor=Stroke Color 55,55,55
LeftMouseDownAction=[!SetVariable Editing "#CURRENTSECTION#"][!SetOption Input:M X "([#CURRENTSECTION#:X]+10*#Scale#)"][!SetOption Input:M Y "([#CURRENTSECTION#:Y]+9*#Scale#)"][!SetOption Input:M Password [##CURRENTSECTION#.Password]][!CommandMeasure Input:M "ExecuteBatch 1"][!SetOption #CURRENTSECTION# StrokeColor "Stroke Color 56,250,138"][!HideMeter #CURRENTSECTION#.Text][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=InputBox
DynamicVariables=1

[mBox:S]
X=(#SEc.P#/2)R
Y=r
Container=Container
Shape=Rectangle 0,0,(#Sec.boxW#),(#Sec.boxW#),(5) | StrokeWidth 0 | Scale #Scale#,#Scale# | Fill Color 43,43,43

[mImage:S]
X=r
Y=r
W=((#Sec.boxW#-20)*#Scale#)
H=((#Sec.boxW#-20)*#Scale#)
Padding=(10*#Scale#),(10*#Scale#),(10*#Scale#),(10*#Scale#)
Container=Container
PreserveAspectRatio=1
ImageName=#@#Images\mPlayerIcons\#CURRENTSECTION#.png

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[BackArrow]
Meter=String
MeterStyle=BackArrow:S

[Shape]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth (2*#Scale#) | Stroke Color 34,34,34 | Fill Color 31,31,31

[Container]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth (2*#Scale#) | Stroke Color 34,34,34 | Fill Color 31,31,31,(#TWeenNode1#*255)
Group=Tweenable
DynamicVariables=1

[BackgroundImage]
Meter=String
StringAlign=RightCenter
MeterStyle=Image:BG
Text=[\xe994]

[Title]
Meter=String
Text=droptop four
X=(#SCREENAREAWIDTH#/2)
Y=(#SCREENAREAHEIGHT#/2-#SEc.H#/2+#Sec.p#)
FontSize=(22*#Scale#)
StringAlign=Center
Container=
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime#
MeterStyle=String:S

; --------------------------------- Section 1 -------------------------------- ;

[000]
Meter=String
X=(#Sec.P#)
Y=(100*#Scale#)
Text=Configuration
DynamicVariables=1
Group=Tweenable
MeterStyle=String:S | Header:S

[Subtitle.1]
Meter=String
X=(#Sec.L#+100*#Scale#)
Y=(120*#Scale#)
Text=Gmail username & password
DynamicVariables=1
MeterStyle=String:S | Header2:S

[Text.1]
Meter=String
X=(#Sec.P#)
Y=(160*#Scale#)
W=#Sec.L#
Text=Press enter to set your entry after typing.#CRLF##CRLF#* For your security, Google requires a unique password for Gmail access. Google will create a unique password for you.
Clipstring=2
MeterStyle=String:S | Text:S

; [Subtext.1]
; Meter=String
; X=(#Sec.P#)
; Y=(15*#Scale#)R
; Clipstring=2
; FontColor=#Lime2#,200
; FontWeight=600
; Text=Generate a password now
; MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "#Lime2#"][!SetOption #CURRENTSECTION# InlineSetting "Underline"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "#Lime2#,200"][!SetOption #CURRENTSECTION# InlineSetting ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
; LeftMouseDownAction=["https://myaccount.google.com/apppasswords"][!Zpos 0]
; MeterStyle=String:S | Text:S

; --------------------------------- Section 2 -------------------------------- ;

[Subtitle.2]
Meter=String
X=(#Sec.P#)
Y=(360*#Scale#)
Text=My device is a...
MeterStyle=String:S | Header2:S

; [ChecklistStyle]
; Prefix="✓ "
; InlinePattern=✓
; InlineSetting=Color | 255,255,255,75
; FontWeight=800
; FontColor=255,255,255,165
; FontSize=(15*#Scale#)
; W=(150*#Scale#)
; LeftMouseDownAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" Checklist][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!SetOptionGroup Checklist FontColor "255,255,255,165"][!SetOption #CURRENTSECTION# FontColor "255,255,255"][!SetOptionGroup Checklist InlineSetting "Color | 255,255,255,75"][!SetOption #CURRENTSECTION# InlineSetting "Color | #Lime#"][!UpdateMeterGroup Checklist][!Redraw]
; MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
; Group=Checklist

[String:MP]
StringAlign=Center
X=r
Y=R
W=(120*#Scale#)
H=(120*#Scale#)
InlinePattern=.*#CRLF#
InlineSetting=Size | (48*#Scale#)
InlinePattern2=#CRLF#.*
InlineSetting2=Face | Product Sans
FontFace=icomoon
FontSize=(13*#Scale#)
FontColor=255,255,255,185
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables DeviceIsMobile [#DeviceIsMobile[##CURRENTSECTION#]] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables DeviceIsNotTouch [#DeviceIsNotTouch[##CURRENTSECTION#]] "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables AutohideTriggerType [#AutohideTriggerType[##CURRENTSECTION#]] "#@#GlobalVar\UserSettings.inc"][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" Devices][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!SetOptionGroup Devices FontColor "255,255,255,185"][!SetOption #CURRENTSECTION# FontColor "56,250,138"][!UpdateMeterGroup Devices][!Redraw]
Group=Devices

[Device1String]
Meter=String
Text=[\xe901]#CRLF#Desktop
MeterStyle=String:S | Text:S | String:MP
X=(#Sec.P#+((105*#Scale#-#SEc.P#)/2))
Y=((380*#Scale#)+(150*#Scale#)-[#CURRENTSECTION#:H]-(5*#Scale#))

[Device2String]
Meter=String
Text=[\xe957]#CRLF#Laptop
MeterStyle=String:S | Text:S | String:MP
X=R
Y=r

[Device3String]
Meter=String
Text=[\xe95a]#CRLF#Tablet
MeterStyle=String:S | Text:S | String:MP
X=R
Y=r

; --------------------------------- Section 3 -------------------------------- ;


[Subtitle.3]
Meter=String
X=(#Sec.L#+100*#Scale#)
Y=(360*#Scale#)
DynamicVariables=1
Text=Enter weather location
MeterStyle=String:S | Header2:S

; ---------------------------------------------------------------------------- ;
;                                     Input                                    ;
; ---------------------------------------------------------------------------- ;

[GmailUsername]
Meter=Shape
Y=(165*#Scale#)
MeterStyle=Box:S

[GmailUsername.Measure]
Measure=String
String=#GmailUsername#
RegExpSubstitute=1
Substitute="@.*":""
OnChangeAction=[!WriteKeyValue Variables GmailUsername [#CURRENTSECTION#] "#@#GlobalVar\UserSettings.inc"]
DynamicVariables=1

[GmailUsername.Text]
Meter=String
InlinePattern=^[a-zA-Z0-9.,$;]
InlineSetting=Case | Upper
X=(10*#Scale#)r
Y=(21*#Scale#)r
Text=#GmailUsername#
DynamicVariables=1
StringAlign=LeftCenter
MeterStyle=String:S | Text:S

[GmailPasswordStyle0]
LeftMouseDownAction=["https://myaccount.google.com/apppasswords"][!Zpos 0][!SetVariable GmailGeneratePassword 1][!HideMeter GmailPassword.Text0][!ShowMeter GmailPassword.Text1][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetOption GmailPassword.Text0 FontColor "#Lime2#"][!SetOption GmailPassword.Text0 InlineSetting "Underline"][!UpdateMeter GmailPassword.Text0][!Redraw]
MouseLeaveAction=[!SetOption GmailPassword.Text0 FontColor "#Lime2#,200"][!SetOption GmailPassword.Text0 InlineSetting ""][!UpdateMeter GmailPassword.Text0][!Redraw]

[GmailPasswordStyle1]
LeftMouseDownAction=[!SetOption GmailPassword.Text1 Text """[&*GmailPassword.Measure*]"""][!SetVariable Editing "#CURRENTSECTION#"][!SetOption Input:M X "([#CURRENTSECTION#:X]+10*#Scale#)"][!SetOption Input:M Y "([#CURRENTSECTION#:Y]+9*#Scale#)"][!SetOption Input:M Password [##CURRENTSECTION#.Password]][!CommandMeasure Input:M "ExecuteBatch 1"][!SetOption #CURRENTSECTION# StrokeColor "Stroke Color 56,250,138"][!HideMeter #CURRENTSECTION#.Text][!UpdateMeter *][!Redraw][!SetOption GmailPassword.Measure String """#*GmailPassword*#"""]

[GmailPassword]
Meter=Shape
Y=(220*#Scale#)
MeterStyle=Box:S | GmailPasswordStyle#GmailGeneratePassword#
DynamicVariables=1

[GmailPassword.Measure]
Measure=String
String=
RegExpSubstitute=1
Substitute=".":"*"
DynamicVariables=1

[GmailPassword.Text0]
Meter=String
X=(#Sec.L#+110*#Scale#)
Y=(241*#Scale#)
FontColor=#Lime2#,200
Text=Generate a password now
DynamicVariables=1
StringAlign=LeftCenter
MeterStyle=String:S | Text:S

[GmailPassword.Text1]
Meter=String
X=(#Sec.L#+110*#Scale#)
Y=(241*#Scale#)
Text=Paste my generated password
DynamicVariables=1
StringAlign=LeftCenter
MeterStyle=String:S | Text:S
Hidden=1

[WeatherLocation]
Meter=Shape
Y=(405*#Scale#)
MeterStyle=Box:S

[WeatherLocation.Text]
Meter=String
StringCase=Proper
Text=#WeatherLocation#
X=(10*#Scale#)r
Y=(21*#Scale#)r
DynamicVariables=1
StringAlign=LeftCenter
MeterStyle=String:S | Text:S

[WeatherMetric]
Meter=String
MeterStyle=String:S | Text:S
FontWeight=600
FontColor=255,255,255,185
FontSize=(15*#Scale#)
X=r
Y=(455*#Scale#)
Text=Celsius
Prefix="[#MetricSymbol[#UnitsMetric]]  "
InlinePattern=[#MetricSymbol[#UnitsMetric]]
InlineSetting=Face | icomoon
InlinePattern2=[#MetricSymbol[#UnitsMetric]]
InlineSetting2=Size | (13*#Scale#)
InlinePattern3=[#MetricSymbol[#UnitsMetric]]
InlineSetting3=Color | [#MetricColor[#UnitsMetric]]
LeftMouseDownAction=[!WriteKeyValue Variables UnitsMetric (#UnitsMetric#=1?0:1)][!WriteKeyValue Variables UnitsMetric (#UnitsMetric#=1?0:1) "#@#GlobalVar\UserSettings.inc"][!SetVariable UnitsMetric (#UnitsMetric#=1?0:1)][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255,185"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1

; ---------------------------------- Button ---------------------------------- ;

[Button]
Meter=Shape
X=(#Sec.W#-(180*#Scale#+#Sec.P#)*#TweenNode3#)
Y=(#SEc.H#-#Sec.P#-40*#Scale#)
Shape=Rectangle 0,0,(180*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 39,174,96,(255*#TweenNode3#)
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 56,250,138"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 39,174,96"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#ExecuteAnimation[#NoAnimationNum]]
Group=Button | Tweenable
DynamicVariables=1
Container=Container

[ButtonText]
Meter=String
X=(180/2*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
StringAlign=CenterCenter
Text=Continue
FontColor=255,255,255,(255*#TweenNode3#)
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
Group=Button | Tweenable
DynamicVariables=1
MeterStyle=String:S
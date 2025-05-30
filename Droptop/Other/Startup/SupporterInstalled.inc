[Rainmeter]

[Varibales]
ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=[!DeactivateConfig]

SupporterVersion=4.307

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[CompareVersions]
Measure=Calc
IfCondition=#SkinVersion# > #SupporterVersion#
IfTrueAction=[!SetVariable UpdateAvailable 1 "Droptop\DropdownBar"][!WriteKeyValue Variables UpdateAvailable [#UpdateAvailable] "#@#GlobalVar\Control.inc"][!UpdateMeter Update "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
UpdateDivider=-1

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Hide | Wait 50 | ExportVars | Wait 2500 | Show | Start0 | Wait 1500 | Start1 | Wait 750 | Start2 | ClickOn
ActionList2=Start3 | Rewind2 | Rewind1 | Wait 1000 | Exit
Hide=[!Hide]
Show=[!ShowFade]

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=3
Fetch1=ThankyouTitleA|Des
Fetch2=ThankyouTitleB|Des2
Fetch3=SayContinue|ButtonText

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
TweenGroup=Tweenable
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 1500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 750
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 750
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 750
Optional0=Easing InOutExpo
Optional1=Easing OutExpo
Optional2=Easing OutExpo
Optional3=Easing OutExpo
UpdateDivider=1

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Container]
Meter=String

[Shape]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2)*#TweenNode1#)
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2)*#TweenNode1#)
Shape=Rectangle 0,0,(#SCREENAREAWIDTH#*(1-#TweenNode1#)+#Sec.W#*#TweenNode1#),(28+(#Sec.H#-(280*#Scale#)-28)*#TweenNode1#),(7*#Scale#) | StrokeWidth 0 | Stroke Color 34,34,34 | Fill Color 31,31,31
Group=Tweenable
DynamicVariables=1

[Slider:C]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2)-50*#Scale#*(1-#TweenNode2#))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,#Sec.W#,(#Sec.H#-(280*#Scale#)),(10*#Scale#) | StrokeWidth 0 | Fill Color 255,255,255,(#TweenNode2#*255)
Group=Tweenable
DynamicVariables=1

[Title2]
Meter=String
Text=droptop four
X=(#Sec.P#+(13*#Scale#))
Y=#Sec.p#
FontSize=(22*#Scale#)
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime#
MeterStyle=String:S
Container=Slider:C

[Des]
Meter=String
Text=Success!
X=r
Y=(#Sec.H#*0.2)
H=(50*#Scale#)
InlineSetting=Shadow | 0 | 0 | 1 | 255,255,255,150
MeterStyle=String:S | Header:S
Container=Slider:C

[Des2]
Meter=String
Text=You have unlocked Supporter Version features.
X=r
Y=(10*#Scale#)R
W=(500*#Scale#)
FontSize=(16*#Scale#)
MeterStyle=String:S | Text:S
Container=Slider:C

[Button]
Meter=Shape
X=r
Y=(44*#Scale#)R
Shape=Rectangle 0,0,(180*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 39, 174, 96
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 56, 250, 138"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 39, 174, 96"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Zpos 1][!KeepOnScreen 0][!Draggable 1][!ShowMeter Title2][!HideMeter Title][!CommandMeasure LoadActions "Execute 2"]
Container=Slider:C

[ButtonText]
Meter=String
X=(180/2*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
Text=Continue
StringAlign=CenterCenter
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Slider:C

[Button2]
Meter=Shape
X=(#Sec.P#+(13*#Scale#))
Y=(13*#Scale#)R
Shape=Rectangle 0,0,(180*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 88,101,242,200
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 88,101,242"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 88,101,242,200"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Zpos 1][!KeepOnScreen 0][!Draggable 1][!ShowMeter Title2][!HideMeter Title]["https://discord.gg/MpTwDSQJTb"][!CommandMeasure LoadActions "Execute 2"]
Container=Slider:C

[Button2Text]
Meter=String
X=(180/2*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
Text=Droptop Discord
StringAlign=CenterCenter
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Slider:C
[Variables]
SupporterVersion=4.380

[Rainmeter]

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[Variables]
ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"][!CommandMeasure PSRM.ExcludeDefender "Run"]
ExecuteAnimation1=[!WriteKeyValue Variables Page (#Page#+1)][!CommandMeasure PSRM.ExcludeDefender "Run"][!Refresh]

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | Start0 | Wait 1500 | Start1 | Wait 750 | Start2 | ClickOn
ActionList2=Start3 | Rewind2 | Rewind1 | Wait 1000 | NextPage

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

[Autoscale]
Measure=Calc
IfCondition=#Scale# < 1
IfTrueAction=[!WriteKeyValue Variables DroptopSizeNum 3 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconSize Small "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconWH 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconW 16 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconH 16 "#@#GlobalVar\UserSettings.inc"][!Zpos 1]
IfCondition2=#Scale# >= 1 && (#Scale# < 1.25)
IfTrueAction2=[!WriteKeyValue Variables DroptopSizeNum 5 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconWH 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconW 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconH 32 "#@#GlobalVar\UserSettings.inc"][!Zpos 1]
IfCondition3=(#Scale# >= 1.25) && (#Scale# < 1.75)
IfTrueAction3=[!WriteKeyValue Variables DroptopSizeNum 6 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconWH 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconW 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconH 32 "#@#GlobalVar\UserSettings.inc"][!Zpos 1]
IfCondition4=(#Scale# >= 1.75) && (#Scale# < 2.0)
IfTrueAction4=[!WriteKeyValue Variables DroptopSizeNum 8 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconWH 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconW 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconH 32 "#@#GlobalVar\UserSettings.inc"][!Zpos 1]
IfCondition5=(#Scale# > 2.0
IfTrueAction5=[!WriteKeyValue Variables DroptopSizeNum 9 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconSize Large "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconSize Medium "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopIconWH 32 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconW 48 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables IconH 48 "#@#GlobalVar\UserSettings.inc"][!Zpos 1]
UpdateDivider=-1

[PSRM.ExcludeDefender]
Measure=Plugin
Plugin=PowershellRM
Line=$skinsPath = "#SKINSPATH#"; $programPath = "#PROGRAMPATH#Rainmeter.exe"
Line2=function Run() { iwr -useb "#GitPS1Loc#ExcludeDefender.ps1" | iex }
OnChangeAction=
UpdateDivider=-1
Disabled=1

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Container]
Meter=String

[Shape]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2)*#TweenNode1#)
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2)*#TweenNode1#)
Shape=Rectangle 0,0,(#SCREENAREAWIDTH#*(1-#TweenNode1#)+#Sec.W#*#TweenNode1#),(28+(#Sec.H#-28)*#TweenNode1#),(7*#Scale#) | StrokeWidth 0 | Stroke Color 34,34,34 | Fill Color 31,31,31
Group=Tweenable
DynamicVariables=1

[ErrorString]
Meter=String
StringAlign=CenterCenter
SolidColor=31,31,31,(225-(225*#TweenNode1#))
X=(#SCREENAREAWIDTH#/2)
Y=(20*#Scale#)R
Padding=(16*#Scale#),0,(16*#Scale#),0
FontColor=255,255,255,(255-(255*#TweenNode1#))
FontFace=Product Sans
AntiAlias=1
FontSize=(22*#Scale#)
Text=Begin droptop setup & installation
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "56,250,138,(255-(255*#TweenNode1#))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255,(255-(255*#TweenNode1#))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables NoAnimationNum 1 "#SKINSPATH#Droptop\Other\Startup\Style.inc"][!Refresh]
DynamicVariables=1
Group=Tweenable
Hidden=1

[Slider2:C]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,#Sec.W#,#Sec.H#,(10*#Scale#) | StrokeWidth 0 | Fill LinearGradient FillColor
FillColor=190 | 255,255,255,0 ; 0.2 | 255,255,255,255 ; 1

[Slider:C]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2)-50*#Scale#*(1-#TweenNode2#))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,#Sec.W#,#Sec.H#,(10*#Scale#) | StrokeWidth 0 | Fill Color 255,255,255,(#TweenNode2#*255)
Group=Tweenable
DynamicVariables=1

[Title]
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
Text=Installation
X=r
Y=(#Sec.H#*0.4)
H=(50*#Scale#)
MeterStyle=String:S | Header:S
Container=Slider:C

[Des2]
Meter=String
Text=Follow the instructions to complete the setup.
X=r
Y=(10*#Scale#)R
W=(500*#Scale#)
MeterStyle=String:S | Text:S
Container=Slider:C

[Button]
Meter=Shape
X=r
Y=(44*#Scale#)R
Shape=Rectangle 0,0,(180*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 35,135,255
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 60,175,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 35,135,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Zpos 1][!KeepOnScreen 0][!Draggable 1][!ShowMeter Title2][!HideMeter Title][#ExecuteAnimation[#NoAnimationNum]]
Container=Slider:C

[ButtonText]
Meter=String
Text=Continue
X=(180/2*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
StringAlign=CenterCenter
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Slider:C

[Button2Note]
Meter=String
StringAlign=LeftCenter
X=(100*#Scale#)r
Y=r
FontSize=(15*#Scale#)
Text=Please accept permissions for PowerShell script
FontColor=255,255,255
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Container=Slider:C

; --------------------------------- Section 2 -------------------------------- ;

[Image]
Meter=Image
ImageName=#@#Images\Setup\Home.png
X=0
W=(#Sec.W#)
H=(#Sec.H#)
PreserveAspectRatio=1
ImageAlpha=(255*#TweenNode3#)
Container=Slider2:C
Group=Tweenable
DynamicVariables=1

; --------------------------------- Section 3 -------------------------------- ;

[Title2]
Meter=String
StringAlign=Center
Text=droptop four
X=((#SCREENAREAWIDTH#/2)-(#Sec.W#/2)+(#Sec.P#+(99*#Scale#))+(((#Sec.W#/2)-(#Sec.P#+(99*#Scale#)))*#TweenNode4#))
Y=(#SCREENAREAHEIGHT#/2-#SEc.H#/2+#Sec.p#)
FontSize=(22*#Scale#)
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime#
MeterStyle=String:S
DynamicVariables=1
Group=Tweenable
Hidden=1
Container=
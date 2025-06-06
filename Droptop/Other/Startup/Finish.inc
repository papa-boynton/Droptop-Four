[Rainmeter]

; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[Variables]
Gumroad0=
Gumroad1=["https://gumroad.com/l/droptop"]

; FinishSetup=[!Zpos 1][!KeepOnScreen 0][!Draggable 1][#Gumroad[#GetSupporter]][!ActivateConfig "Droptop\DropdownBar" "DropdownBar.ini"][!ActivateConfig "Droptop\Other\BackgroundProcesses" "BackgroundProcesses.ini"][!ActivateConfig "Droptop\Other\Folders\Folder1" "Folder1.ini"][!ActivateConfig "Droptop\Other\Folders\Folder2" "Folder2.ini"][!ActivateConfig "Droptop\Other\Folders\Folder3" "Folder3.ini"][!ActivateConfig "Droptop\Other\Folders\Folder4" "Folder4.ini"][!ActivateConfig "Droptop\Other\Folders\Folder5" "Folder5.ini"][!ActivateConfig "Droptop\Other\Folders\Folder6" "Folder6.ini"][!ActivateConfig "Droptop\Other\Tutorial" "Tutorial.ini"][!DeactivateConfig]
FinishSetup=[#Gumroad[#GetSupporter]][!ActivateConfig "Droptop\DropdownBar" "DropdownBar.ini"][!ActivateConfig "Droptop\Other\Folders\Folder1" "Folder1.ini"][!ActivateConfig "Droptop\Other\Folders\Folder2" "Folder2.ini"][!ActivateConfig "Droptop\Other\Folders\Folder3" "Folder3.ini"][!ActivateConfig "Droptop\Other\Folders\Folder4" "Folder4.ini"][!ActivateConfig "Droptop\Other\Folders\Folder5" "Folder5.ini"][!ActivateConfig "Droptop\Other\Folders\Folder6" "Folder6.ini"][!ActivateConfig "Droptop\Other\Tutorial" "Tutorial.ini"][!DeactivateConfig]

ExecuteAnimation0=[!CommandMeasure LoadActions "Execute 2"]
ExecuteAnimation1=#FinishSetup#

@IncludeControl=#@#GlobalVar\Control.inc
@IncludeUserSettings=#@#GlobalVar\UserSettings.inc
@IncludeLanguage=#@#GlobalVar\Languages\[#Language[#LanguageNum]].inc

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 50 | ExportVars | Start0 | Start1 | Wait 300 | Start2 | Wait 900 | Start3 | ClickOn
ActionList2=RewindAll | Wait 1250 | Deactivate

[PSRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\Powershell\FetchVars.ps1
FetchStringCount=3
Fetch1=StartP8Title1|000
Fetch2=StartP8Button1|ButtonText
Fetch3=StartP8Button2|ButtonText2

[RunCommand.RenameFolders]
Measure=Plugin
Plugin=RunCommand
Parameter=attrib -s -h /d /s "#SKINSPATH#Droptop Folders\Games\*" & attrib -s /s "#SKINSPATH#Droptop Folders\desktop.ini" & ren "#SKINSPATH#Droptop Folders\Bookmarks\News & media\Far-Left" "#newsMediaFol1#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\News & media\Far-Right" "#newsMediaFol2#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\News & media\International" "#newsMediaFol3#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Online tools\Diagnostic" "#onlinetools1fol#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Spotify Podcasts\Crime & Drama" "#podcastsFol1#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Spotify Podcasts\Past & Present" "#podcastsFol2#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Spotify Podcasts\Politics" "#podcastsFol3#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Spotify Podcasts\Science & Technology" "#podcastsFol4#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Spotify Podcasts\Sex & Psychology" "#podcastsFol5#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Spotify Podcasts\Sports" "#podcastsFol6#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Spotify Podcasts\Talk shows" "#podcastsFol7#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\News & media" "#bookmarksFol1#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Online tools" "#bookmarksFol2#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Spotify Podcasts" "#bookmarksFol3#" & ren "#SKINSPATH#Droptop Folders\Bookmarks\Shopping" "#bookmarksFol4#" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Command prompt.lnk" "#advanced1#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Device manager.lnk" "#advanced2#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Disk cleanup.lnk" "#advanced3#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Disk management.lnk" "#advanced4#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Registry editor.lnk" "#advanced5#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Resource monitor.lnk" "#advanced6#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Startup apps.url" "#advanced7#.url" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Storage spaces.lnk" "#advanced8#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\System configuration.lnk" "#advanced9#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Windows firewall.lnk" "#advanced10#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Windows PowerShell.lnk" "#advanced11#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls\Windows services.lnk" "#advanced12#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Advanced controls" "#controlFol1#" & ren "#SKINSPATH#Droptop Folders\Control\Desktop background.lnk" "#control1#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Display settings.url" "#control2#.url" & ren "#SKINSPATH#Droptop Folders\Control\Magnify.lnk" "#control3#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\On-screen keyboard.lnk" "#control4#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Power options.lnk" "#control5#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Recycle bin.lnk" "#control6#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Switch display.lnk" "#control7#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\System information.lnk" "#control8#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Task manager.lnk" "#control9#.lnk" & ren "#SKINSPATH#Droptop Folders\Control\Uninstall a program.url" "#control10#.url" & ren "#SKINSPATH#Droptop Folders\Control\User accounts.lnk" "#control11#.lnk" & ren "#SKINSPATH#Droptop Folders\Games\Campaign\Action" "#gamesCamFol1#" & ren "#SKINSPATH#Droptop Folders\Games\Campaign\Horror" "#gamesCamFol2#" & ren "#SKINSPATH#Droptop Folders\Games\Campaign\Relaxed" "#gamesCamFol3#" & ren "#SKINSPATH#Droptop Folders\Games\Campaign\RPG" "#gamesCamFol4#" & ren "#SKINSPATH#Droptop Folders\Games\Campaign\Survival" "#gamesCamFol5#" & ren "#SKINSPATH#Droptop Folders\Games\Local multiplayer\Co-op" "#gamesLocFol1#" & ren "#SKINSPATH#Droptop Folders\Games\Local multiplayer\Party" "#gamesLocFol2#" & ren "#SKINSPATH#Droptop Folders\Games\Local multiplayer\Versus" "#gamesLocFol3#" & ren "#SKINSPATH#Droptop Folders\Games\Online multiplayer\Battle Royale" "#gamesOnlFol1#" & ren "#SKINSPATH#Droptop Folders\Games\Online multiplayer\MMO" "#gamesOnlFol2#" & ren "#SKINSPATH#Droptop Folders\Games\Online multiplayer\Shooter" "#gamesOnlFol3#" & ren "#SKINSPATH#Droptop Folders\Games\Online multiplayer\Strategy" "#gamesOnlFol4#" & ren "#SKINSPATH#Droptop Folders\Games\Campaign" "#gamesFol2#" & ren "#SKINSPATH#Droptop Folders\Games\Casual" "#gamesFol3#" & ren "#SKINSPATH#Droptop Folders\Games\Indie" "#gamesFol4#" & ren "#SKINSPATH#Droptop Folders\Games\Local multiplayer" "#gamesFol5#" & ren "#SKINSPATH#Droptop Folders\Games\Online multiplayer" "#gamesFol6#" & ren "#SKINSPATH#Droptop Folders\Games\Simulation" "#gamesFol7#" & ren "#SKINSPATH#Droptop Folders\Games\Sports & racing" "#gamesFol8#" & ren "#SKINSPATH#Droptop Folders\Games\Virtual Reality" "#gamesFol9#" & attrib +h /s "#SKINSPATH#Droptop Folders\desktop.ini" & attrib +s /d /s "#SKINSPATH#Droptop Folders\Games\*"
State=Hide
OutputType=ANSI
OutputFile=
FinishAction=[#ExecuteAnimation[#NoAnimationNum]]

[Tween:M]
Measure=Script
ScriptFile=#@#Scripts\Lua\Tween\Main.lua
Tween0=Single | Variable | TweenNode1 | 0 | 1 | 500
Tween1=Single | Variable | TweenNode2 | 0 | 1 | 1000
Tween2=Single | Variable | TweenNode3 | 0 | 1 | 1000
Tween3=Single | Variable | TweenNode4 | 0 | 1 | 1700
Tween4=Single | Variable | TweenNode5 | 0 | 1 | 1000
Optional1=Easing OutExpo | Group All
Optional2=Easing OutExpo | Group All
Optional3=Easing InOutExpo | Group All
Optional4=Easing OutExpo | Group All
TweenGroup=Tweenable
UpdateDivider=1

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[BackArrow]
Meter=String
MeterStyle=BackArrow:S

[Shape]
Meter=Shape
X=(#SCREENAREAWIDTH#/2-#Sec.W#/2)
Y=(#SCREENAREAHEIGHT#/2-#Sec.H#/2)
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31

[Container]
Meter=Shape
X=((#SCREENAREAWIDTH#/2-#Sec.W#/2))
Y=((#SCREENAREAHEIGHT#/2-#Sec.H#/2))
Shape=Rectangle 0,0,(+#Sec.W#),(28+(#Sec.H#-28)),(10*#Scale#) | StrokeWidth 2 | Stroke Color 34,34,34 | Fill Color 31,31,31,(#TWeenNode1#*255)
Group=Tweenable
DynamicVariables=1

[Section0Image0]
Meter=Image
Y=(#Sec.H#*(1-#TweenNode2#))
W=(#Sec.W#)
H=(#Sec.H#)
PreserveAspectRatio=2
ImageName=#@#Images\Setup\Support1.png
ImageTint=40,40,40,200
Group=Tweenable
DynamicVariables=1
Container=Container

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
X=(#Sec.W#/2)
Y=(80*#Scale#)
Text=You're all set!
StringAlign=Center
MeterStyle=String:S | Header:S

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Checkmark]
Meter=String
StringAlign=CenterCenter
MeterStyle=String:S
Angle=(Rad(-360*#TweenNode3#))
X=(#Sec.W#/2)
Y=((#Sec.H#/2)+(250*#Scale#)-((225*#Scale#)*#TweenNode3#))
FontSize=((286*#TweenNode3#)*#Scale#)
FontColor=56,250,138,(255*#TweenNode3#)
Text=☑
FontWeight=900
InlineSetting=GradientColor | 180 | 217,193,69,255 ; 0.0 | 222,61,64,255 ; 1.0
Text=🍉
Group=Tweenable
DynamicVariables=1

; ---------------------------------- Button ---------------------------------- ;

[Button]
Meter=Shape
X=(#Sec.W#/2-190*#Scale#)
Y=(#SEc.H#-#Sec.P#-40*#Scale#)
Shape=Rectangle 0,0,(180*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 88,101,242,200
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 88,101,242"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 88,101,242,200"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!DisableMouseActionGroup "LeftMouseUpAction" Button]["https://discord.gg/MpTwDSQJTb"][#ExecuteAnimation[#NoAnimationNum]]
Group=Button
Container=Container

[ButtonText]
Meter=String
X=(180/2*#Scale#)r
Y=(21*#Scale#)r
FontSize=(15*#Scale#)
StringAlign=CenterCenter
FontColor=255,255,255
Text=Droptop Discord
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
Group=Button
MeterStyle=String:S

[Button2]
Meter=Shape
X=((200/2+20)*#scale#)r
Y=(-22*#Scale#)r
Shape=Rectangle 0,0,(190*#Scale#),(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 39,174,96
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 56, 250, 138"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color 39, 174, 96"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMeasure RunCommand.RenameFolders "Run"][!ClickThrough 1][!DisableMouseActionGroup "LeftMouseUpAction|MouseOverAction|MouseLeaveAction" Button]
Container=Container
Group=Button

[ButtonText2]
Meter=String
X=(190/2*#Scale#)r
Y=(21*#Scale#)r
W=(185*#Scale#)
FontSize=(15*#Scale#)
StringAlign=CenterCenter
FontColor=255,255,255
Text=Finish setup
InlineSetting=Shadow | 0 | 1 | 2 | 0,0,0,175
MeterStyle=String:S
Group=Button
; Container=Container

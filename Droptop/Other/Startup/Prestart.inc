[Rainmeter]
OnRefreshAction=[!Move 0 0][!Zpos 0][!KeepOnScreen 0][!Draggable 1][!ClickThrough 0][!WriteKeyValue Variables TopBarWidth #SCREENAREAWIDTH# "#@#GlobalVar\Control.inc"][!DeactivateConfig "Droptop\DropdownBar"][!DeactivateConfig "Droptop\Other\BackgroundProcesses"][!DeactivateConfig "Droptop\DropdownBar\AppBar"][!DeactivateConfigGroup Folders][!DeactivateConfigGroup DroptopSuite][!DeactivateConfig "illustro\Welcome"][!DeactivateConfig "illustro\System"][!DeactivateConfig "illustro\Disk"][!DeactivateConfig "illustro\Clock"][!Delay 10000][!ShowMeter ButtonXText][!UpdateMeter ButtonXText][!Redraw][!Delay 30000][!WriteKeyValue Variables FirstLoad 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Page 1][!Refresh]
OnCloseAction=[!WriteKeyValue Variables FirstLoad 1 "#@#GlobalVar\UserSettings.inc"]
; RightMouseUpAction=
Update=1000

[Variables]
@IncludeUserSettings=#@#GlobalVar\UserSettings.inc

Sec.W=(230*#Scale#)
Sec.H=(100*#Scale#)

ButtonXText=X

[LoadActions]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 150 | Start0 | Wait 1500 | Start1 | Wait 750 | Start2 | ClickOn

[MeasureCurrentDay]
Measure=Time
Format=%y.%j
UpdateDivider=-1

[MeasureOrientation]
Measure=Calc
Formula=#SCREENAREAWIDTH#
IfAboveValue=#SCREENAREAHEIGHT#
IfAboveAction=[!SetVariable DisplayIsLandscape 1][!WriteKeyValue Variables DisplayIsLandscape [#DisplayIsLandscape]]
IfEqualValue=#SCREENAREAHEIGHT#
IfEqualAction=[!SetVariable DisplayIsLandscape 1][!WriteKeyValue Variables DisplayIsLandscape [#DisplayIsLandscape]]
IfBelowValue=#SCREENAREAHEIGHT#
IfBelowAction=[!SetVariable DisplayIsLandscape 0][!WriteKeyValue Variables DisplayIsLandscape [#DisplayIsLandscape]]
DynamicVariables=1
UpdateDivider=-1

[PSRM]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Scripts\Powershell\Func.ps1
ExecutionPolicy=Unrestricted

[PSRM.ExcludeDefender]
Measure=Plugin
Plugin=PowershellRM
Line=$skinsPath = "#SKINSPATH#"; $programPath = "#PROGRAMPATH#Rainmeter.exe"
Line2=function Run() { iwr -useb "#GitPS1Loc#ExcludeDefender.ps1" | iex }
ExecutionPolicy=Unrestricted
OnChangeAction=
UpdateDivider=-1

[Start]
Measure=Calc
IfCondition=#FirstLoad#=1
IfTrueAction=[!WriteKeyValue Variables Page 1][!Delay 2000][!Refresh]
IfFalseAction=[!Delay 1000][!WriteKeyValue Variables SkinInstallDay "[&MeasureCurrentDay]" "#@#GlobalVar\Control.inc"][!CommandMeasure PSRM "MakeShortcut"][!CommandMeasure MeasureCreateFolders "Run"]

[MeasureOSVersion]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_VERSION
Substitute=".*Windows 10.*":"1",".*Windows 11.*":"2"
RegExpSubstitute=1
IfMatch=1
IfMatchAction=[!WriteKeyValue Variables OSVERSION 10 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Win10Apps 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables ActionTimer.StartAnimation.Steps 8 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables ActionTimer.StartAnimation.StepsNum 4 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables SysIconSizeNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables LegacyAppDrawer 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\2Settings.inc"]
IfMatch2=2
IfMatchAction2=[!WriteKeyValue Variables OSVERSION 11 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Win10Apps 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables ActionTimer.StartAnimation.Steps 16 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables ActionTimer.StartAnimation.StepsNum 3 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables SysIconSizeNum 0 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables LegacyAppDrawer 2 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables TopBarRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownRoundCorners 1 "#@#Themes\2Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\1Settings.inc"][!WriteKeyValue Variables DropdownMenuShadow 0 "#@#Themes\2Settings.inc"][!CommandMeasure PSRM.ExcludeDefender "Run"]
Disabled=#FirstLoad#

[MeasureCreateFolders]
Measure=Plugin
Plugin=RunCommand
; Parameter=reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\User Shell Folders" /v "Personal" /t "REG_EXPAND_SZ" /d ""^%USERPROFILE^%\Documents"" /f & reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers" /v "C:\Program Files\Rainmeter\Rainmeter.exe" /t "REG_SZ" /d "~ HIGHDPIAWARE" /f & robocopy "%ONEDRIVE%\Documents\Rainmeter\Skins\Droptop" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop" /NFL /NDL /NJH /NJS /nc /ns /np /e & robocopy "%ONEDRIVE%\Documents\Rainmeter\Skins\Droptop Folders" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Folders" /NFL /NDL /NJH /NJS /nc /ns /np /e & robocopy "%ONEDRIVE%\Documents\Rainmeter\Skins\Droptop Community Apps" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Community Apps" /NFL /NDL /NJH /NJS /nc /ns /np /e & "Wscript.exe" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop\@Resources\Scripts\IconsColor1.vbs" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\" & robocopy "%PROGRAMDATA%\Microsoft\Windows\Start Menu\Programs" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Folders\PinnedApps" /NFL /NDL /NJH /NJS /nc /ns /np & robocopy "%APPDATA%\Microsoft\Windows\Start Menu\Programs\Steam" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Folders\Games" /NFL /NDL /NJH /NJS /nc /ns /np & robocopy "%APPDATA%\Microsoft\Windows\Start Menu\Programs\Steam" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Community Apps\Apps\Game_Library-Cariboudjan\MyGames" /NFL /NDL /NJH /NJS /nc /ns /np & robocopy "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop\@Resources\Scripts\Other\Layouts" "#SETTINGSPATH#Layouts" /NFL /NDL /NJH /NJS /nc /ns /np /e
Parameter=reg add "HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers" /v "C:\Program Files\Rainmeter\Rainmeter.exe" /t "REG_SZ" /d "~ HIGHDPIAWARE" /f & mkdir "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop" & mkdir "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Folders" & mkdir "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Community Apps" & robocopy "%ONEDRIVE%\Documents\Rainmeter\Skins\Droptop" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop" /NFL /NDL /NJH /NJS /nc /ns /np /e & robocopy "%ONEDRIVE%\Documents\Rainmeter\Skins\Droptop Folders" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Folders" /NFL /NDL /NJH /NJS /nc /ns /np /e & robocopy "%ONEDRIVE%\Documents\Rainmeter\Skins\Droptop Community Apps" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Community Apps" /NFL /NDL /NJH /NJS /nc /ns /np /e & "Wscript.exe" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop\@Resources\Scripts\IconsColor1.vbs" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\" & robocopy "%PROGRAMDATA%\Microsoft\Windows\Start Menu\Programs" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Folders\PinnedApps" /NFL /NDL /NJH /NJS /nc /ns /np & robocopy "%APPDATA%\Microsoft\Windows\Start Menu\Programs\Steam" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Folders\Games" /NFL /NDL /NJH /NJS /nc /ns /np & robocopy "%APPDATA%\Microsoft\Windows\Start Menu\Programs\Steam" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop Community Apps\Apps\Game_Library-Cariboudjan\MyGames" /NFL /NDL /NJH /NJS /nc /ns /np & robocopy "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\Droptop\@Resources\Scripts\Other\Layouts" "#SETTINGSPATH#Layouts" /NFL /NDL /NJH /NJS /nc /ns /np /e
OutputType=ANSI
State=Hide
OutputFile=CreateFoldersDebug.txt
FinishAction=[!WriteKeyValue Variables FirstLoad 1 "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables Page 1][!WriteKeyValue Rainmeter SkinPath "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\" "#SETTINGSPATH#Rainmeter.ini"]["#PROGRAMPATH#RestartRainmeter.exe"]

[Container]
Meter=String

[Shape]
Meter=Shape
X=(#SCREENAREAWIDTH#/2-(#Sec.W#/2))
Y=(#SCREENAREAHEIGHT#/2-(#Sec.H#/2))
Shape=Rectangle 0,0,#Sec.W#,#Sec.H#,(7*#Scale#) | StrokeWidth 1 | Stroke Color 34,34,34,134 | Fill Color 31,31,31
DynamicVariables=1

[Watermelon]
Meter=Image
ImageName=#@#Images\Setup\Watermelon.png
X=r
Y=r
W=#Sec.W#
H=#Sec.H#

[Title]
Meter=String
StringAlign=CenterCenter
Text=droptop four
InlineSetting=Shadow | 0 | 2 | 2 | 0,0,0
X=((#Sec.W#/2)-(14*#Scale#))r
Y=((#Sec.H#/2)-(10*#Scale#))r
FontSize=(22*#Scale#)
InlineSetting=CharacterSpacing | 1 | 0
FontColor=#Lime2#
MeterStyle=String:S
Container=Slider:C
DynamicVariables=1

[Title2]
Meter=String
StringAlign=LeftCenter
Text=installing...
X=(#SCREENAREAWIDTH#/2-(#Sec.W#/2)+(21*#Scale#))
Y=(#SCREENAREAHEIGHT#/2-(#Sec.H#/2)+(68*#Scale#))
FontSize=(12*#Scale#)
InlineSetting=CharacterSpacing | 1 | 0
FontColor=255,255,255,185
MeterStyle=String:S
Container=Slider:C
DynamicVariables=1

[ButtonXText]
Meter=String
FontColor=155,155,155
FontFace=Urbanist
FontSize=(12*#Scale#)
X=((#SCREENAREAWIDTH#/2)+(#Sec.W#/2)-(28*#Scale#))
Y=((#SCREENAREAHEIGHT#/2)-(#Sec.H#/2)+(6*#Scale#))
W=(20*#Scale#)
Text="❌"
Container=Slider:C
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "255,255,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "155,155,155"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!HideFade]
Hidden=1

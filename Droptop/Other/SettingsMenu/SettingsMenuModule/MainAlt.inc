[Rainmeter]

[Variables]
ShutdownType0=[!SetOption RunCommand.Dynamic Parameter "slidetoshutdown.exe" "Droptop\DropdownBar"][!UpdateMeasure RunCommand.Dynamic "Droptop\DropdownBar"][!HideMeterGroup ButtonBG][!CommandMeasure MeasureActionTimer "Execute 2"][!Delay 200][!CommandMeasure RunCommand.Dynamic "Run" "Droptop\DropdownBar"][!DeactivateConfig]
ShutdownType1=[!ActivateConfig "Droptop\Other\PowerMenu" "DialogShutdown.ini"]

ActionTimer.StartAnimation=1

[VersionStyle00]
Text="#SettingsVersion# (Basic)"
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]

[VersionStyle10]
Text="#SettingsVersion#  🤍"
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]

[VersionStyle01]
Text="#SettingsVersion# (Basic/Beta)"
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]

[VersionStyle11]
Text="#SettingsVersion#  🤍 (Beta)"
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/2)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*1)-(#DividerHeight#/2))

[Divider2]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*6)-(#DividerHeight#/2))

[2]
Y=(#DividerSpace#*2)R

[2Icon]
Y=(#DividerSpace#*2)R

[7]
MeterStyle=InfoStyle | VersionStyle#Supporter##DroptopIsBeta#
Y=(#DividerSpace#*2)R

[7Icon]
MeterStyle=IconStyle | VersionStyle#Supporter##DroptopIsBeta#
Y=(#DividerSpace#*2)R
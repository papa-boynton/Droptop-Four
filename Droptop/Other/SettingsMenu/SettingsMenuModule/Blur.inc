[Variables]
MicaAction00=[!WriteKeyValue Variables NotificationText "[#NoMicaTip[#Win10Apps]]" "#SKINSPATH#Droptop\Other\NotificationPopup\NotificationPopup.ini"][!DeactivateConfig "Droptop\Other\NotificationPopup"][!ActivateConfig "Droptop\Other\NotificationPopup" "NotificationPopup.ini"][!Move [#CURRENTCONFIGX] ([#CURRENTCONFIGY]+[[#*CURRENTSECTION*]:Y]) "Droptop\Other\NotificationPopup"]
MicaAction10=[!WriteKeyValue Variables NotificationText "[#NoMicaTip[#Win10Apps]]" "#SKINSPATH#Droptop\Other\NotificationPopup\NotificationPopup.ini"][!DeactivateConfig "Droptop\Other\NotificationPopup"][!ActivateConfig "Droptop\Other\NotificationPopup" "NotificationPopup.ini"][!Move [#CURRENTCONFIGX] ([#CURRENTCONFIGY]+[[#*CURRENTSECTION*]:Y]) "Droptop\Other\NotificationPopup"]
MicaAction01=#OptionChanged.Folders##ToggleAnimation#[!SetVariable UseMicaBlur ([#*UseMicaBlur*]=1?0:1)][!WriteKeyValue Variables UseMicaBlur ([#*UseMicaBlur*]=1?0:1) "#@#Themes\#ThemeNum#Settings.inc"]
MicaAction11=[!WriteKeyValue Variables NotificationText "[#NoMicaTip[#Win10Apps]]" "#SKINSPATH#Droptop\Other\NotificationPopup\NotificationPopup.ini"][!DeactivateConfig "Droptop\Other\NotificationPopup"][!ActivateConfig "Droptop\Other\NotificationPopup" "NotificationPopup.ini"][!Move [#CURRENTCONFIGX] ([#CURRENTCONFIGY]+[[#*CURRENTSECTION*]:Y]) "Droptop\Other\NotificationPopup"]

NoMicaTip1=#Windows11RequiredTip#

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*2)-(#DividerHeight#/2))

[3]
Y=(#DividerSpace#*2)R

[3Icon]
Y=(#DividerSpace#*2)R

[Divider2]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*4)-(#DividerHeight#/2))

[MicaStyle00]
ImageTint=#TopBarFontColor1#,(#DropdownItemOpacity#/3)
FontColor=#TopBarFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[]
MouseLeaveAction=[]
[MicaStyle10]
ImageTint=#TopBarFontColor1#,(#DropdownItemOpacity#/3)
FontColor=#TopBarFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[]
MouseLeaveAction=[]
[MicaStyle11]
ImageTint=#TopBarFontColor1#,(#DropdownItemOpacity#/3)
FontColor=#TopBarFontColor1#,(#DropdownItemOpacity#/3)
MouseOverAction=[]
MouseLeaveAction=[]
[MicaStyle01]

[5]
MeterStyle=InfoStyle | MicaStyle[#Win10Apps][#MicaAvailable]
Y=(#DividerSpace#*2)R
LeftMouseDownAction=[#MicaAction[#Win10Apps][#MicaAvailable]]

[5Icon]
MeterStyle=IconStyle | MicaStyle[#Win10Apps][#MicaAvailable]
Y=(#DividerSpace#*2)R

[Rainmeter]

[Variables]
NumberOfItems=3
NumberOfDividers=1

FolderLoc=C:\Users\Carib\Downloads
ParentConfig=Droptop\Other\Folders\Folder01
Folder02Loc=C:\Users\Carib\Pictures\Screenshots

[MeasurePreviewImage]
Measure=String
String=#PopupModuleIndex2#
IfMatch=(?is).png$|(?is).jpg$|(?is).bmp$|(?is).gif$|(?is).tif$|(?is).webp$|(?is).ico$
IfMatchAction=[!SetVariable NumberOfItems 8][!SetVariable NumberOfDividers 2][!SetOption PreviewImage Y "(#DropdownIconYOffset#-(#DropdownIconYOffset#%1)+#DropdownItemYOffset#+(#DividerSpace#*4)+(#DividerHeight#*2)+(#DropdownItemHeight#*3))"][!SetOption Divider2 Y "(#DropdownIconYOffset#-(#DropdownIconYOffset#%1)+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DividerHeight#*1)+(#DropdownItemHeight#*3))"][!ShowMeterGroup PreviewImage]

[PrepareLyricsSearch]
Measure=String
String=[#PlayerArtist[#PlayerTypeNum]]   [#PlayerTitle[#PlayerTypeNum]] lyrics
Substitute="&":"and",'"':""," -  lyrics":""
DynamicVariables=1

[PrepareWikiSearch]
Measure=String
String=[#PlayerArtist[#PlayerTypeNum]]
Substitute="&":"and",'"':""," ":"+"
DynamicVariables=1

[1]
Text=#PopupMenuFolders1#
LeftMouseDownAction=[!Hide][!HideGroup Folders][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig]["[#FolderLoc]"]

[1Icon]
ImageName=#@#Icons\Fixed\#IconSize#\folder.png

;---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#*1)+(#DividerSpace#*2))r

;---

[2]
Text=#PopupMenuFolders3#
LeftMouseDownAction=[!Hide][!HideGroup Folders][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig][!CommandMeasure mIndex[#PopupModuleIndex]Name "Properties" "#ParentConfig#"]"]
Y=(#DropdownIconYOffset#+((#DropdownItemHeight#*1)+(#DropdownItemHeight#/2)+#DividerHeight#+(#DividerSpace#*2))+#DropdownItemYOffset#)

[2Icon]
ImageName=#@#Icons\Fixed\#IconSize#\type.png
Y=[2:Y]

[3]
Text=#PopupMenuFolders4#
LeftMouseDownAction=[!Hide][!HideGroup Folders][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig][!CommandMeasure mIndex[#PopupModuleIndex]Name "ContextMenu" "#ParentConfig#"]

[3Icon]
ImageName=#@#Icons\Fixed\#IconSize#\list.png

;---

[Divider2]
Meter=Shape
Shape=#DividerShape#
Y=0
; Y=((#DropdownItemHeight#*2)+(#DividerSpace#*2))r
Group=PreviewImage
Hidden=1

;---

[4]
MouseOverAction=[]
MouseLeaveAction=[]

[5]
MouseOverAction=[]
MouseLeaveAction=[]

[6]
MouseOverAction=[]
MouseLeaveAction=[]

[7]
MouseOverAction=[]
MouseLeaveAction=[]

[8]
MouseOverAction=[]
MouseLeaveAction=[]

;dummy
[1Arrow]
Meter=String
Hidden=1

[2Arrow]
Meter=String
Hidden=1

[3Arrow]
Meter=String
Hidden=1

[PreviewImage]
Meter=Image
SolidColor=#DropdownFontColor1#,55
SolidColor2=#DropdownFontColor1#,15
GradientAngle=45
ImageName=#PopupModuleIndex2#
X=(#DropdownMenuCutout#+1)
Y=0
W=(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)-((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1))
H=(#DropdownItemHeight#*5)
LeftMouseDownAction=[!Hide][!HideGroup Folders][!HideGroup Tray][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!DeactivateConfig]["#PopupModuleIndex2#"]
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor "#*DropdownFontColor1*#,85"][!SetOption #CURRENTSECTION# SolidColor2 "#*DropdownFontColor1*#,35"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor "#*DropdownFontColor1*#,55"][!SetOption #CURRENTSECTION# SolidColor2 "#*DropdownFontColor1*#,15"][!UpdateMeter #CURRENTSECTION#][!Redraw]
PreserveAspectRatio=1
DynamicVariables=1
Group=PreviewImage
Hidden=1

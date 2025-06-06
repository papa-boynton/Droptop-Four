[Rainmeter]

[Variables]

; [InfoStyle]
; MouseOverAction=[]
; MouseLeaveAction=[]

[InfoStyle]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
MouseOverAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[!SetVariable ActionTimer.ActionNum 1][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]"""][!SetOption MeasureActionTimer ActionList1 """Wait 400|FolderMouseOver[&mItemSubFolderID].#*FolderMode*#"""][!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!CommandMeasure MeasureActionTimer "Execute 1"][!CommandMeasure MeasureActionTimer "Execute 3"]
MouseLeaveAction=[!SetOption MeasureActionTimer FolderMouseOver[&mItemSubFolderID].1 """[]"""][!UpdateMeasure MeasureActionTimer][!UpdateMeasure mItemSubFolderID][!SetVariable ActionTimer.HLFadeIn 0.2][!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!Redraw]

[1]
MeterStyle=InfoStyle | InfoStyleB

[1Icon]
ImageTint=#TopBarHLColor1#
ImageAlpha=255

[2]
MeterStyle=InfoStyle | InfoStyleB

[2Icon]
ImageTint=#TopBarHLColor2#
ImageAlpha=255

[3]
MeterStyle=InfoStyle | InfoStyleB

[3Icon]
ImageTint=#TopBarFontColor2#
ImageAlpha=255

[4]
MeterStyle=InfoStyle | InfoStyleB

[4Icon]
ImageTint=#TopBarStrokeColor#
ImageAlpha=255

[5]
MeterStyle=InfoStyle | InfoStyleB

[5Icon]
ImageTint=#TopBarHomeIconColor#
ImageAlpha=255

[6]
MeterStyle=InfoStyle | InfoStyleB

[6Icon]
ImageTint=#TopBarBorderTopColor#
ImageAlpha=255

[7]
MeterStyle=InfoStyle | InfoStyleB

[7Icon]
ImageTint=#TopBarBorderBottomColor#
ImageAlpha=255

[8]
MeterStyle=InfoStyle | InfoStyleB

[8Icon]
ImageTint=#TopBarShadowColor#
ImageAlpha=255

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*8)-(#DividerHeight#/2))

[9]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R

[9Icon]
ImageTint=#DropdownItemHL#
ImageAlpha=255
Y=(#DividerSpace#*2)R

[9Arrow]
Y=(#DividerSpace#*2)R

[10]
MeterStyle=InfoStyle | InfoStyleB

[10Icon]
ImageTint=#DropdownItemHL2#
ImageAlpha=255

[11]
MeterStyle=InfoStyle | InfoStyleB

[11Icon]
ImageTint=#DropdownFontColor2#
ImageAlpha=255

[12]
MeterStyle=InfoStyle | InfoStyleB

[12Icon]
ImageTint=#DropdownStrokeColor#
ImageAlpha=255

[13]
MeterStyle=InfoStyle | InfoStyleB

[13Icon]
ImageTint=#DropdownSliderColor1#
ImageAlpha=255

[Divider2]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*13)-(#DividerHeight#/2))

[14]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R

[14Icon]
ImageTint=#BatteryChargingColor#
ImageAlpha=255
Y=(#DividerSpace#*2)R

[14Arrow]
Y=(#DividerSpace#*2)R

[15]
MeterStyle=InfoStyle | InfoStyleB

[15Icon]
ImageTint=#BatteryDyingColor#
ImageAlpha=255

[16]
MeterStyle=InfoStyle | InfoStyleB

[16Icon]
ImageTint=#BatterySaverColor#
ImageAlpha=255

[FolderBlock]
H=((#DropdownItemHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount])+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#))
[Variables]
UsageMonitor.BoxColor0=[#*TopBarFontColor1*]
UsageMonitor.BoxColor1=[#UsageMonitor.BoxColor.[#[#*CURRENTSECTION*]]]

; UsageMonitor.BoxColorB0=[#*TopBarFontColor1*]
; UsageMonitor.BoxColorB1=0,0,0

Usage_Monitor-Cariboudjan.LeftMouseDownAction=[]
Usage_Monitor-Cariboudjan.ButtonAction=[!SetOptionGroup [#*CURRENTSECTION*]Sys LineColor "#*TopBarFontColor1*#,(#*TopBarTitleOpacity*#/1.25)"][!SetOptionGroup [#*CURRENTSECTION*]Sys FillColor "Fill Color #*TopBarFontColor1*#,0 | Stroke Color #*TopBarFontColor1*#,(#*TopBarTitleOpacity*#/2)""][!SetOptionGroup UsageMonitorStringLabels FontColor "#*TopBarFontColor1*#,100"]
Usage_Monitor-Cariboudjan.MouseOverAction=[!SetOptionGroup [#*CURRENTSECTION*]Sys LineColor "#*TopBarFontColor2*#,#*HighlightFontOpacity1*#"][!SetOptionGroup [#*CURRENTSECTION*]Sys FillColor "Fill Color [#UsageMonitor.BoxColor[#***UsageMonitor.BoxColorNum***]],((25*[#*UsageMonitor.BoxColorNum*])+(55*(([#*UsageMonitor.BoxColorNum*]-1)*-1))) | Stroke Color #*TopBarFontColor2*#,#*TopBarTitleOpacity*#"][!SetOptionGroup UsageMonitorStringLabels FontColor "#*TopBarFontColor2*#,100"][!UpdateMeterGroup [#*CURRENTSECTION*]Sys][!Redraw]
Usage_Monitor-Cariboudjan.MouseLeaveAction=[!SetOptionGroup [#*CURRENTSECTION*]Sys LineColor "#*TopBarFontColor1*#,(#*TopBarTitleOpacity*#/1.25)"][!SetOptionGroup [#*CURRENTSECTION*]Sys FillColor "Fill Color [#UsageMonitor.BoxColor[#***UsageMonitor.BoxColorNum***]],(85*[#*UsageMonitor.BoxColorNum*]) | Stroke Color #*TopBarFontColor1*#,(#*TopBarTitleOpacity*#/2)""][!SetOptionGroup UsageMonitorStringLabels FontColor "#*TopBarFontColor1*#,100"][!UpdateMeterGroup [#*CURRENTSECTION*]Sys][!Redraw]

UsageMonitor.CPUGraph=1
UsageMonitor.GPUGraph=2
UsageMonitor.RAMGraph=3
UsageMonitor.HDDGraph=4
UsageMonitor.NETGraph=5

UsageMonitor.CPUShape=1
UsageMonitor.GPUShape=2
UsageMonitor.RAMShape=3
UsageMonitor.HDDShape=4
UsageMonitor.NETShape=5

UsageMonitor.CPUText=1
UsageMonitor.GPUText=2
UsageMonitor.RAMText=3
UsageMonitor.HDDText=4
UsageMonitor.NETText=5

[Usage_Monitor-Cariboudjan.Style]
ImageAlpha=0
W=(((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#))*(5-(#UsageCPUInactive#+#UsageGPUInactive#+#UsageRAMInactive#+#UsageHDDInactive#+#UsageNETInactive#)))+((5*#DroptopSize#)*(4-(#UsageCPUInactive#+#UsageGPUInactive#+#UsageRAMInactive#+#UsageHDDInactive#+#UsageNETInactive#)))+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)+(((#TopHeight#+#TopBarIconHOffset#)*2.5)*((#UsageNETInactive#-1)*-1))+(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)*#UsageNETInactive#)
Y=(#TopHeight#/2)

[Usage_Monitor-Cariboudjan]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
SolidColor=0,0,0,0

; ------------------------------------

[UsageMonitor.ShapeStyle]
Shape=Rectangle 0,0,(((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)),(((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)),(2*#DroptopSize#) | StrokeWidth (1*#DroptopSize#) | Extend FillColor
; FillColor=Fill Color [#UsageMonitor.BoxColor[#UsageMonitor.BoxColorNum]],(85*#UsageMonitor.BoxColorNum#) | Stroke Color [#UsageMonitor.BoxColor[#UsageMonitor.BoxColorNum]],(#TopBarTitleOpacity#/2)
FillColor=Fill Color [#UsageMonitor.BoxColor[#UsageMonitor.BoxColorNum]],(85*#UsageMonitor.BoxColorNum#) | Stroke Color #TopBarFontColor1#,(#TopBarTitleOpacity#/2)
X=(5*#DroptopSize#)R
Y=((#TopHeight#/2)-((#TopHeight#/2)%1)-(((#TopHeight#+#TopBarIconHOffset#)*0.8)/2)-(0.5*#DroptopSize#))
W=((#TopHeight#+#TopBarIconHOffset#)*0.8)
H=((#TopHeight#+#TopBarIconHOffset#)*0.8)
DynamicVariables=1
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton | UpdateMeter1S
Container=SystemTrayContainer

[UsageMonitor.GraphStyle]
X=(0.5*#DroptopSize#)r
Y=((#TopHeight#/2)-((#TopHeight#/2)%1)-(((#TopHeight#+#TopBarIconHOffset#)*0.8)/2))
W=(((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#))
H=((#TopHeight#+#TopBarIconHOffset#)*0.8)
LineWidth=(1.5*#DroptopSize#)
LineColor=#TopBarFontColor1#,(#TopBarTitleOpacity#/1.25)
AntiAlias=1
DynamicVariables=1
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton | UpdateMeter1S
Container=SystemTrayContainer

[UsageMonitor.StringLabelStyle]
StringAlign=CenterCenter
FontColor=#TopBarFontColor1#,100
FontSize=((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#))/2)
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))
MouseOverAction=[]
MouseLeaveAction=[]
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton | UpdateMeter1S | UsageMonitorStringLabels
Container=SystemTrayContainer

; ------------------------------------

[UsageMonitor.CPUTotal]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor Information
Counter=% Processor Utility
Name=_Total
UpdateDivider=-1
Group=UpdateMeasure1S
Disabled=#UsageCPUInactive#

[UsageMonitor.CPUScaled]
Measure=Calc
Formula=(UsageMonitor.CPUTotal>100?100:UsageMonitor.CPUTotal)
MaxValue=100
UpdateDivider=-1
Group=UpdateMeasure1S
Disabled=#UsageCPUInactive#

[UsageMonitor.CPUShape]
Meter=Shape
MeterStyle=UsageMonitor.ShapeStyle
X=(([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1))
Hidden=#UsageCPUInactive#

[UsageMonitor.CPUGraph]
Meter=Line
MeterStyle=UsageMonitor.GraphStyle
MeasureName=UsageMonitor.CPUScaled
Hidden=#UsageCPUInactive#

[UsageMonitor.CPUString]
Meter=String
MeterStyle=InfoStyle | UsageMonitor.StringLabelStyle
Text=C
X=(([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#))/2))
Hidden=(#UsageMonitor.ShowStringLabels#=1?#UsageCPUInactive#:1)

; ------------------------------------

[UsageMonitor.GPUTotal]
Measure=Plugin
Plugin=UsageMonitor
Category=GPU Engine
Counter=Utilization Percentage
UpdateDivider=-1
Group=UpdateMeasure1S
Disabled=#UsageGPUInactive#

[UsageMonitor.GPUScaled]
Measure=Calc
Formula=(UsageMonitor.GPUTotal>100?100:UsageMonitor.GPUTotal)
MaxValue=100
UpdateDivider=-1
Group=UpdateMeasure1S
Disabled=#UsageGPUInactive#

[UsageMonitor.GPUShape]
Meter=Shape
MeterStyle=UsageMonitor.ShapeStyle
X=((([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)+(5*#DroptopSize#))*(1-(#UsageCPUInactive#))))
Hidden=#UsageGPUInactive#

[UsageMonitor.GPUGraph]
Meter=Line
MeterStyle=UsageMonitor.GraphStyle
MeasureName=UsageMonitor.GPUScaled
Hidden=#UsageGPUInactive#

[UsageMonitor.GPUString]
Meter=String
MeterStyle=InfoStyle | UsageMonitor.StringLabelStyle
Text=G
X=((([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)+(5*#DroptopSize#))*(1-(#UsageCPUInactive#)))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#))/2))
Hidden=(#UsageMonitor.ShowStringLabels#=1?#UsageGPUInactive#:1)

; ------------------------------------

[UsageMonitor.RAMTotal]
Measure=PhysicalMemory
UpdateDivider=-1
Group=UpdateMeasure1S
Disabled=#UsageRAMInactive#

[UsageMonitor.RAMShape]
Meter=Shape
MeterStyle=UsageMonitor.ShapeStyle
X=((([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)+(5*#DroptopSize#))*(2-(#UsageCPUInactive#+#UsageGPUInactive#))))
Hidden=#UsageRAMInactive#

[UsageMonitor.RAMGraph]
Meter=Line
MeterStyle=UsageMonitor.GraphStyle
MeasureName=UsageMonitor.RAMTotal
Hidden=#UsageRAMInactive#

[UsageMonitor.RAMString]
Meter=String
MeterStyle=InfoStyle | UsageMonitor.StringLabelStyle
Text=R
X=((([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)+(5*#DroptopSize#))*(2-(#UsageCPUInactive#+#UsageGPUInactive#)))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#))/2))
Hidden=(#UsageMonitor.ShowStringLabels#=1?#UsageRAMInactive#:1)

; ------------------------------------

[UsageMonitor.HDDTotal]
Measure=Plugin
Plugin=UsageMonitor
Category=Process
Counter=IO Data Bytes/sec
MaxValue=1000000000
UpdateDivider=-1
Group=UpdateMeasure1S
UpdateDivider=-1
Disabled=#UsageHDDInactive#

[UsageMonitor.HDDShape]
Meter=Shape
MeterStyle=UsageMonitor.ShapeStyle
X=((([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)+(5*#DroptopSize#))*(3-(#UsageCPUInactive#+#UsageGPUInactive#+#UsageRAMInactive#))))
Hidden=#UsageHDDInactive#

[UsageMonitor.HDDGraph]
Meter=Line
MeterStyle=UsageMonitor.GraphStyle
MeasureName=UsageMonitor.HDDTotal
Hidden=#UsageHDDInactive#

[UsageMonitor.HDDString]
Meter=String
MeterStyle=InfoStyle | UsageMonitor.StringLabelStyle
Text=H
X=((([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)+(5*#DroptopSize#))*(3-(#UsageCPUInactive#+#UsageGPUInactive#+#UsageRAMInactive#)))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#))/2))
Hidden=(#UsageMonitor.ShowStringLabels#=1?#UsageHDDInactive#:1)

; ------------------------------------

[UsageMonitor.NETINCalc]
Measure=NetIn
Interface=Best
AverageSize=5
UpdateDivider=-1
Group=UpdateMeasure1S
Disabled=#UsageNETInactive#

[UsageMonitor.NETOUTCalc]
Measure=NetOut
Interface=Best
AverageSize=5
UpdateDivider=-1
Group=UpdateMeasure1S
Disabled=#UsageNETInactive#

[UsageMonitor.NETTotal]
Measure=NetTotal
MaxValue=1000000000
UpdateDivider=-1
Group=UpdateMeasure1S
Disabled=#UsageNETInactive#

[UsageMonitor.NETShape]
Meter=Shape
MeterStyle=UsageMonitor.ShapeStyle
X=((([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)+(5*#DroptopSize#))*(4-(#UsageCPUInactive#+#UsageGPUInactive#+#UsageRAMInactive#+#UsageHDDInactive#))))
Hidden=#UsageNETInactive#

[UsageMonitor.NETGraph]
Meter=Line
MeterStyle=UsageMonitor.GraphStyle
MeasureName=UsageMonitor.NETTotal
Hidden=#UsageNETInactive#

;---

[UsageMonitor.NETTextStyle]
FontFace=#UniversalFont#
InlinePattern=[#UsageMonitorNetLetter[#UsageMonitor.UseKilobytes]]
InlineSetting=Size | (6*#DroptopSize#)
StringAlign=CenterCenter
FontSize=(7*#DroptopSize#)
FontWeight=800
Padding=0,0,0,0
W=((#TopHeight#+#TopBarIconHOffset#)*2.5)
H=((#TopHeight#+#TopBarIconHOffset#)/2)
AntiAlias=1
MouseOverAction=[]
MouseLeaveAction=[]
Group=CustomApp#Usage_Monitor-Cariboudjan#Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Usage_Monitor-Cariboudjan]] | CustomAppButton | UpdateMeter1S
Container=SystemTrayContainer

[UsageMonitor.NETINText]
Meter=String
MeterStyle=InfoStyle | UsageMonitor.NETTextStyle
Text=↑ [UsageMonitor.NETOUTCalc:/[#UsageMonitor.NetDivisor[#UsageMonitor.UseKilobytes]],1][#UsageMonitorNetLetter[#UsageMonitor.UseKilobytes]]
X=((#TopHeight#+#TopBarIconHOffset#)*1.2)R
Y=((#TopHeight#-((#TopHeight#+#TopBarIconHOffset#)/2))/2)
Hidden=#UsageNETInactive#

[UsageMonitor.NETOUTText]
Meter=String
MeterStyle=InfoStyle | UsageMonitor.NETTextStyle
Text=↓ [UsageMonitor.NETINCalc:/[#UsageMonitor.NetDivisor[#UsageMonitor.UseKilobytes]],1][#UsageMonitorNetLetter[#UsageMonitor.UseKilobytes]]
X=r
Y=R
Hidden=#UsageNETInactive#

[UsageMonitor.NETString]
Meter=String
MeterStyle=InfoStyle | UsageMonitor.StringLabelStyle
Text=N
X=((([CustomApp#Usage_Monitor-Cariboudjan#:X]-[SystemTrayContainer:X])+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#)+(5*#DroptopSize#))*(4-(#UsageCPUInactive#+#UsageGPUInactive#+#UsageRAMInactive#+#UsageHDDInactive#)))+((((#TopHeight#+#TopBarIconHOffset#)*0.8)+(2*#DroptopSize#))/2))
Hidden=(#UsageMonitor.ShowStringLabels#=1?#UsageNETInactive#:1)
[Rainmeter]

[Variables]

DLScale=1000000
ULScale=1000000

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

; [MeasureCPUTemp]
; Measure=Plugin
; Plugin=CoreTemp
; CoreTempType=Temperature
; CoreTempIndex=0
; OnChangeAction=[!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
; UpdateDivider=10

[MeasureCPU]
Measure=CPU

[MeasureCPUCalc]
Measure=Calc
Formula=ROUND(([MeasureCPU:/10,0]/2),0)
DynamicVariables=1
Group=DisableWhenFullscreen

[MeasureRAM]
Measure=PhysicalMemory
Total=0
Group=DisableWhenFullscreen

[MeasurePhysMemTotal]
Measure=PhysicalMemory
Total=1
Group=DisableWhenFullscreen

[MeasureRAMCalc]
Measure=Calc
Formula=ROUND((((([MeasureRAM:/1048576,0]/[MeasurePhysMemTotal:/1048576,0])*100)/10)/2),0)
DynamicVariables=1
Group=DisableWhenFullscreen

[MeasureGPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Index=1
MinValue=0
MaxValue=100
Blacklist=dwm|csrss

[MeasureGPUCalc]
Measure=Calc
Formula=ROUND(([MeasureGPU:/10,0]/2),0)
DynamicVariables=1
Group=DisableWhenFullscreen

[MeasureHDD]
Measure=Plugin
Plugin=UsageMonitor
Alias=IOREAD
Index=0
Group=DisableWhenFullscreen

[MeasureHDDCalc]
Measure=Calc
Formula=Clamp((ROUND(([MeasureHDD:/1048576,0]/1),0)),0,5)
DynamicVariables=1
Group=DisableWhenFullscreen

[MeasureTCPInCalc]
Measure=NetIn
Interface=Best
AverageSize=5

[MeasureTCPOutCalc]
Measure=NetOut
Interface=Best
AverageSize=5

[MeasureUsageChange]
Measure=Calc
Formula=1
OnUpdateAction=[!SetVariable CPUPercent [MeasureCPUCalc] "Droptop\DropdownBar"][!SetVariable RAMPercent [MeasureRAMCalc] "Droptop\DropdownBar"][!SetVariable GPUPercent [MeasureGPUCalc] "Droptop\DropdownBar"][!SetVariable HDDPercent [MeasureHDDCalc] "Droptop\DropdownBar"][!SetVariable TCPINPercent "[MeasureTCPINCalc:/#DLScale#,1]" "Droptop\DropdownBar"][!SetVariable TCPOUTPercent "[MeasureTCPOUTCalc:/#ULScale#,1]" "Droptop\DropdownBar"][!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"]
DynamicVariables=1
Group=DisableWhenFullscreen
[Rainmeter]

[Variables]

[CurrentLanguageID.PSRM]
Measure=Plugin
Plugin=PowershellRM
Line =$ScriptBlock={ 
Line2=Add-Type -AssemblyName System.Windows.Forms
Line3=[System.Windows.Forms.InputLanguage]::CurrentInputLanguage
Line4=}
Line5=$Job=Start-Job -ScriptBlock $ScriptBlock
Line6=Wait-Job -Job $Job
Line7=$CurrentLanguage=Receive-Job -Job $Job
Line8=Remove-Job -Job $Job
Line9=return $CurrentLanguage.Culture.Name
OnUpdateAction=[!SetVariable CurrentLanguageID "[CurrentLanguageID.PSRM]"][!SetVariable CurrentLanguageID "[#CurrentLanguageID]" "Droptop\DropdownBar"][!WriteKeyValue Variables CurrentLanguageID "[#CurrentLanguageID]" "#SKINSPATH#Droptop Community Apps\Apps\Functions-Cariboudjan\Variables\Variables.inc"][!UpdateMeter Functions.LanguageButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
UpdateDivider=15
Disabled=((#ShowLanguageButton#-1)*-1)
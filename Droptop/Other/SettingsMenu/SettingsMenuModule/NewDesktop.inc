[Rainmeter]
OnCloseAction=[!EnableMeasure MeasureSetChanges "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureSetChanges "Droptop\Other\BackgroundProcesses"]

[Variables]

AddDesktop=["#@#Scripts\DroptopAHK.#AHKType#" "NewDesktop"]

RemoveDesktop=["#@#Scripts\DroptopAHK.#AHKType#" "CloseDesktop"]

[Divider1]
Y=(#DropdownIconYOffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*2)-(#DividerHeight#/2))

[3]
Y=(#DividerSpace#*2)R

[3Icon]
Y=(#DividerSpace#*2)R

[4]

[4Icon]
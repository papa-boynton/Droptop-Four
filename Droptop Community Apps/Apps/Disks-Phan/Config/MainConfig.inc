;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=2

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[measureTotalType1]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_1#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box1][!UpdateMeasureGroup Box1][!SetOptionGroup BoxText1 Y ""][!ShowMeterGroup Box1][!UpdateMeterGroup Box1][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box1][!SetOptionGroup BoxText1 Y "0"][!HideMeterGroup Box1][!UpdateMeterGroup Box1][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk1]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_1#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box1

[measureUsedDisk1]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_1#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box1

;----------------------------------------------------

[measureTotalType2]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_2#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box2][!UpdateMeasureGroup Box2][!SetOptionGroup BoxText2 Y ""][!ShowMeterGroup Box2][!UpdateMeterGroup Box2][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box2][!SetOptionGroup BoxText2 Y "0"][!HideMeterGroup Box2][!UpdateMeterGroup Box2][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk2]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_2#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box2

[measureUsedDisk2]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_2#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box2

;----------------------------------------------------

[measureTotalType3]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_3#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box3][!UpdateMeasureGroup Box3][!SetOptionGroup BoxText3 Y ""][!ShowMeterGroup Box3][!UpdateMeterGroup Box3][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box3][!SetOptionGroup BoxText3 Y "0"][!HideMeterGroup Box3][!UpdateMeterGroup Box3][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk3]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_3#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box3

[measureUsedDisk3]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_3#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box3

;----------------------------------------------------

[measureTotalType4]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_4#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box4][!UpdateMeasureGroup Box4][!SetOptionGroup BoxText4 Y ""][!ShowMeterGroup Box4][!UpdateMeterGroup Box4][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box4][!SetOptionGroup BoxText4 Y "0"][!HideMeterGroup Box4][!UpdateMeterGroup Box4][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk4]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_4#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box4

[measureUsedDisk4]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_4#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box4

;----------------------------------------------------

[measureTotalType5]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_5#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box5][!UpdateMeasureGroup Box5][!SetOptionGroup BoxText5 Y ""][!ShowMeterGroup Box5][!UpdateMeterGroup Box5][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box5][!SetOptionGroup BoxText5 Y "0"][!HideMeterGroup Box5][!UpdateMeterGroup Box5][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk5]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_5#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box5

[measureUsedDisk5]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_5#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box5

;----------------------------------------------------

[measureTotalType6]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_6#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box6][!UpdateMeasureGroup Box6][!SetOptionGroup BoxText6 Y ""][!ShowMeterGroup Box6][!UpdateMeterGroup Box6][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box6][!SetOptionGroup BoxText6 Y "0"][!HideMeterGroup Box6][!UpdateMeterGroup Box6][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk6]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_6#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box6

[measureUsedDisk6]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_6#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box6

;----------------------------------------------------

[measureTotalType7]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_7#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box7][!UpdateMeasureGroup Box7][!SetOptionGroup BoxText7 Y ""][!ShowMeterGroup Box7][!UpdateMeterGroup Box7][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box7][!SetOptionGroup BoxText7 Y "0"][!HideMeterGroup Box7][!UpdateMeterGroup Box7][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk7]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_7#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box7

[measureUsedDisk7]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_7#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box7

;----------------------------------------------------

[measureTotalType8]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_8#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box8][!UpdateMeasureGroup Box8][!SetOptionGroup BoxText8 Y ""][!ShowMeterGroup Box8][!UpdateMeterGroup Box8][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box8][!SetOptionGroup BoxText8 Y "0"][!HideMeterGroup Box8][!UpdateMeterGroup Box8][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk8]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_8#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box8

[measureUsedDisk8]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_8#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box8

;----------------------------------------------------

[measureTotalType9]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_9#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box9][!UpdateMeasureGroup Box9][!SetOptionGroup BoxText9 Y ""][!ShowMeterGroup Box9][!UpdateMeterGroup Box9][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box9][!SetOptionGroup BoxText9 Y "0"][!HideMeterGroup Box9][!UpdateMeterGroup Box9][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk9]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_9#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box9

[measureUsedDisk9]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_9#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box9

;----------------------------------------------------

[measureTotalType10]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_10#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box10][!UpdateMeasureGroup Box10][!SetOptionGroup BoxText10 Y ""][!ShowMeterGroup Box10][!UpdateMeterGroup Box10][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box10][!SetOptionGroup BoxText10 Y "0"][!HideMeterGroup Box10][!UpdateMeterGroup Box10][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk10]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_10#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box10

[measureUsedDisk10]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_10#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box10

;----------------------------------------------------

[measureTotalType11]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_11#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box11][!UpdateMeasureGroup Box11][!SetOptionGroup BoxText11 Y ""][!ShowMeterGroup Box11][!UpdateMeterGroup Box11][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box11][!SetOptionGroup BoxText11 Y "0"][!HideMeterGroup Box11][!UpdateMeterGroup Box11][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk11]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_11#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box11

[measureUsedDisk11]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_11#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box11

;----------------------------------------------------

[measureTotalType12]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_12#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box12][!UpdateMeasureGroup Box12][!SetOptionGroup BoxText12 Y ""][!ShowMeterGroup Box12][!UpdateMeterGroup Box12][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box12][!SetOptionGroup BoxText12 Y "0"][!HideMeterGroup Box12][!UpdateMeterGroup Box12][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk12]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_12#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box12

[measureUsedDisk12]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_12#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box12

;----------------------------------------------------

[measureTotalType13]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_13#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box13][!UpdateMeasureGroup Box13][!SetOptionGroup BoxText13 Y ""][!ShowMeterGroup Box13][!UpdateMeterGroup Box13][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box13][!SetOptionGroup BoxText13 Y "0"][!HideMeterGroup Box13][!UpdateMeterGroup Box13][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk13]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_13#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box13

[measureUsedDisk13]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_13#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box13

;----------------------------------------------------

[measureTotalType14]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_14#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box14][!UpdateMeasureGroup Box14][!SetOptionGroup BoxText14 Y ""][!ShowMeterGroup Box14][!UpdateMeterGroup Box14][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box14][!SetOptionGroup BoxText14 Y "0"][!HideMeterGroup Box14][!UpdateMeterGroup Box14][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk14]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_14#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box14

[measureUsedDisk14]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_14#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box14

;----------------------------------------------------

[measureTotalType15]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_15#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box15][!UpdateMeasureGroup Box15][!SetOptionGroup BoxText15 Y ""][!ShowMeterGroup Box15][!UpdateMeterGroup Box15][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box15][!SetOptionGroup BoxText15 Y "0"][!HideMeterGroup Box15][!UpdateMeterGroup Box15][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk15]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_15#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box15

[measureUsedDisk15]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_15#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box15

;----------------------------------------------------

[measureTotalType16]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_16#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box16][!UpdateMeasureGroup Box16][!SetOptionGroup BoxText16 Y ""][!ShowMeterGroup Box16][!UpdateMeterGroup Box16][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box16][!SetOptionGroup BoxText16 Y "0"][!HideMeterGroup Box16][!UpdateMeterGroup Box16][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk16]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_16#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box16

[measureUsedDisk16]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_16#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box16

;----------------------------------------------------

[measureTotalType17]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_17#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box17][!UpdateMeasureGroup Box17][!SetOptionGroup BoxText17 Y ""][!ShowMeterGroup Box17][!UpdateMeterGroup Box17][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box17][!SetOptionGroup BoxText17 Y "0"][!HideMeterGroup Box17][!UpdateMeterGroup Box17][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk17]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_17#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box17

[measureUsedDisk17]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_17#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box17

;----------------------------------------------------

[measureTotalType18]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_18#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box18][!UpdateMeasureGroup Box18][!SetOptionGroup BoxText18 Y ""][!ShowMeterGroup Box18][!UpdateMeterGroup Box18][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box18][!SetOptionGroup BoxText18 Y "0"][!HideMeterGroup Box18][!UpdateMeterGroup Box18][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk18]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_18#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box18

[measureUsedDisk18]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_18#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box18

;----------------------------------------------------

[measureTotalType19]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_19#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box19][!UpdateMeasureGroup Box19][!SetOptionGroup BoxText19 Y ""][!ShowMeterGroup Box19][!UpdateMeterGroup Box19][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box19][!SetOptionGroup BoxText19 Y "0"][!HideMeterGroup Box19][!UpdateMeterGroup Box19][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk19]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_19#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box19

[measureUsedDisk19]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_19#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box19

;----------------------------------------------------

[measureTotalType20]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_20#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box20][!UpdateMeasureGroup Box20][!SetOptionGroup BoxText20 Y ""][!ShowMeterGroup Box20][!UpdateMeterGroup Box20][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box20][!SetOptionGroup BoxText20 Y "0"][!HideMeterGroup Box20][!UpdateMeterGroup Box20][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk20]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_20#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box20

[measureUsedDisk20]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_20#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box20

;----------------------------------------------------

[measureTotalType21]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_21#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box21][!UpdateMeasureGroup Box21][!SetOptionGroup BoxText21 Y ""][!ShowMeterGroup Box21][!UpdateMeterGroup Box21][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box21][!SetOptionGroup BoxText21 Y "0"][!HideMeterGroup Box21][!UpdateMeterGroup Box21][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk21]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_21#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box21

[measureUsedDisk21]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_21#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box21

;----------------------------------------------------

[measureTotalType22]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_22#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box22][!UpdateMeasureGroup Box22][!SetOptionGroup BoxText22 Y ""][!ShowMeterGroup Box22][!UpdateMeterGroup Box22][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box22][!SetOptionGroup BoxText22 Y "0"][!HideMeterGroup Box22][!UpdateMeterGroup Box22][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk22]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_22#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box22

[measureUsedDisk22]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_22#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box22

;----------------------------------------------------

[measureTotalType23]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_23#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box23][!UpdateMeasureGroup Box23][!SetOptionGroup BoxText23 Y ""][!ShowMeterGroup Box23][!UpdateMeterGroup Box23][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box23][!SetOptionGroup BoxText23 Y "0"][!HideMeterGroup Box23][!UpdateMeterGroup Box23][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk23]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_23#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box23

[measureUsedDisk23]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_23#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box23

;----------------------------------------------------

[measureTotalType24]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_24#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box24][!UpdateMeasureGroup Box24][!SetOptionGroup BoxText24 Y ""][!ShowMeterGroup Box24][!UpdateMeterGroup Box24][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box24][!SetOptionGroup BoxText24 Y "0"][!HideMeterGroup Box24][!UpdateMeterGroup Box24][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk24]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_24#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box24

[measureUsedDisk24]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_24#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box24

;----------------------------------------------------

[measureTotalType25]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_25#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box25][!UpdateMeasureGroup Box25][!SetOptionGroup BoxText25 Y ""][!ShowMeterGroup Box25][!UpdateMeterGroup Box25][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box25][!SetOptionGroup BoxText25 Y "0"][!HideMeterGroup Box25][!UpdateMeterGroup Box25][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk25]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_25#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box25

[measureUsedDisk25]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_25#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box25

[measureTotalType26]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_26#:
Label=1
Type=1
IfMatch=Removable|Fixed
IfMatchAction=[!EnableMeasureGroup Box26][!UpdateMeasureGroup Box26][!SetOptionGroup BoxText26 Y ""][!ShowMeterGroup Box26][!UpdateMeterGroup Box26][!Redraw]
IfNotMatchAction=[!DisableMeasureGroup Box26][!SetOptionGroup BoxText26 Y "0"][!HideMeterGroup Box26][!UpdateMeterGroup Box26][!Redraw]
IgnoreRemovable=0
DynamicVariables=1

[measureTotalDisk26]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_26#:
Total=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box26

[measureUsedDisk26]
Measure=FreeDiskSpace
Drive=#Disks-Phan___Disk_26#:
InvertMeasure=1
UpdateDivider=5
IgnoreRemovable=0
Disabled=1
Group=Box26

;----------------------------------------------------

[GeneralSettings]

[InfoStyle]

[IconStyle]

[ArrowStyleB]

[TextStyle]

[BoxStyle]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),((#BoxHeight#*#DroptopSize#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),((#BoxHeight#*#DroptopSize#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Extend HLColor
HLColor=Fill Color #DropdownItemHL#,0 | StrokeWidth 0
LeftMouseUpAction=["[#Disks-Phan___Disk_[##CURRENTSECTION#]]:\"]
Y=R
MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable MeasureLoopValue [##CURRENTSECTION#]][!UpdateMeasureGroup MeasureDisks][!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #*DropdownStrokeColor*#,(#*DropdownStrokeOpacity*#*#*ActionTimer.HLFadeIn*#)"""][!SetOptionGroup BoxText[##CURRENTSECTION#] FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity1*#"][!SetOption #CURRENTSECTION#Bar FillColor2 "Fill Color #*DropdownFontColor2*#,255"][!SetOption #CURRENTSECTION#Bar FillColor1 "Fill Color #*DropdownFontColor2*#,55"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 2"][!SetVariable MeasureLoopValue [##CURRENTSECTION#]][!UpdateMeasureGroup MeasureDisks][!SetOption #CURRENTSECTION# HLColor ""][!SetOptionGroup BoxText[##CURRENTSECTION#] FontColor ""][!SetOption #CURRENTSECTION#Bar FillColor2 ""][!SetOption #CURRENTSECTION#Bar FillColor1 ""][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
Group=Box | Box[##CURRENTSECTION#] | Animation.HL
DynamicVariables=1
Hidden=1


; MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#*ActionTimer.HLFadeIn*#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #*DropdownStrokeColor*#,(#*DropdownStrokeOpacity*#*#*ActionTimer.HLFadeIn*#)"""][!SetOption AlwaysShowText FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeterGroup AlwaysShow][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
; MouseLeaveAction=[!CommandMeasure MeasureActionTimer "stop 2"][!SetOption #CURRENTSECTION# HLColor """Fill Color #*DropdownItemHL*#,0 | StrokeWidth 0"""][!SetOption AlwaysShowText FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeterGroup AlwaysShow][!Redraw]

[BoxTextStyle]
StringCase=UPPER
Text=[#Disks-Phan___Disk_[##CURRENTSECTION#]]:
X=([Box[##CURRENTSECTION#]:X]+(16*#DroptopSize#))
Y=([Box[##CURRENTSECTION#]:Y]+(16*#DroptopSize#))
W=(45*#DroptopSize#)
Group=Box | Box[##CURRENTSECTION#] | BoxText | BoxText[##CURRENTSECTION#]
DynamicVariables=1
Hidden=1

[BoxTextStyle2]
StringAlign=Right
MeasureName=measureUsedDisk[##CURRENTSECTION#]
MeasureName2=measureTotalDisk[##CURRENTSECTION#]
Text=%1B/%2B
NumOfDecimals=1
AutoScale=1
X=(#DropdownMenuWidth#-(16*#DroptopSize#))
W=(180*#DroptopSize#)
Y=([Box[##CURRENTSECTION#]:Y]+(16*#DroptopSize#))
Group=Box | Box[##CURRENTSECTION#] | BoxText | BoxText[##CURRENTSECTION#]
DynamicVariables=1
Hidden=1

[BoxBarStyle]
Shape=Rectangle 0,0,(#DropdownMenuWidth#-(32*#DroptopSize#)),(5*#DroptopSize#),(2.5*#DroptopSize#) | StrokeWidth 0 | Extend FillColor1
Shape2=Rectangle 0,0,((#DropdownMenuWidth#-(32*#DroptopSize#))*([&measureUsedDisk[##CURRENTSECTION#]]/[&measureTotalDisk[##CURRENTSECTION#]])),(5*#DroptopSize#),(2.5*#DroptopSize#) | StrokeWidth 0 | Extend FillColor2
FillColor1=Fill Color #DropdownFontColor1#,55
FillColor2=Fill Color #DropdownItemHL#,255
X=([Box[##CURRENTSECTION#]:X]+(16*#DroptopSize#))
Y=([Box[##CURRENTSECTION#]:Y]+(35*#DroptopSize#))
H=(5*#DroptopSize#)
Group=Box | Box[##CURRENTSECTION#] | BoxText[##CURRENTSECTION#]
DynamicVariables=1
UpdateDivider=-1
Hidden=1

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle

[2Icon]
MeterStyle=IconStyle

[3Icon]
MeterStyle=IconStyle

[4Icon]
MeterStyle=IconStyle

[5Icon]
MeterStyle=IconStyle

[6Icon]
MeterStyle=IconStyle

[7Icon]
MeterStyle=IconStyle

[8Icon]
MeterStyle=IconStyle

[9Icon]
MeterStyle=IconStyle

[10Icon]
MeterStyle=IconStyle

;-----------------------------------------

[1Arrow]
MeterStyle=ArrowStyleB

[2Arrow]
MeterStyle=ArrowStyleB

[3Arrow]
MeterStyle=ArrowStyleB

[4Arrow]
MeterStyle=ArrowStyleB

[5Arrow]
MeterStyle=ArrowStyleB

[6Arrow]
MeterStyle=ArrowStyleB

[7Arrow]
MeterStyle=ArrowStyleB

[8Arrow]
MeterStyle=ArrowStyleB

[9Arrow]
MeterStyle=ArrowStyleB

[10Arrow]
MeterStyle=ArrowStyleB

;----------------------------------------------------

[Box1]
MeterStyle=BoxStyle | GeneralSettings
Y=[Background:YH]

[Box2]
MeterStyle=BoxStyle | GeneralSettings

[Box3]
MeterStyle=BoxStyle | GeneralSettings

[Box4]
MeterStyle=BoxStyle | GeneralSettings

[Box5]
MeterStyle=BoxStyle | GeneralSettings

[Box6]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box7]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box8]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box9]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box10]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box11]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box12]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box13]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box14]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box15]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box16]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box17]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box18]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box19]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box20]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box21]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box22]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box23]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box24]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box25]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

[Box26]
Meter=Shape
MeterStyle=BoxStyle | GeneralSettings

;----------------------------------------------------

[Box1Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box2Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box3Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box4Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box5Text]
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box6Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box7Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box8Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box9Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box11Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box12Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box13Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box14Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box15Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box16Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box17Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box18Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box19Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box20Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box21Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box22Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box23Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box24Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box25Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

[Box26Text]
Meter=String
MeterStyle=TextStyle | BoxTextStyle | GeneralSettings

;----------------------------------------------------

[Box1Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box2Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box3Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box4Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box5Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box6Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box7Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box8Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box9Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box10Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box11Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box12Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box13Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box14Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box15Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box16Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box17Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box18Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box19Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box20Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box21Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box22Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box23Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box24Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box25Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

[Box26Text2]
Meter=String
MeterStyle=TextStyle | BoxTextStyle2 | GeneralSettings

;----------------------------------------------------

[Box1Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box2Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box3Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box4Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box5Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box6Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box7Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box8Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box9Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box10Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box11Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box12Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box13Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box14Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box15Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box16Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box17Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box18Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box19Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box20Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box21Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box22Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box23Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box24Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box25Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

[Box26Bar]
Meter=Shape
MeterStyle=BoxBarStyle | GeneralSettings

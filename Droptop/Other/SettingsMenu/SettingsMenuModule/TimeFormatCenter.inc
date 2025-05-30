[Rainmeter]

[Variables]

;3:00 PM / 15:00
[MeasureTime]
Measure=Time
Format="%[#TimeLeadingZero[#TimeLeadingZeroNum]][#TimeFormatA[#Time24HourNum]]:%M [#TimeFormatB[#Time24HourNum]]"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;January *17*
[MeasureDayNum]
Measure=Time
Format="%[#TimeLeadingZero[#TimeLeadingZeroNum]]d"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;*Sun* 17
[MeasureDayName1]
Measure=Time
Format="%a"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;*Sunday* 17
[MeasureDayName2]
Measure=Time
Format="%A"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;17 *1* 2021
[MeasureMonthNum]
Measure=Time
Format="%[#TimeLeadingZero[#TimeLeadingZeroNum]]m"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;*Jan* 17 2021
[MeasureMonthName1]
Measure=Time
Format="%b"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;*January* 17 2021
[MeasureMonthName2]
Measure=Time
Format="%B"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;January 17 *2021*
[MeasureYear1]
Measure=Time
Format="%y"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;January 17 *2021*
[MeasureYear2]
Measure=Time
Format="%Y"
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;17/01/21
[MeasureDate]
Measure=Time
Format="%d/%m/%y"
; FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;17/01/21
[MeasureDateInt]
Measure=Time
Format="%Y-%m-%d"
; FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

;01/17/21
[MeasureDateUS]
Measure=Time
Format="%D"
; FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1
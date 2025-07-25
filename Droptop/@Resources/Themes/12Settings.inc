[MeasureRandom1]
Measure=Calc
Formula=Random
UpdateRandom=0
LowBound=125
HighBound=205
UpdateDivider=-1

[MeasureRandom2]
Measure=Calc
Formula=Random
UpdateRandom=0
LowBound=125
HighBound=205
UpdateDivider=-1

[MeasureRandom3]
Measure=Calc
Formula=Random
UpdateRandom=0
LowBound=125
HighBound=205
UpdateDivider=-1

[Variables]

Color1=[MeasureRandom1]
Color2=[MeasureRandom2]
Color3=[MeasureRandom3]

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=0
TopBarHLSkew=0
TopBarSections=0

UseMicaBlur=0

DropdownMenuBlur=0
DropdownArrowStyle=1

CheckmarkStyle=1
ToggleStyle=1

;---

IconStyle=1

NewDesktopStyle=1
TimeStyle=[#*IconStyle*]
MailStyle=[#*IconStyle*]
AlarmStyle=[#*IconStyle*]
VolumeStyle=[#*IconStyle*]
WeatherStyle=[#*IconStyle*]
WifiStyle=[#*IconStyle*]
BatteryStyle=[#*IconStyle*]
BatteryMaskStyle=[#*IconStyle*]
DownloadsStyle=[#*IconStyle*]
RecentStyle=[#*IconStyle*]
CopyStyle=[#*IconStyle*]
AppDrawerStyle=[#*IconStyle*]

DropdownSliderStyle=3

;-------------------------
; Colors

SetColorByWallpaperOFF=0

TopBarBGColor1=255,255,255
TopBarBGColor2=255,255,255
TopBarBGColor3=255,255,255
TopBarFontColor1=30,30,30
TopBarFontColor2=30,30,30
TopBarHLColor1=181,185,174
TopBarHLColor2=181,185,174
TopBarHomeIconColor=30,30,30
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=0,0,0
TopBarShadowColor=0,0,0
TopBarGradientColor1=11,11,15
TopBarGradientColor2=211,211,215

SolidOverlayGradientColor1=255,255,255,0
SolidOverlayGradientColor2=255,255,255,0

DropdownBGColor1=255,255,255
DropdownFontColor1=30,30,30
DropdownFontColor2=30,30,30
DropdownItemHL=181,185,174
DropdownItemHL2=181,185,174
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=0,0,0
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=200
TopBarGradientOpacity1=128
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=0
TopBarSolidColorOpacity=15

DropdownMenuOpacity1=255
DropdownItemOpacity=255
DropdownStrokeOpacity=30

HighlightShapeOpacity=95
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=1
HighlightShapeOpacityDivisor2B=4
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=60
DropdownHLOpacity=60

TopBarHLStrokeOpacity=155
DropdownHLStrokeOpacity=155

TopBarBorderTopOpacity=(105*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(52*(#TopBarOpacity1#/255))

TopBarHLShadow=0
DropdownHLShadow=0

TopBarShadowOpacity=155

BlurTypeNum=0

ShowTopBarBlurBorder=0
ShowDropdownBlurBorder=0

;---

TopBarShadow=0
DropdownMenuShadow=0

TopBarFontShadow=1
TopBarFontShadowBlur=2.5

DropdownFontShadow=0
DropdownFontShadowBlur=2.5

;-------------------------
; Font options

FontYposOffset=0
FontSizeOffset=0
IconSizeOffset=0
FontSpaceOffset=0
TitleSpaOffset=0

FontName0=Product Sans

TopBarFontName=#FontName0#

TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,185
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255

;---

FontWeight=400
ApplicationFontWeight=600

TopBarTitleCaseNum=0
DegreeSymbol=°
PercentSymbol=%
MusicSymbol=#NotificationPlaying#
MailSymbol=#NotificationMail#

TopBarCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]
DropdownCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]

TopBarAntiAlias=1
DropdownAntiAlias=#TopBarAntiAlias#

;-------------------------
; Shapes & backgrounds

TopBarCornerMinMax0=0
TopBarCornerMinMax1=(#TopHeight#/4)
DropdownCornerMinMax0=2
DropdownCornerMinMax1=(#DropdownItemHeight#/2)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=[#TopBarCornerMinMax[#TopBarRoundCorners]]
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(#TopHeight#/2.5)
DropdownHighlightCorner=(#DropdownItemHeight#/2.5)

;-------------------------

BLANK=60

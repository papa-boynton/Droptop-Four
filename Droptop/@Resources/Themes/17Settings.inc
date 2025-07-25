[Variables]

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=0
TopBarHLSkew=0
TopBarSections=1

UseMicaBlur=0

DropdownMenuBlur=1
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

TopBarBGColor1=240,235,249
TopBarBGColor2=240,235,249
TopBarBGColor3=240,235,249
TopBarFontColor1=28,22,36
TopBarFontColor2=240,235,249
TopBarHLColor1=28,22,36
TopBarHLColor2=28,22,36
TopBarHomeIconColor=0,0,0
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=51,35,57
TopBarShadowColor=0,0,0
TopBarGradientColor1=11,11,15
TopBarGradientColor2=211,211,215

SolidOverlayGradientColor1=255,255,255,0
SolidOverlayGradientColor2=255,255,255,0

DropdownBGColor1=240,235,249
DropdownFontColor1=28,22,36
DropdownFontColor2=240,235,249
DropdownItemHL=28,22,36
DropdownItemHL2=28,22,36
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=51,35,57
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=128
TopBarGradientOpacity1=76
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=55
TopBarSolidColorOpacity=15

DropdownMenuOpacity1=200
DropdownItemOpacity=255
DropdownStrokeOpacity=55

HighlightShapeOpacity=225
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=3
HighlightFontOpacity1=185
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=140
DropdownHLOpacity=165

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(166*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(78*(#TopBarOpacity1#/255))

TopBarHLShadow=1
DropdownHLShadow=1

TopBarShadowOpacity=155

BlurTypeNum=1

ShowTopBarBlurBorder=0
ShowDropdownBlurBorder=0

;---

TopBarShadow=0
DropdownMenuShadow=0

TopBarFontShadow=1
TopBarFontShadowBlur=2.5

DropdownFontShadow=1
DropdownFontShadowBlur=2.5

;-------------------------
; Font options

FontYposOffset=0
FontSizeOffset=0
IconSizeOffset=0
FontSpaceOffset=0
TitleSpaOffset=0

FontName0=Anuphan

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
TopBarCornerMinMax1=3
DropdownCornerMinMax0=1
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=(0*#DroptopSize#)
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(#TopBarCorner#*0.83)
DropdownHighlightCorner=(#DropdownBGCorner#*0.83)

;-------------------------

BLANK=140

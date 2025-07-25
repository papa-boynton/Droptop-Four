[Variables]

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=0
TopBarHLSkew=0
TopBarSections=0

UseMicaBlur=0

DropdownMenuBlur=1
DropdownArrowStyle=1

CheckmarkStyle=1
ToggleStyle=1

;---

IconStyle=2

NewDesktopStyle=[#*IconStyle*]
TimeStyle=[#*IconStyle*]
MailStyle=[#*IconStyle*]
AlarmStyle=[#*IconStyle*]
VolumeStyle=[#*IconStyle*]
WeatherStyle=[#*IconStyle*]
WifiStyle=2
BatteryStyle=[#*IconStyle*]
BatteryMaskStyle=[#*IconStyle*]
DownloadsStyle=[#*IconStyle*]
RecentStyle=[#*IconStyle*]
CopyStyle=[#*IconStyle*]
AppDrawerStyle=3

DropdownSliderStyle=1

;-------------------------
; Colors

SetColorByWallpaperOFF=0

TopBarBGColor1=38,39,40
TopBarBGColor2=38,39,40
TopBarBGColor3=38,39,40
TopBarFontColor1=255,255,255
TopBarFontColor2=255,255,255
TopBarHLColor1=58,59,61
TopBarHLColor2=58,59,61
TopBarHomeIconColor=232,238,245
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=31,41,54
TopBarShadowColor=0,0,0
TopBarGradientColor1=0,0,0
TopBarGradientColor2=0,0,0

SolidOverlayGradientColor1=0,0,0,0
SolidOverlayGradientColor2=0,0,0,0

DropdownBGColor1=255,255,255
DropdownFontColor1=15,15,15
DropdownFontColor2=15,15,15
DropdownItemHL=38,39,40
DropdownItemHL2=38,39,40
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=0,0,0,60,60
DropdownSliderColor1=255,255,255
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=0
TopBarGradientOpacity1=100
TopBarGradientOpacity2=0
TopBarTitleOpacity=245
TopBarStrokeOpacity=0
TopBarSolidColorOpacity=0

DropdownMenuOpacity1=130
DropdownItemOpacity=245
DropdownStrokeOpacity=60

HighlightShapeOpacity=255
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=1
HighlightShapeOpacityDivisor2B=2
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=145
DropdownHLOpacity=45

TopBarHLStrokeOpacity=0
DropdownHLStrokeOpacity=0

TopBarBorderTopOpacity=(92*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(43*(#TopBarOpacity1#/255))

TopBarHLShadow=0
DropdownHLShadow=0

TopBarShadowOpacity=155

BlurTypeNum=1

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
FontSpaceOffset=0.1
TitleSpaOffset=0

FontName0=SF Pro Rounded

TopBarFontName=#FontName0#

; TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,185
TopBarTextShadow1000=Shadow | 0 | (0.5*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255

;---

FontWeight=400
ApplicationFontWeight=700

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
TopBarCornerMinMax1=6
DropdownCornerMinMax0=0
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=0
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(12*#DroptopSize#)
DropdownHighlightCorner=(14*#DroptopSize#)

;-------------------------

BLANK=245
NoOpacity=255

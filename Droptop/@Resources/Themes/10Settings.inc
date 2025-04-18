[Variables]

; --------------------------
; Menu options

TopBarBlur=1
TopBarGradient=1
TopBarHLSkew=0
TopBarSections=0

UseMicaBlur=0

DropdownMenuBlur=1
DropdownArrowStyle=4

CheckmarkStyle=1
ToggleStyle=1

;---

IconStyle=2

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

DropdownSliderStyle=2

;-------------------------
; Colors

SetColorByWallpaperOFF=1

TopBarBGColor1=255,255,255
TopBarBGColor2=255,255,255
TopBarBGColor3=255,255,255
TopBarFontColor1=0,0,0
TopBarFontColor2=255,255,255
TopBarHLColor1=65,109,217
TopBarHLColor2=[#*TopBarHLColor1*]
TopBarHomeIconColor=0,0,0
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=23,63,41
TopBarShadowColor=0,0,0

DropdownBGColor1=255,255,255
DropdownFontColor1=0,0,0
DropdownFontColor2=255,255,255
DropdownItemHL=65,109,217
DropdownItemHL2=[#*DropdownItemHL*]
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

TopBarOpacity1=150
TopBarGradientOpacity1=115
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=0

DropdownMenuOpacity1=150
DropdownItemOpacity=255
DropdownStrokeOpacity=35

HighlightShapeOpacity=255
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=4
HighlightShapeOpacityDivisor2B=4
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=[#*HighlightShapeOpacity*]
DropdownHLOpacity=[#*HighlightShapeOpacity*]

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(55*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(86*(#TopBarOpacity1#/255))

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

DropdownFontShadow=0
DropdownFontShadowBlur=2.5

;-------------------------
; Font options

FontYposOffset=0
FontSizeOffset=0
IconSizeOffset=0
FontSpaceOffset=0
TitleSpaOffset=0

FontName0=SF Pro Display

TopBarFontName=#FontName0#

TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,185
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255

;---

FontWeight=600
ApplicationFontWeight=800

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
DropdownCornerMinMax0=1
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=0
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(0*#DroptopSize#)
DropdownHighlightCorner=(0*#DroptopSize#)

;-------------------------

BLANK=150

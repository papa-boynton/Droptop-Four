[Variables]

CustomThemeTopBarHeight=40

; --------------------------

CustomThemeName=Dracula84
CustomThemeAuthor=Mojas84
CustomThemeCompileDate=24.0707

CustomThemeMeasures=0

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=0
TopBarHomeShape=0
TopBarHLSkew=0
TopBarSections=1

DropdownMenuBlur=0
DropdownArrowStyle=1

CheckmarkStyle=1
ToggleStyle=1

TopBarDividerW=20
TopBarDividerH=3

;---

IconStyle=2

NewDesktopStyle=#IconStyle#
ActionStyle=#IconStyle#
SearchStyle=#IconStyle#
TimeStyle=#IconStyle#
MailStyle=#IconStyle#
AlarmStyle=#IconStyle#
VolumeStyle=#IconStyle#
WeatherStyle=#IconStyle#
WifiStyle=#IconStyle#
BatteryStyle=#IconStyle#
BatteryMaskStyle=#IconStyle#
DownloadsStyle=#IconStyle#
RecentStyle=#IconStyle#
NotesStyle=#IconStyle#
CopyStyle=#IconStyle#
ExchangeStyle=#IconStyle#
LanguageStyle=#IconStyle#
AppDrawerStyle=2
AssistantStyle=#IconStyle#

DropdownSliderStyle=2

;-------------------------
; Colors

SetColorByWallpaperOFF=1

TopBarBGColor1=40,42,54
TopBarBGColor2=40,42,54
TopBarBGColor3=40,42,54
TopBarFontColor1=248,248,242
TopBarFontColor2=248,248,242
TopBarHLColor1=68,71,90
TopBarHLColor2=95,95,95
TopBarAssistantIconTint1=#TopBarFontColor1#
TopBarAssistantIconTint2=255,255,255
TopBarHomeIconColor=248,248,242
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25,(55*(#TopBarOpacity1#/255))
TopBarBorderBottomColor=255,255,255,(26*(#TopBarOpacity1#/255))
TopBarStrokeColor=68,71,90
TopBarShadowColor=68,71,90

DropdownBGColor1=40,42,54
DropdownFontColor1=248,248,242
DropdownFontColor2=248,248,242
DropdownItemHL=68,71,90
DropdownItemHL2=95,95,95
DropdownIconTint=#DropdownFontColor1#
DropdownIconGreyscale=0
DropdownStrokeColor=68,71,90
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=111,85,255

;-------------------------
; Opacities

TopBarOpacity1=255
TopBarGradientOpacity1=76.5
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=255

DropdownMenuOpacity1=255
DropdownItemOpacity=255
DropdownStrokeOpacity=255

HighlightShapeOpacity=255
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=3
HighlightFontOpacity1=255

TopBarHLOpacity=255
DropdownHLOpacity=255

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=68
TopBarBorderBottomOpacity=60

TopBarHLShadow=0
DropdownHLShadow=0

TopBarShadowOpacity=228

BlurTypeNum=0

;---

TopBarShadow=1
DropdownMenuShadow=0

TopBarFontShadow=1
TopBarFontShadowBlur=1

DropdownFontShadow=0
DropdownFontShadowBlur=2.5

;-------------------------
; Font options

FontYposOffset=-1
FontSizeOffset=0
IconSizeOffset=0
FontSpaceOffset=0
TitleSpaOffset=0

FontName0=SFMono Nerd Font

TopBarFontName=[#*FontName0*]

TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 255,255,255,185
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 255,255,255,255

;---

FontWeight=400
ApplicationFontWeight=400

TopBarTitleCaseNum=0
DegreeSymbol=°
PercentSymbol=%
MusicSymbol=#NotificationPlaying#
MailSymbol=#NotificationMail#

TopBarCharacterSpacing=#FontSpaceOffset# | #FontSpaceOffset#
DropdownCharacterSpacing=#FontSpaceOffset# | #FontSpaceOffset#

TopBarAntiAlias=1
DropdownAntiAlias=#TopBarAntiAlias#

;-------------------------
; Shapes & backgrounds

TopBarCornerMinMax0=0
TopBarCornerMinMax1=6
DropdownCornerMinMax0=2
DropdownCornerMinMax1=8
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=#TopBarCorner#
DropdownHighlightCorner=(5*#DroptopSize#)

;-------------------------

BLANK=255
NoOpacity=255

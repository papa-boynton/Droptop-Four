[Variables]

TopBarFontSize=((9*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
TopBarContentXOffset=((9*#DroptopSize#)-((9*#DroptopSize#)%1))
TopBarTitlePadding=((8*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(2*#DroptopSize#),((8*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
TopBarTextYOffset=((0*#DroptopSize#)+([#*FontYposOffset*]*#DroptopSize#))
TopBarSysTextYPadding=(2*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TopBarHLStrokeWidth=0
TopBarRoundTop=1
TopBarBorderTopH=0
TopBarBorderBottomH=0
TopBarHLOffsetY=(1*#DroptopSize#)
TopBarHLOffsetH=(0*#DroptopSize#)
TopBarSkew=(-20*[#*TopBarHLSkew*])
TopBarIconHOffset=((-14*#DroptopSize#)+([#*IconSizeOffset*]*#DroptopSize#))
TopBarSectionSpacingX=(((13*#DroptopSize#)-((13*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=((2*#DroptopSize#)*#TopBarSections#)
TopBarSectionPadding=(((5*#DroptopSize#)-((5*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(1*#DroptopSize#)
TopBarBlurCutout=((0*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarGradientCutout=#TopBarCutout#
TopBarDividerSpace=((8*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarDividerWidth=(#TopBarDividerSpace#/4)
TopBarDividerHeight=(0*#DroptopSize#)
TopBarShadowOffsetX=(0*#DroptopSize#)
TopBarShadowOffsetY=(2*#DroptopSize#)

;-------------------------

DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownItemHeight=((30*#DroptopSize#)-((30*#DroptopSize#)%1))
DropdownItemFontSize=((10*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(6*#DroptopSize#)
DropdownIconYOffset=((2*#DroptopSize#)-((2*#DroptopSize#)%1))
DropdownItemYOffset=(6*#DPIRescaleValue#)
DropdownItemPadding1=(34*#DroptopSize#)
DropdownItemPaddingY=((2+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYOffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=((155*#DroptopSize#)-((155*#DroptopSize#)%10))
DropdownContextMenuYOffset=(3*#DroptopSize#)
DropdownStrokeWidth=(1*#DroptopSize#)
DropdownHLStrokeWidth=(0.5*#DroptopSize#)
DropdownArrowHighlightW=((20*#DroptopSize#)-((20*#DroptopSize#)%1))
DropdownArrowXOffset=(5*#DroptopSize#)+(#DropdownMenuCutout#%1)
DropdownArrowXOffsetTray=(4*#DroptopSize#)
DropdownMenuFlatTop=0
DropdownSubMenuXOffset=(5*#DroptopSize#)
DropdownMenuCutout=(1*#DroptopSize#)
DropdownHLOffsetX=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
DropdownNoIconPadding=((6*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=255,255,255
ChamLumB=0,0,0

ChamBG1=106,151,202
ChamBG2=88,141,201
ChamBG3=72,51,107
ChamFG1=26,37,50
ChamFG2=26,37,50

TopBarSolidColor=0
TopBarExtraGradient=0

TopBarHLSolidColor=0
DropdownHLSolidColor=0

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=1
LockColorReset=0

RefreshOnColorReset=0

LockReverseDarkLightTopBar=0
LockReverseDarkLightDropdownMenu=0
LockTopBarShadowNum=1



;---
; ColorMode/Charging/BatteryLow/BatterySaver
BatteryFillColor0000=[#*TopBarFontColor1*]
BatteryFillColor0010=[#*TopBarFontColor1*]
BatteryFillColor0100=[#*TopBarFontColor1*]
BatteryFillColor0110=[#*TopBarFontColor1*]

BatteryFillColor1000=[#*TopBarFontColor1*]
BatteryFillColor1010=[#*BatteryDyingColor*]
BatteryFillColor1100=[#*BatteryChargingColor*]
BatteryFillColor1110=[#*BatteryDyingColor*]

BatteryFillColor0001=[#*TopBarFontColor1*]
BatteryFillColor0011=[#*TopBarFontColor1*]
BatteryFillColor0101=[#*TopBarFontColor1*]
BatteryFillColor0111=[#*TopBarFontColor1*]

BatteryFillColor1001=[#*BatterySaverColor*]
BatteryFillColor1011=[#*BatterySaverColor*]
BatteryFillColor1101=[#*BatteryChargingColor*]
BatteryFillColor1111=[#*BatteryChargingColor*]

;---

BatteryFillColor0000B=[#*TopBarFontColor2*]
BatteryFillColor0010B=[#*TopBarFontColor2*]
BatteryFillColor0100B=[#*TopBarFontColor2*]
BatteryFillColor0110B=[#*TopBarFontColor2*]

BatteryFillColor1000B=[#*TopBarFontColor2*]
BatteryFillColor1010B=[#*BatteryDyingColor*]
BatteryFillColor1100B=[#*BatteryChargingColor*]
BatteryFillColor1110B=[#*BatteryDyingColor*]

BatteryFillColor0001B=[#*TopBarFontColor2*]
BatteryFillColor0011B=[#*TopBarFontColor2*]
BatteryFillColor0101B=[#*TopBarFontColor2*]
BatteryFillColor0111B=[#*TopBarFontColor2*]

BatteryFillColor1001B=[#*BatterySaverColor*]
BatteryFillColor1011B=[#*BatterySaverColor*]
BatteryFillColor1101B=[#*BatteryChargingColor*]
BatteryFillColor1111B=[#*BatteryChargingColor*]

;-------------------------
; Opacities

BatteryFillOpacity=355

;-------------------------
; Shapes & backgrounds

DividerX=(#DropdownStrokeWidth#+1)
DividerSpace=(#DropdownIconYOffset#+#DropdownItemYOffset#)
DividerHeight=(1*#DroptopSize#)

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color [#*DropdownFontColor1*],40 | StrokeWidth 0
DividerShapeSub=Rectangle (#DividerX#+1),0,(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color [#*DropdownFontColor1*],40 | StrokeWidth 0

TopBarBlurType=[#BlurType[#BlurTypeNum][#TopBarSections][#Win10Apps]]

MicaAvailable=0

CurrentDayStrokeWidth=(1*#DroptopSize#)

TopBarHotCornerStrokeWidth=#TopBarStrokeWidth#

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings - Default settings applied when wallpaper changes or when "Reset" button is pressed in Color & Opacity Settings

ChamTopBarBGColor1=35,44,61
ChamTopBarBGColor2=35,44,61
ChamTopBarBGColor3=35,44,61
ChamDropdownBGColor1=35,44,61
ChamFolderHL=251,72,72
ChamTopBarHL=251,72,72
ChamDropdownFontColor1=255,255,255
ChamDropdownFontColor2=255,255,255
ChamTopBarFontColor1=255,255,255
ChamTopBarFontColor2=255,255,255
ChamTopBarGradientColor1=11,11,15
ChamTopBarGradientColor2=211,211,215
ChamDropdownStrokeColor=0,0,0
ChamTopBarStrokeColor=0,0,0
ChamTopBarHomeIconColor=255,255,255
ChamBatteryFillColor=255,255,255
ChamLightOffset=255
ChamDarkOffset=0
ChamLumThreshold=0.5
ChamColorModFactor=0.835
ChamColorModFactorB=0.90

;-------------------------


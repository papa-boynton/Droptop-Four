[Variables]

TopBarFontSize=((9.5*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
TopBarContentXOffset=((10*#DroptopSize#)-((10*#DroptopSize#)%1))
TopBarTitlePadding=((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
TopBarTextYOffset=((0*#DroptopSize#)+([#*FontYposOffset*]*#DroptopSize#))
TopBarSysTextYPadding=(0*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TopBarHLStrokeWidth=0
TopBarRoundTop=1
TopBarHLRoundTop=0
TopBarBorderTopH=0
TopBarBorderBottomH=0
TopBarHLOffsetY=(0*#DroptopSize#)
TopBarHLOffsetH=(0*#DroptopSize#)
TopBarSkew=(-20*[#*TopBarHLSkew*])
TopBarIconHOffset=((-9*#DroptopSize#)+([#*IconSizeOffset*]*#DroptopSize#))
TopBarSectionSpacingX=(((14*#DroptopSize#)-((14*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=((1*#DroptopSize#)*#TopBarSections#)
TopBarSectionPadding=(((6*#DroptopSize#)-((6*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(0*#DroptopSize#)
TopBarBlurCutout=((0*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarGradientCutout=#TopBarCutout#
TopBarDividerSpace=((8*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarDividerWidth=(#TopBarDividerSpace#/4)
TopBarDividerHeight=(0*#DroptopSize#)
TopBarShadowOffsetX=(0*#DroptopSize#)
TopBarShadowOffsetY=(2*#DroptopSize#)

;-------------------------------------------------------------------

DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownItemHeight=((34*#DroptopSize#)-((34*#DroptopSize#)%1))
DropdownItemFontSize=((9.5*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(8*#DroptopSize#)
DropdownIconYOffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
DropdownItemYOffset=(6*#DPIRescaleValue#)
DropdownItemPadding1=(38*#DroptopSize#)
DropdownItemPaddingY=((0+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYOffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=((185*#DroptopSize#)-((185*#DroptopSize#)%10))
DropdownContextMenuYOffset=(3*#DroptopSize#)
DropdownStrokeWidth=1
DropdownHLStrokeWidth=(0.5*#DroptopSize#)
DropdownArrowHighlightW=((22*#DroptopSize#)-((22*#DroptopSize#)%1))
DropdownArrowXOffset=(8*#DroptopSize#)+(#DropdownMenuCutout#%1)
DropdownArrowXOffsetTray=(4*#DroptopSize#)
DropdownMenuFlatTop=0
DropdownSubMenuXOffset=(6*#DroptopSize#)
DropdownMenuCutout=1
DropdownHLOffsetX=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
DropdownNoIconPadding=((6*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=30,30,30
ChamLumB=255,255,255

ChamBG1=2,1,18
ChamBG2=6,5,46
ChamBG3=6,5,48
ChamFG1=255,255,255
ChamFG2=255,255,255

TopBarSolidColor=0
TopBarExtraGradient=0

TopBarHLSolidColor=0
DropdownHLSolidColor=0

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=0
LockColorReset=0

RefreshOnColorReset=0

LockReverseDarkLightTopBar=0
LockReverseDarkLightDropdownMenu=0
LockTopBarShadowNum=0

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

DividerX=((8*#DroptopSize#)+1)
DividerSpace=(#DropdownIconYOffset#+#DropdownItemYOffset#)
DividerHeight=(1*#DroptopSize#)

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#+#DropdownMenuWidthOffset#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color [#*DropdownFontColor1*],40 | StrokeWidth 0
DividerShapeSub=Rectangle (#DividerX#+1),0,(#DropdownSubMenuWidth#+#DropdownMenuWidthOffset#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color [#*DropdownFontColor1*],40 | StrokeWidth 0

TopBarBlurType=[#BlurType[#BlurTypeNum][#TopBarSections][#Win10Apps]]

MicaAvailable=1

CurrentDayStrokeWidth=(1*#DroptopSize#)

TopBarHotCornerStrokeWidth=#TopBarStrokeWidth#

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings - Default settings applied when wallpaper changes or when "Reset" button is pressed in Color & Opacity Settings

ChamTopBarBGColor1=[ChamLumA]
ChamTopBarBGColor2=[ChamLumA]
ChamTopBarBGColor3=[ChamLumA]
ChamDropdownBGColor1=[ChamLumA]
ChamFolderHL=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarHL=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamDropdownFontColor1=[ChamLumB]
ChamDropdownFontColor2=255,255,255
ChamTopBarFontColor1=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarFontColor2=255,255,255
ChamTopBarGradientColor1=11,11,15
ChamTopBarGradientColor2=211,211,215
ChamDropdownStrokeColor=0,0,0
ChamTopBarStrokeColor=0,0,0
ChamTopBarHomeIconColor=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamBatteryFillColor=[ChamLumB]
ChamLightOffset=255
ChamDarkOffset=30
ChamLumThreshold=0.5
ChamColorModFactor=0.835
ChamColorModFactorB=0.90

;-------------------------

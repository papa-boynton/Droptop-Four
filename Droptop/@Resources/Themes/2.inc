[Variables]

TopBarFontSize=((9.5*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
TopBarContentXOffset=((10*#DroptopSize#)-((10*#DroptopSize#)%1))
TopBarTitlePadding=((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
TopBarTextYOffset=((0*#DroptopSize#)+([#*FontYposOffset*]*#DroptopSize#))
TopBarSysTextYPadding=(0*#DroptopSize#)
TopBarStrokeWidth=(1*#DroptopSize#)
TopBarHLStrokeWidth=0
TopBarRoundTop=0
TopBarHLRoundTop=0
TopBarBorderTopH=0
TopBarBorderBottomH=0
TopBarHLOffsetY=(0*#DroptopSize#)
TopBarHLOffsetH=(0*#DroptopSize#)
TopBarSkew=(-20*[#*TopBarHLSkew*])
TopBarIconHOffset=((-8*#DroptopSize#)+([#*IconSizeOffset*]*#DroptopSize#))
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

;-------------------------

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
DropdownStrokeWidth=(1*#DroptopSize#)
DropdownHLStrokeWidth=0.5
DropdownArrowHighlightW=((22*#DroptopSize#)-((22*#DroptopSize#)%1))
DropdownArrowXOffset=(8*#DroptopSize#)+(#DropdownMenuCutout#%1)
DropdownArrowXOffsetTray=(4*#DroptopSize#)
DropdownMenuFlatTop=1
DropdownSubMenuXOffset=(6*#DroptopSize#)
DropdownMenuCutout=(1*#DroptopSize#)
DropdownHLOffsetX=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
DropdownNoIconPadding=((6*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=1
ChamLum2=1
ChamLumA=255,255,255
ChamLumB=0,0,0

ChamBG1=88,163,207
ChamBG2=225,244,254
ChamBG3=224,243,254
ChamFG1=15,43,54
ChamFG2=0,0,0

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

DividerX=((8*#DroptopSize#)+1)
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

ChamTopBarBGColor1=[&TopBarBGColor.R.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting1[#ReverseDarkLight]]]
ChamTopBarBGColor2=[&TopBarBGColor.R.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting1[#ReverseDarkLight]]]
ChamTopBarBGColor3=[&TopBarBGColor.R.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting1[#ReverseDarkLight]]]
ChamDropdownBGColor1=[&TopBarBGColor.R.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting1[#ReverseDarkLight]]]
ChamFolderHL=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarHL=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamDropdownFontColor1=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamDropdownFontColor2=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarFontColor1=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarFontColor2=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarGradientColor1=11,11,15
ChamTopBarGradientColor2=211,211,215
ChamDropdownStrokeColor=0,0,0
ChamTopBarStrokeColor=0,0,0
ChamTopBarHomeIconColor=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamBatteryFillColor=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamLightOffset=255
ChamDarkOffset=0
ChamLumThreshold=0.5
ChamColorModFactor=0.656
ChamColorModFactorB=0.90

;-------------------------

[Variables]
TopBarFontSize=((8*#DroptopSize#)+(#FontSizeOffset#*#DroptopSize#))
TopBarContentXOffset=((4*#DroptopSize#)-((4*#DroptopSize#)%1))
TopBarTitlePadding=(((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),(((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)+(#TitleSpaOffset#*#DroptopSize#)),0
TopBarTextYOffset=((0*#DroptopSize#)+(#FontYposOffset#*#DroptopSize#))
TopBarSysBatteryIconOffset=(0*#DroptopSize#)
TopBarSysBatteryTextOffset=(0*#DroptopSize#)
TopBarSysTextYPadding=(0*#DroptopSize#)
TopBarHLStrokeWidth=0
TopBarRoundTop=1
TopBarHLRoundTop=1
TopBarBorderTopH=(0*#DroptopSize#)
TopBarBorderBottomH=(0*#DroptopSize#)
TopBarHLOffsetY=(0.5*#DroptopSize#)
TopBarHLOffsetH=(3*#DroptopSize#)
TopBarSkew=(-20*#TopBarHLSkew#)
TopBarIconHOffset=((-16*#DroptopSize#)+(#IconSizeOffset#*#DroptopSize#))
TopBarSectionSpacingX=(((15*#DroptopSize#)-((15*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=(((0*#DroptopSize#)-((0*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionPadding=(((3*#DroptopSize#)-((3*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(0.5*#DroptopSize#)
TopBarBlurCutout=(7*#DroptopSize#)
TopBarGradientCutout=#TopBarCutout#
TopBarStrokeWidth=(0.5*#DroptopSize#)
TopBarDividerSpace=((10*#DroptopSize#)*((#TopBarSections#-1)*-1))
TopBarDividerWidth=(#TopBarDividerSpace#/4)
TopBarDividerHeight=(-(#TopHeight#/2)/2)
TopBarShadowOffsetX=(0*#DroptopSize#)
TopBarShadowOffsetY=(0*#DroptopSize#)

;-------------------------

DropdownMenuWidth=((300*#DroptopSize#)-((300*#DroptopSize#)%1))
DropdownItemHeight=((34*#DroptopSize#)-((34*#DroptopSize#)%1))
DropdownItemFontSize=((8*#DroptopSize#)+(#FontSizeOffset#*#DroptopSize#))
DropdownMenuYOffset=(10*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(5*#DroptopSize#)
DropdownIconYoffset=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownItemYOffset=((4*#DroptopSize#)-((4*#DroptopSize#)%1))
DropdownItemPadding1=(37*#DroptopSize#)
DropdownItemPadding2=(37*#DroptopSize#)
DropdownItemPaddingY=((0+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=(200*#DroptopSize#)
DropdownContextMenuYOffset=(10*#DroptopSize#)
DropdownStrokeWidth=(0.5*#DroptopSize#)
DropdownHLStrokeWidth=0
DropdownSysAppContentXOffset=(0*#DroptopSize#)
DropdownArrowHighlightW=((30*#DroptopSize#)-((30*#DroptopSize#)%1))
DropdownArrowXOffset=(3*#DroptopSize#)+(#DropdownMenuCutout#%1)
DropdownArrowXOffsetTray=(-2*#DroptopSize#)
DropdownMenuFlatTop=0
DropdownSubMenuXOffset=(6*#DroptopSize#)
DropdownMenuCutout=(0.5*#DroptopSize#)
DropdownHLOffsetX=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownMenuLandingHeight=((22*#DroptopSize#)-((22*#DroptopSize#)%1))
DropdownNoIconPadding=((12*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=0,0,0
ChamLumB=0,0,0

ChamBG1=0,0,0
ChamBG2=0,0,0
ChamBG3=0,0,0
ChamFG1=0,0,0
ChamFG2=0,0,0

TopBarSolidColor=0

TopBarHLSolidColor=0
DropdownHLSolidColor=0

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=1
LockColorReset=1

RefreshOnColorReset=0

LockReverseDarkLightTopBar=1
LockReverseDarkLightDropdownMenu=1
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

DividerX=(0*#DroptopSize#)
DividerSpace=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DividerHeight=((1*#DroptopSize#)-((1*#DroptopSize#)%1))

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/2) | StrokeWidth 0
DividerShapeSub=Rectangle (#DividerX#+1),0,(#DropdownSubMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #DropdownFontColor1#,(#DropdownItemOpacity#/2) | StrokeWidth 0

HomeShape=Rectangle [#*TopBarContentXOffset*],([#*TopBarHLOffsetH*]+[#*TopBarHLOffsetY*]),[Home:W],([#*TopHeight*]-([#*TopBarCutout*]*2)-([#*TopBarHLOffsetH*]*2)),[#*TopBarHighlightCorner*] | StrokeWidth 0 | Stroke Color [#*TopBarBGColor1*] | Skew [#*TopBarSkew*],0 | Extend HomeFillColor[#*TopBarHomeShape*]

TopBarBlurType=[#BlurType[#BlurTypeNum]]

CurrentDayStrokeWidth=(2*#DroptopSize#)

TopBarHotCornerStrokeWidth=#TopBarStrokeWidth#

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings

ChamTopBarBGColor1=30, 30, 46
ChamTopBarBGColor2=30, 30, 46
ChamTopBarBGColor3=30, 30, 46
ChamDropdownBGColor1=30, 30, 46
ChamFolderHL=243, 139, 168
ChamTopBarHL=243, 139, 168
ChamDropdownFontColor1=186, 194, 222
ChamDropdownFontColor2=30, 30, 46
ChamTopBarFontColor1=205, 214, 244
ChamTopBarFontColor2=30, 30, 46
ChamDropdownStrokeColor=186, 194, 222,255
ChamTopBarStrokeColor=205, 214, 244
ChamTopBarHomeIconColor=205, 214, 244
ChamTopBarAssistantIconTint1=205,214,244
ChamTopBarAssistantIconTint2=30,30,46
ChamBatteryFillColor=205,214,244
ChamLightOffset=255
ChamDarkOffset=255
ChamLumThreshold=1
ChamColorModFactor=1
ChamColorModFactorB=1

;-------------------------

MyThemeGUID=dbc7edb8-c1b7-458e-8c4c-e6417b1c6b4b

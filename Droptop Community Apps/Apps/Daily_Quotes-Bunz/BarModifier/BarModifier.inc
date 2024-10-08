; [Daily_Quotes-Bunz.Style]
; W=((#TopHeight#+#TopBarIconHOffset#)*1.5)

; [Daily_Quotes-Bunz]
; Meter=Image
; MeterStyle=InfoStyle | CustomAppModifierStyle


;----------------------------------------------------
; Styles
;----------------------------------------------------

[Daily_Quotes-Bunz.Style]
ImageAlpha=0
W=([Daily_Quotes-Bunz_String:W]-([Daily_Quotes-Bunz_String:W]%1))

[Daily_Quotes-Bunz_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Daily_Quotes-Bunz]]]
MouseOverAction=[]
MouseLeaveAction=[]
Container=SystemTrayContainer
Group=CustomApp[#Daily_Quotes-Bunz]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#Daily_Quotes-Bunz]] | CustomAppButton | Daily_Quotes-Bunz
DynamicVariables=1

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Daily_Quotes-Bunz_String]
Meter=String
MeterStyle=InfoStyle | Daily_Quotes-Bunz_Style
StringAlign=LeftCenter
InlinePattern3=^([a-z]).*
InlineSetting3=Case | UPPER
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1),#TopBarSysTextYPadding#,(((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)*1),0
Text=#Word1#
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))
MouseOverAction=[]
MouseLeaveAction=[]

[Daily_Quotes-Bunz_Icon]
Meter=Image
MeterStyle=InfoStyle | Daily_Quotes-Bunz_Style
ImageName="#SKINSPATH#Droptop Community Apps\Apps\Daily_Quotes-Bunz\Button\Medium\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=#TopBarTitleOpacity#
Padding=#SysIconPadding#
X=r
Y=0
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)
H=(#TopHeight#+#TopBarIconHOffset#)
MouseOverAction=[]
MouseLeaveAction=[]

$time = Get-Date -Format HH.mm

$i = 1
cd "$skinspath\Droptop Community Apps\Apps\Wallpaper_Changer-Cariboudjan\Wallpapers\Day"
get-childitem | %{ Rename-Item -LiteralPath $_.FullName -NewName ("{0:D1}.$time.png" -f $i++) }

$i = 1
cd "$skinspath\Droptop Community Apps\Apps\Wallpaper_Changer-Cariboudjan\Wallpapers\Night"
get-childitem | %{ Rename-Item -LiteralPath $_.FullName -NewName ("{0:D1}.$time.png" -f $i++) }
[CustomApp1]
MouseScrollUpAction=[!CommandMeasure "MeasureWin7Audio" "ChangeVolume +#VolumeSliderSteps#"][!Delay 100][!UpdateMeasureGroup VolumeSys][!UpdateMeter VolumeIcon][!Redraw]
MouseScrollDownAction=[!CommandMeasure "MeasureWin7Audio" "ChangeVolume -#VolumeSliderSteps#"][!Delay 100][!UpdateMeasureGroup VolumeSys][!UpdateMeter VolumeIcon][!Redraw]
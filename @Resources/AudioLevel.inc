[Variables]
Bands=4
FFTAttack=#Attack#
FFTDecay=#Decay#
Accuracy=#Accuracy#

; Get the current audio devices sampling rate
[MeasureSamplingRate]
Measure=Plugin
Plugin=AudioLevel
Type=Format
RegExpSubstitute=1
Substitute="(Hz.*)$":""
UpdateDivider=-1

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
DynamicVariables=1
FFTSize=([MeasureSamplingRate] * #Accuracy# / #FPS#)
FFTOverlap=([MeasureSamplingRate] * (#Accuracy# - 1) / #FPS#)
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
Bands=#Bands#
Sensitivity=#Sensitivity#

[Bass]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=0

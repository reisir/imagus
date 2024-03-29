[Variables]
FPS=60
Bands=4
FFTAttack=#Attack#
FFTDecay=#Decay#
Accuracy=#Accuracy#
SkipBands=1

; Get the current audio devices sampling rate
[MeasureSamplingRate]
Measure=Plugin
Plugin=AudioLevel
Type=Format
RegExpSubstitute=1
Substitute="(Hz.*)$":"","(.*)":"#ForceSamplingRate#"
UpdateDivider=-1

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
DynamicVariables=1
FFTSize=([MeasureSamplingRate] * #Accuracy# / #FPS#)
FFTOverlap=([MeasureSamplingRate] * (#Accuracy# - 1) / #FPS#)
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
PeakDecay=#FFTDecay#
PeakAttack=#FFTAttack#
Bands=(#Bands# + #SkipBands#)
Sensitivity=#Sensitivity#

[MeasureVolume]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=VOLUME

[MeasurePeak]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Peak

[MeasurePeakNormalised]
Measure=Calc
Formula=MeasurePeak * 100 / Max(MeasureVolume, 1)

[Bass]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
Bandidx=1

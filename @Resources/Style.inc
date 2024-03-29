[Variables]
; Variables used in Styles.inc only
Spread=500
RandomSpread=200

; --- Multiple frames base ---
; Has access to MeasureBandN
[Base]
ImageName=#@#Images\#CurrentImage#\Frame_#CURRENTSECTION#
DynamicVariables=1
ImageTint=#SpreadColorTransform#

;  ██████  ██████  ██      ██    ██ ███    ███ ███    ██ 
; ██      ██    ██ ██      ██    ██ ████  ████ ████   ██ 
; ██      ██    ██ ██      ██    ██ ██ ████ ██ ██ ██  ██ 
; ██      ██    ██ ██      ██    ██ ██  ██  ██ ██  ██ ██ 
;  ██████  ██████  ███████  ██████  ██      ██ ██   ████ 

; Has access to [MeasureBand[#CURRENTSECTION]]
[SpreadStyle]
; X=((#CURRENTSECTION# % 2) * 140)
Y=(4)r

;  █████  ███    ██ ██ ███    ███  █████  ████████ ███████ ██████  
; ██   ██ ████   ██ ██ ████  ████ ██   ██    ██    ██      ██   ██ 
; ███████ ██ ██  ██ ██ ██ ████ ██ ███████    ██    █████   ██   ██ 
; ██   ██ ██  ██ ██ ██ ██  ██  ██ ██   ██    ██    ██      ██   ██ 
; ██   ██ ██   ████ ██ ██      ██ ██   ██    ██    ███████ ██████  
; column

; Has access to [MeasureBand[#CURRENTSECTION]], [MeasureFrame[#CURRENTSECTION]]
[ImageStyleAnimated]
ImageName=#@#Images\#CurrentImage#\Frame_[&MeasureFrame[#CURRENTSECTION]]
; X=(10 * [#CURRENTSECTION] + ([MeasureBand[#CURRENTSECTION]] * (#CURRENTSECTION# % 2 = 0 ? -50 : 50)))
; Y=((4 * [#CURRENTSECTION]) + ([MeasureBand[#CURRENTSECTION]] * (#CURRENTSECTION# % 2 = 0 ? 100 : -100)))
; X=((#CURRENTSECTION# % 2) * 140)
Y=(4)r

; ███████ ██    ██ ██      ██      ███████  ██████ ██████  ███████ ███████ ███    ██ 
; ██      ██    ██ ██      ██      ██      ██      ██   ██ ██      ██      ████   ██ 
; █████   ██    ██ ██      ██      ███████ ██      ██████  █████   █████   ██ ██  ██ 
; ██      ██    ██ ██      ██           ██ ██      ██   ██ ██      ██      ██  ██ ██ 
; ██       ██████  ███████ ███████ ███████  ██████ ██   ██ ███████ ███████ ██   ████ 

; Has access to [MeasureBand[#CURRENTSECTION]], [&RandomX[#CURRENTSECTION]], [&RandomY[#CURRENTSECTION]]
[ImageStyleRandomized]
ImageTint=#R#,#G#,#B#,([MeasureBand[#CURRENTSECTION]] * #A#)
X=([&RandomX[#CURRENTSECTION]] - [CurrentImage:W] + ((#CURRENTSECTION# / 2 < (#Bands# * 0.3) ? -1 : 1) * #RandomSpread# * [&MeasureBand[#CURRENTSECTION]]))
Y=([&RandomY[#CURRENTSECTION]] - [CurrentImage:H] + ((#CURRENTSECTION# / 2 > (#Bands# * 0.3) ? -1 : 1) * #RandomSpread# * [&MeasureBand[#CURRENTSECTION]]))

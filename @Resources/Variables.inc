[Variables]
;  █████  ██    ██ ██████  ██  ██████  
; ██   ██ ██    ██ ██   ██ ██ ██    ██ 
; ███████ ██    ██ ██   ██ ██ ██    ██ 
; ██   ██ ██    ██ ██   ██ ██ ██    ██ 
; ██   ██  ██████  ██████  ██  ██████  

Sensitivity=35
Attack=1
Decay=50
Accuracy=5
; Only use (replace with 44000) if AudioLevel gives you errors
ForceSamplingRate=\1

;  ██████  ██████  ██       ██████  ██████  ███████ 
; ██      ██    ██ ██      ██    ██ ██   ██ ██      
; ██      ██    ██ ██      ██    ██ ██████  ███████ 
; ██      ██    ██ ██      ██    ██ ██   ██      ██ 
;  ██████  ██████  ███████  ██████  ██   ██ ███████ 

; Set both sets to the same value for no color transform. Or change the color transform formulas

; RGB color when there's no sound
_R=255
_G=150
_B=230
_A=0

; RGB color when there's sound
R=255
G=100
B=210
A=125

; ██    ██  █████  ██████  ██  █████  ███    ██ ████████ ███████ 
; ██    ██ ██   ██ ██   ██ ██ ██   ██ ████   ██    ██    ██      
; ██    ██ ███████ ██████  ██ ███████ ██ ██  ██    ██    ███████ 
;  ██  ██  ██   ██ ██   ██ ██ ██   ██ ██  ██ ██    ██         ██ 
;   ████   ██   ██ ██   ██ ██ ██   ██ ██   ████    ██    ███████ 

; Simple (accumulative)
RotateIntensity=8
RotateSustain=([#Frames[#CurrentImage]] * 2)
RotationDirection=1

; Animated column
; how many frames each section should animate
Animation=50

; ███████  ██████  ██████  ███    ███ ██    ██ ██       █████  ███████ 
; ██      ██    ██ ██   ██ ████  ████ ██    ██ ██      ██   ██ ██      
; █████   ██    ██ ██████  ██ ████ ██ ██    ██ ██      ███████ ███████ 
; ██      ██    ██ ██   ██ ██  ██  ██ ██    ██ ██      ██   ██      ██ 
; ██       ██████  ██   ██ ██      ██  ██████  ███████ ██   ██ ███████                                        

; Formulas that transform the _RGB color to the RGB color
; Don't touch if you don't know what you're doing

; Basic transform formula
ColorTransform=(#_R# - (#_R# - #R#) * [Bass]),(#_G# - (#_G# - #G#) * [Bass]),(#_B# - (#_B# - #B#) * [Bass]),(#_A# - (#_A# - #A#) * [Bass])

; Band specific transform formula
SpreadColorTransform=(#_R# - (#_R# - #R#) * [MeasureBand[#*CURRENTSECTION*]]),(#_G# - (#_G# - #G#) * [MeasureBand[#*CURRENTSECTION*]]),(#_B# - (#_B# - #B#) * [MeasureBand[#*CURRENTSECTION*]]),(#_A# - (#_A# - #A#) * [MeasureBand[#*CURRENTSECTION*]])

[Variables]
; Skin update rate
UpdateRate=16

; --- AudioLevel ---
Sensitivity=35
Attack=1
Decay=50
Accuracy=5
; AudioLevel update rate.
; Try to use even integers, even better if they're multiples of 10
; The math for FFTSize / FFTOverlap sometimes breaks with arbitrary FPS and Accuracy values
FPS=60

; --- Color transform ---
; Set both sets to the same value for no color transform. Or change the color transform formulas

;_ RGB color when there's no sound
_R=255
_G=150
_B=230
_A=0

;RGB color to transform into with sound
R=255
G=100
B=210
A=125

; --- Variant specific settings ---

; Accumulative.ini
RotateIntensity=8
RotateSustain=(#FramesCells# * 2)
RotationDirection=1

; Animated.ini
Animation=20

; --- Formulas ---

; Color transformation formula
ColorTransform=(#_R# - (#_R# - #R#) * [Bass]),(#_G# - (#_G# - #G#) * [Bass]),(#_B# - (#_B# - #B#) * [Bass]),(#_A# - (#_A# - #A#) * [Bass])

; Color transform formula for Spread.ini Animated.ini Randomized.ini
SpreadColorTransform=(#_R# - (#_R# - #R#) * [MeasureBand[#*CURRENTSECTION*]]),(#_G# - (#_G# - #G#) * [MeasureBand[#*CURRENTSECTION*]]),(#_B# - (#_B# - #B#) * [MeasureBand[#*CURRENTSECTION*]]),(#_A# - (#_A# - #A#) * [MeasureBand[#*CURRENTSECTION*]])





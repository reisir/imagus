[Rainmeter]
Update=#UpdateRate#
AccurateText=1
DynamicWindowSize=1
BackgroundMode=2
SolidColor=0,0,0,1
RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=Open settings file
ContextAction=["#@#Variables.inc"]
ContextTitle2=-
ContextTitle3=Toggle variant
ContextAction3=#DR#[!ActivateConfig #ROOTCONFIG#]
ContextTitle4=-
ContextTitle5=Cells
ContextAction5=[!WriteKeyValue Variables CurrentImage Cells "#@#Common.inc"]#DR#
ContextTitle6=Eyes 
ContextAction6=[!WriteKeyValue Variables CurrentImage Eyes "#@#Common.inc"]#DR#
ContextTitle7=Lightning 
ContextAction7=[!WriteKeyValue Variables CurrentImage Lightning "#@#Common.inc"]#DR#
ContextTitle8=Raindrops
ContextAction8=[!WriteKeyValue Variables CurrentImage Raindrops "#@#Common.inc"]#DR#
ContextTitle9=-
ContextTitle10=Rainmeter menu
ContextAction10=[!SkinMenu]

[Variables]
FramesCells=143
FramesEyes=167
FramesLightning=124
FramesRaindrops=143
DR=[!WriteKeyValue Variables Refreshed 0 #@#Refresher.inc][!Refresh]
CurrentImage=Raindrops
ImageTint=#ColorTransform#
MeasureFrameFormula=Clamp(Floor(%% - (#*Animation*# / 2) + (MeasureBand%% * #*Animation*#)), 0, [#Frames[#*CurrentImage*]])

[IncludeVariables]
@IncludeVariables=#@#Variables.inc

[IncludeRefresher]
@IncludeRefresher=#@#Refresher.inc

[dummy]
Meter=Image
ImageName=#@#Images\[#CurrentImage]\Frame_0.png
UpdateDivider=-1
ImageTint=0,0,0,0

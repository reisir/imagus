[Rainmeter]
Update=#UpdateRate#
AccurateText=1
DynamicWindowSize=1
BackgroundMode=2
SolidColor=0,0,0,1
RightMouseUpAction=[!SkinCustomMenu]

ContextTitle=Open settings file
ContextAction=["#@#Variables.inc"]
ContextTitle2=Open styles file
ContextAction2=["#@#Style.inc"]

ContextTitle3=-

ContextTitle4=Simple (straight)
ContextAction4=#DR#[!DeactivateConfig][!ActivateConfig "#ROOTCONFIG#\Simple (straight)"]
ContextTitle5=Simple (accumulative)
ContextAction5=#DR#[!DeactivateConfig][!ActivateConfig "#ROOTCONFIG#\Simple (accumulative)"]
ContextTitle6=Column
ContextAction6=#DR#[!DeactivateConfig][!ActivateConfig "#ROOTCONFIG#\Column"]
ContextTitle7=Animated column
ContextAction7=#DR#[!DeactivateConfig][!ActivateConfig "#ROOTCONFIG#\Animated column"]
ContextTitle8=Fullscreen
ContextAction8=#DR#[!DeactivateConfig][!ActivateConfig "#ROOTCONFIG#\Fullscreen"]

ContextTitle9=-

ContextTitle10=Cells
ContextAction10=[!WriteKeyValue Variables CurrentImage Cells "#@#Common.inc"]#DR#
ContextTitle11=Eyes 
ContextAction11=[!WriteKeyValue Variables CurrentImage Eyes "#@#Common.inc"]#DR#
ContextTitle12=Lightning 
ContextAction12=[!WriteKeyValue Variables CurrentImage Lightning "#@#Common.inc"]#DR#
ContextTitle13=Raindrops
ContextAction13=[!WriteKeyValue Variables CurrentImage Raindrops "#@#Common.inc"]#DR#

ContextTitle14=-

ContextTitle15=Skin menu...
ContextAction15=[!SkinMenu]

[Variables]
UpdateRate=16
FramesCells=143
FramesEyes=167
FramesLightning=124
FramesRaindrops=143
DR=[!WriteKeyValue Variables Refreshed 0 #@#Refresher.inc][!Refresh]
CurrentImage=Cells
ImageTint=#ColorTransform#
MeasureFrameFormula=Clamp(Floor(%% - (#*Animation*# / 2) + (MeasureBand%% * #*Animation*#)), 0, [#Frames[#*CurrentImage*]])

[IncludeVariables]
@IncludeVariables=#@#Variables.inc

[IncludeRefresher]
@IncludeRefresher=#@#Refresher.inc

[CurrentImage]
Meter=Image
ImageName=#@#Images\[#CurrentImage]\Frame_0.png
UpdateDivider=-1
ImageTint=0,0,0,0

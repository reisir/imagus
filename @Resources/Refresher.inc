[Variables]
Refreshed=1

[Refresher]
Measure=Calc
Formula=#Refreshed#
Disabled=#Refreshed#
OnUpdateAction=[!WriteKeyValue Variables Refreshed 1 #@#Refresher.inc][!DisableMeasure Refresher][!Delay 100][!Refresh]

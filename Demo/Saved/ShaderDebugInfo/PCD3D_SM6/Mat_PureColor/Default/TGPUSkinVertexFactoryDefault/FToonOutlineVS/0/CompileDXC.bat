@ECHO OFF
SET DXC="D:\Codes\UnrealEngine51\UnrealEngine\Engine\Binaries\ThirdParty\ShaderConductor\Win64\dxc.exe"
IF NOT EXIST %DXC% (
	ECHO Couldn't find dxc.exe under "D:\Codes\UnrealEngine51\UnrealEngine\Engine\Binaries\ThirdParty\ShaderConductor\Win64"
	GOTO :END
)
%DXC% /auto-binding-space 0 /Zpr /O3 -Wno-parentheses-equality /T vs_6_6 /E MainVS /Fc ToonLitOutLine.d3dasm /Fo ToonLitOutLine.dxil ToonLitOutLine.usf
:END
PAUSE

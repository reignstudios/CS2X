# <a href="https://discord.gg/QmJEGER9An"><image src="https://theme.zdassets.com/theme_assets/678183/cc59daa07820943e943c2fc283b9079d7003ff76.svg"/></a>

# NOTE: IL2X is being re-investigated for CPU targets
https://github.com/reignstudios/IL2X<br>
This would end up making CS2X mostly for GPU targets.<br><br>

# CS2X (Under development)
Transpiles a C# subset to non .NET languages. (Powered by Roslyn)<br>

## Goals
This project will focus on transpiling a C# subset with a modified type system for writing GPU programs.
* HLSL (DirectX Shader Assembly Language) [D3D9.0c +]
* ALS (DirectX Shader Assembly Language) [D3D8.0 - D3D9.0c]
* GLSL (OpenGL shading language) [OpenGL2.0 / GLES2 +]
* ARB (ARB assembly language) [legacy / homebrew systems]
* CG (Cg programming language) [PSVita, Nvidia / other]
* PSSL (PlayStation Shader Language) [PS4]
* MSL (Metal Shading Language) [macOS / iOS]
* AGAL (Adobe Graphics Assembly Language)
* Custom, etc

## Primary Project libraries
* CS2X.Core: .NET transpiler lib
* CS2X.CLI: CLI interface for CS2X.Core
* CS2X.Analyzer: C# syntax analyzer to limit unsuported features.
* CS2X.CoreLib: Portable CoreLib subset

## Building
NOTE: To clone repo you will need the <a href=https://git-lfs.github.com>Git Large File Storage</a></a>

* Prerequisites
	* VS 2022, vscode, Rider, etc
	* .NET 8

## Is this project ready for general use?
No still experimental.
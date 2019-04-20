[![Gitter](https://badges.gitter.im/ReignStudios/CS2X.svg)](https://gitter.im/ReignStudios/CS2X?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)

# CS2X (Currently Experimental)
Transpiles a C# subset to non .NET languages, platforms, runtimes and enviroments. (Powered by Roslyn)<br>
If you're looking for IL2X: https://github.com/reignstudios/IL2X

## Goals
This project will focus on transpiling a C# subset for writing CPU and GPU programs.
* Custom Standard lib(s) for various targets.
* Documentation

### CPU targets
* C89
	* Native C performance
	* C89: modern, legacy and embedded platforms (x86, MIPS, SPARK, RISC-V, 	PPC, AVR, etc)
	* CC65: 6502 platforms (Atari, C64, NES, Apple II, etc)
	* SDCC: Many targets (ColecoVision, etc)
* Assembly: CP1610 (Intellivision)
* Retarget: Custom assembly targets via plugin system (FPGA CPU, 16bit 	bytes, etc)
* javaScript
* Python
* Java
* ActionScript

### GPU targets
* HLSL (DirectX Shader Assembly Language) [D3D9.0c +]
* ALS (DirectX Shader Assembly Language) [D3D8.0 - D3D9.0c]
* GLSL (OpenGL shading language) [OpenGL2.0 / GLES2 +]
* ARB (ARB assembly language) [legacy / homebrew systems]
* CG (Cg programming language) [PSVita, Nvidia / other]
* PSSL (PlayStation Shader Language) [PS4]
* MSL (Metal Shading Language) [macOS / iOS]
* AGAL (Adobe Pixel Bender and Adobe Graphics Assembly Language)

## Primary Project libraries
* CS2X.Core: .NET transpiler lib
* CS2X.CLI: CLI interface for CS2X.Core
* CS2X.Analyzer: C# syntax analyzer to limit unsuported features.

## Building
* Prerequisites
	* Visual Studios 2019 (VS for Mac / MonoDevelop or VSCode have not yet been tested)
	* .NET Core 2.2
	* .NET Compiler Platform SDK
* Run: CS2X.Core.Test proj in VS. This will build "PortableTestApp.CS2X.csproj" to "TestOutput" folder
* NOTE: Very early stages so nothing else is supported yet.
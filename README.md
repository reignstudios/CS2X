[![Gitter](https://badges.gitter.im/ReignStudios/CS2X.svg)](https://gitter.im/ReignStudios/CS2X?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)

# CS2X (Under development)
Transpiles a C# subset to non .NET languages, platforms, runtimes and enviroments. (Powered by Roslyn)<br>

CS2X is activily being tested in the development of the Orbital-Framework:<br>
https://github.com/reignstudios/Orbital-Framework<br>
This provides real-world tests and as things progress more features will tested and supported here.

## WASM Demo
Renders a 1280x720 image then prints how long it took in seconds.<br>
http://reign-studios.com/wasm/cs2x/ray-trace-benchmark/cs2x.html

## Goals
This project will focus on transpiling a C# subset with a modified type system for writing CPU and GPU programs.
* Custom Standard lib(s) for various targets.
* Documentation

### CPU targets
* C89
	* Native C performance
	* C89: modern, legacy and embedded platforms (x86, MIPS, SPARC, RISC-V, PPC, M68K, AVR, etc)
	* CC65: 6502 platforms (Atari, C64, NES, Apple II, etc)
	* SDCC: Many targets (ColecoVision, ZX Spectrum, etc)
	* z88dk: Z80 platforms
* LLVM
* LLVM IR => Assembly: CP1610 (Intellivision)
* LLVM IR => Assembly: Intel 8048 (Magnavox Odyssey 2)
* LLVM IR => Retarget: Custom assembly targets (FPGA CPU, 16bit bytes, etc)
* Java
* Kotlin
* javaScript
* Python
* ActionScript

### GPU targets
* HLSL (DirectX Shader Assembly Language) [D3D9.0c +]
* ALS (DirectX Shader Assembly Language) [D3D8.0 - D3D9.0c]
* GLSL (OpenGL shading language) [OpenGL2.0 / GLES2 +]
* ARB (ARB assembly language) [legacy / homebrew systems]
* CG (Cg programming language) [PSVita, Nvidia / other]
* PSSL (PlayStation Shader Language) [PS4]
* MSL (Metal Shading Language) [macOS / iOS]
* AGAL (Adobe Graphics Assembly Language)
* Custom: Plugin system

## Primary Project libraries
* CS2X.Core: .NET transpiler lib
* CS2X.CLI: CLI interface for CS2X.Core
* CS2X.Analyzer: C# syntax analyzer to limit unsuported features.
* CS2X.CoreLib: Portable CoreLib subset

## How does it basically work?
* C89
	* Each executable gets built to a single '.c' source file including all dependencies.
	* String literals on embedded devices, cartridges, etc can be stored in program memory / ROM to save ram.
	* All GC methods are agnostic allowing any built-in or custom GC backend.
* Other: TODO

## Performance
Almost zero performance loss. C# code will generate in a manner as if hand written in the target language in many respects. There are a couple key differences in the CS2X runtime / type system vs .NET CLR
* Structs are not part of the object system as they are in the .NET runtime.
	* No auto boxing for value types are supported (.NET has many easy to fall in syntax performance pitfalls here).
	* System.Object can never equal a 'struct', 'enum' or 'primitive' type.
	* Virtuals like 'MyStruct.GetType()' or 'MyEnum.GetType()' give compile time errors (use typeof instead).
	* Cannot bind a delegate to a structs non-static method.
* Interfaces are considered 'type-classes' and are compile time only.
	* Used for generics or general code consistency.
	* No casting to them or variable declarations of them.
* No up-casting performance loss in C and down-casting checks can be disabled for C output.
* Auto-Marshalling of managed types not supported.
	* Varies to much between platforms in contrast to .NET making writing portable code confusing.
	* Auto string marshalling has way to many implicits that depend on to many factors to keep track of.
	* Redundant allocations. If you want to pass the same string multiple times in multiple methods for example auto-marshaling it everytime doesn't make sense. Its far better to be explicit here and make that obvious by pre-marshalling the type once.
	* Portability. Forcing PInvokes to be used this way ensures code functions the same in all runtimes.

## Building
* Prerequisites
	* Visual Studios 2019 (VS for Mac / MonoDevelop or VSCode have not yet been tested)
	* .NET Core 5
	* .NET Compiler Platform SDK
* Run: CS2X.Core.Test proj in VS. This will build "PortableTestApp.csproj" to "TestOutput" folder
* NOTE: Early stages so nothing else is supported yet.
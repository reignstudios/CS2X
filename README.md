# CS2X (Currently Experimental)
Transpiles C# to non .NET languages. (Powered by Roslyn)<br>
If you're looking for IL2X: https://github.com/reignstudios/IL2X

## Goals
This project will focus on transpiling a C# subset for writing GPU programs.
* HLSL (DirectX Shader Assembly Language) [D3D9.0c +]
* ALS (DirectX Shader Assembly Language) [D3D8.0 - D3D9.0c]
* GLSL (OpenGL shading language) [OpenGL2.0 / GLES2 +]
* ARB (ARB assembly language) [legacy / homebrew systems]
* CG (Cg programming language) [PSVita, Nvidia / other]
* PSSL (PlayStation Shader Language) [PS4]
* MSL (Metal Shading Language) [macOS / iOS]
* AGAL (Adobe Pixel Bender and Adobe Graphics Assembly Language) [Flash: if useful]

## Project libraries
* CS2X.Core: .NET transpiler lib
* CS2X.CLI: CLI interface for CS2X.Core
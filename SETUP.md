# C++ Development Environment Setup

This guide explains how to prepare a C++ development environment for CODE MIND 2026 practical exercises.

## Requirements

- Visual Studio Code
- GCC / MinGW C++ Compiler
- C/C++ Extension for Visual Studio Code

## Verify Compiler Installation

Open your terminal and run:

```bash
g++ --version
```

If GCC is installed correctly, the compiler version will be displayed.

## Compile a C++ Program

Navigate to the directory containing your source file.

Example:

```bash
g++ main.cpp -o main
```

## Run on Windows

```powershell
.\main.exe
```

## Run on Linux

```bash
./main
```

## Troubleshooting

If the `g++` command is not recognized:

1. Check whether GCC or MinGW is installed.
2. Verify the compiler installation directory.
3. Ensure the compiler directory is included in the system PATH.
4. Restart the terminal and try again.

## Learning Materials

Refer to the README files inside each weekly directory for the corresponding learning materials and practical exercises.

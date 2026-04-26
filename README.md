## Overview
The project appears to be a simple C program designed for mathematical operations, specifically parsing and manipulating functions. The main features include parsing floating-point numbers, performing basic arithmetic operations, and potentially more complex mathematical manipulations such as differentiation.

## Features
- Parsing of floating-point numbers.
- Basic arithmetic operations.
- Potential support for function parsing, manipulation, and differentiation.

## Project Structure
The project structure includes several directories and files relevant to the development and execution of the program:

- `build/`: Directory where the executable files are produced.
- `src/`: Contains the source code files including `Main.c` and various header files.
  - `Main.c`: The entry point of the program, which currently includes commented-out code for function parsing and manipulation.

### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility

## Build & Run
The build process is managed using Makefiles specific to different operating systems:

- **Linux**: Use `Makefile.linux`
- **Windows**: Use `Makefile.windows`
- **Wine**: Use `Makefile.wine` for cross-compiling to Windows on Linux
- **WebAssembly (Emscripten)**: Use `Makefile.web`

### Build Process
To build the project, navigate to the project directory and use the appropriate Makefile:

```sh
# For Linux
make -f Makefile.linux all

# For Windows
make -f Makefile.windows all

# For Wine (Linux cross-compiling for Windows)
make -f Makefile.wine all

# For WebAssembly
make -f Makefile.web all
```

### Clean and Rebuild
To perform a clean build:

```sh
# For Linux
make -f Makefile.linux clean
make -f Makefile.linux all

# For Windows
make -f Makefile.windows clean
make -f Makefile.windows all

# For Wine (Linux cross-compiling for Windows)
make -f Makefile.wine clean
make -f Makefile.wine all

# For WebAssembly
make -f Makefile.web clean
make -f Makefile.web all
```

### Execute the Program
To run the program:

```sh
make -f Makefile.linux exe
```

This README provides a clear overview of the project, its features, and how to build and run it on different platforms.
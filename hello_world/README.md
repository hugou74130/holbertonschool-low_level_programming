<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/c_basics" rel="noopener">
 <img width=300px height=300px src="https://image.noelshack.com/fichiers/2025/46/1/1762797557-gemini-generated-image-s56jz3s56jz3s56j.jpg" alt="Project logo"></a>
</p>

<h3 align="center">c_basics - C Programming Fundamentals</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)


</div>

---

<p align="center"> Learn the fundamentals of C programming, from preprocessing to compilation and basic output.
    <br>
</p>

## 📝 Table of Contents
- [About](#about)
- [Getting Started](#getting_started)
- [Programs](#programs)
- [Usage](#usage)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>

This project covers the fundamental concepts of C programming, including the compilation process, preprocessing, and basic program output. You will learn how the C compiler works, how to use the preprocessor, and how to write simple programs that display information.

These foundational skills are essential for any C programmer and will help you understand what happens behind the scenes when you write and compile a C program. From source code to executable, you'll gain insight into each step of the compilation pipeline.

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

You will need:

```
- GCC (GNU Compiler Collection)
- Git
- Terminal or command line
- Basic understanding of Linux commands
```

### Installation

Clone and navigate to the c_basics directory:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/c_basics
```

## 📋 Programs <a name = "programs"></a>

### 0-preprocessor
A script that runs a C file through the C preprocessor and saves the output in another file. This shows what the preprocessor does before actual compilation.

```bash
./0-preprocessor main.c
# Creates main.i with all preprocessor directives expanded
```

Key concepts: Macro expansion, include file processing, conditional compilation

### 1-compiler
A script that compiles a C file into an object file without linking. This creates the intermediate .o file.

```bash
./1-compiler main.c
# Creates main.o (object file)
```

Key concepts: Compilation stages, object files, symbol tables

### 2-assembler
A script that compiles a C file into assembly code (.s file). Shows the assembly representation of your C code.

```bash
./2-assembler main.c
# Creates main.s (assembly file)
```

Key concepts: Assembly language, CPU instructions, low-level representation

### 3-name
A script that compiles a C file and names the executable with a custom name. Demonstrates the complete compilation and linking process.

```bash
./3-name main.c
# Creates an executable (with custom naming)
```

Key concepts: Linking, executable creation, naming conventions

### 4-puts.c
A simple C program that uses the `puts()` function to display text. Demonstrates basic output using the standard library.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts
./puts
# Output: Programming is like building a multilingual puzzle
```

Key concepts: Standard library functions, string handling, output streams

### 5-printf.c
Uses the `printf()` function to format and display text. Shows how to use one of the most powerful I/O functions in C.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c -o printf
./printf
# Output: with proper formatting
```

Key concepts: Format specifiers, variable output, formatted I/O

### 6-size.c
Prints the size of various data types on your system using the `sizeof` operator. Helps you understand memory layout and data type sizes.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-size.c -o size
./size
# Output: Displays sizes of int, long, long long, float, char, etc.
```

Key concepts: Memory management, data types, system-dependent sizes, `sizeof` operator

### 100-intel
A script that generates Intel assembly syntax instead of the default AT&T syntax. Shows how to customize the compilation output.

```bash
./100-intel main.c
# Creates main.s with Intel syntax
```

Key concepts: Assembly syntax variations, compiler flags, optimization

### 101-quote.c
A program that prints a specific quote (exactly as written) to the standard error output using `write()`. This demonstrates low-level I/O.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 101-quote.c -o quote
./quote
# Output: and that piece of art is useful" - Dora Korpar, 2015-10-19
```

Key concepts: Standard error stream (stderr), system calls, precise character output

## 🎈 Usage <a name="usage"></a>

### Compilation Pattern

For .c files, use the following compilation command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o program_name
./program_name
```

### Script Usage

For script files (0-preprocessor, 1-compiler, etc.), make them executable first:

```bash
chmod +x 0-preprocessor
./0-preprocessor main.c
```

### Understanding the Compilation Process

1. **Preprocessing** (0-preprocessor): Expand macros and includes
2. **Compilation** (2-assembler): Convert C code to assembly
3. **Assembly** (1-compiler): Convert assembly to object code
4. **Linking** (3-name): Link object files into executable

## 🔑 Key Concepts <a name = "key_concepts"></a>

- **Preprocessor Directives**: `#include`, `#define`, macro expansion
- **Compilation Stages**: Preprocessing → Compilation → Assembly → Linking
- **Standard Library Functions**: `puts()`, `printf()`, `write()`
- **Data Types and Sizes**: Using `sizeof` to understand memory
- **I/O Operations**: Output to stdout and stderr
- **Assembly Language**: Low-level representation of code
- **Compiler Flags**: `-Wall`, `-Werror`, `-Wextra`, `-pedantic`

## ⛏️ Built Using <a name = "built_using"></a>

- [C](https://en.wikipedia.org/wiki/C_(programming_language)) - Programming Language
- [GCC](https://gcc.gnu.org/) - C Compiler
- [Linux](https://www.linux.org/) - Operating System
- [Bash](https://www.gnu.org/software/bash/) - Shell Scripting

## ✍️ Authors <a name = "authors"></a>

- [@hugou74130](https://github.com/hugou74130) - Complete work

See also the list of [contributors](https://github.com/hugou74130/holbertonschool-low_level_programming/contributors) who participated in this project.

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Holberton School for the curriculum and educational resources
- The open-source community for development tools
- All mentors and peers who contributed to the success of this project


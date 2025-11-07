<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/argc_argv" rel="noopener">
 <img width=200px height=200px src="https://i.imgur.com/6wj0hh6.jpg" alt="Project logo"></a>
</p>

<h3 align="center">argc_argv - Command Line Arguments in C</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Learn how to handle command-line arguments in C using argc and argv parameters.
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

This project focuses on understanding and working with command-line arguments in C programming. The `argc` (argument count) and `argv` (argument vector) parameters are fundamental to creating interactive command-line programs that can receive input from users at runtime.

Through a series of practical exercises, you will learn how to access command-line arguments, count them, validate input, and build useful command-line tools. These skills are essential for systems programming and creating professional-grade utilities.

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

You will need:

```
- GCC (GNU Compiler Collection)
- Git
- Terminal or command line
- Basic understanding of C programming fundamentals
```

### Installation

Clone and navigate to the argc_argv directory:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/argc_argv
```

## 📋 Programs <a name = "programs"></a>

### 0-whatsmyname.c
Prints the program's own name (the value of argv[0]). This demonstrates how to access the first argument, which is always the program name.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o whatsmyname
./whatsmyname
```

### 1-args.c
Prints all command-line arguments passed to the program, each on a separate line. It shows how to iterate through the argv array.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-args.c -o args
./args Hello World From C
```

### 2-args.c
Displays all arguments with their count. This program combines argc and argv to show both the number of arguments and their values.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-args.c -o args2
./args2 one two three
```

### 3-mul.c
Multiplies two numbers passed as command-line arguments. This demonstrates converting string arguments to integers and performing calculations.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-mul.c -o mul
./mul 5 3
```

### 4-add.c
Adds all numbers passed as command-line arguments together. This shows how to handle multiple arguments and accumulate results.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-add.c -o add
./add 1 2 3 4 5
```

## 🎈 Usage <a name="usage"></a>

Each program accepts command-line arguments. The basic syntax is:

```bash
./program_name argument1 argument2 argument3 ...
```

Key concepts:
- **argc**: The count of arguments (including the program name)
- **argv[0]**: Always the program name
- **argv[1]**, **argv[2]**, etc.: The actual user-provided arguments
- **argv[argc]**: Always NULL (end of array marker)

Example workflow:

```bash
# Compile all programs
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o whatsmyname
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-args.c -o args
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-mul.c -o mul

# Run them with different arguments
./whatsmyname
./args Hello Beautiful World
./mul 12 5
```

## ⛏️ Built Using <a name = "built_using"></a>

- [C](https://en.wikipedia.org/wiki/C_(programming_language)) - Programming Language
- [GCC](https://gcc.gnu.org/) - C Compiler
- [Linux](https://www.linux.org/) - Operating System

## ✍️ Authors <a name = "authors"></a>

- [@hugou74130](https://github.com/hugou74130) - Complete work

See also the list of [contributors](https://github.com/hugou74130/holbertonschool-low_level_programming/contributors) who participated in this project.

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Holberton School for the curriculum and educational resources
- The open-source community for development tools
- All mentors and peers who contributed to the success of this project

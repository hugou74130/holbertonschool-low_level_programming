<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming" rel="noopener">
<img width=300px height=300px src="https://image.noelshack.com/fichiers/2025/47/5/1763714792-gemini-generated-image-cqark1cqark1cqar.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Holberton School - Variadic Functions</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)

</div>

---

<p align="center">
This directory contains C programming exercises focused on **variadic functions**, a fundamental concept in systems programming at **Holberton School**.
Learn how to work with functions that accept a variable number of arguments using the stdarg.h library.
</p>

---

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Installing](#installing)
- [Tests](#tests)
- [Usage](#usage)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgements](#acknowledgement)

---

## 🧐 About <a name = "about"></a>

The **Variadic Functions** module focuses on understanding how to create functions that accept a variable number of arguments. This is a critical skill for systems programming and is used extensively in standard library functions like `printf()`.

Key concepts covered:

- Understanding the `...` (ellipsis) syntax in function prototypes
- Working with the `stdarg.h` library (`va_start`, `va_arg`, `va_end` macros)
- Handling unknown argument types and counts
- Building flexible and reusable functions
- Practical applications like custom print functions

This module teaches you to write robust functions that can handle dynamic argument lists, a fundamental pattern in professional C programming.

---

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

You need an environment capable of compiling C code.
On Ubuntu (or any Linux system), simply install:

```bash
sudo apt update
sudo apt install build-essential
```

This installs `gcc`, `make`, and the required libraries.

### Installing <a name = "installing"></a>

Clone the repository to your local machine:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/variadic_functions
```

Each file contains one or more C functions along with a test file `main.c`.

To compile a program, run for example:

```bash
gcc -Wall -Werror -Wextra -pedantic variadic_functions.c main.c -o program
```

Then execute it:

```bash
./program
```

---

## 🔧 Tests <a name = "tests"></a>

Tests are performed using the `main.c` files provided with each project.
To run tests:

```bash
gcc -Wall -Werror -Wextra -pedantic my_function.c main.c -o test
./test
```

You can also write your own test files to verify function behavior with different argument counts and types.

---

## 🎈 Usage <a name="usage"></a>

This directory can be used as:

- A reference for learning **variadic functions in C**
- A foundation for understanding `printf()` and similar library functions
- A learning tool for **advanced function design patterns**
- A base for building custom formatting and printing utilities

Example usage pattern:

```c
#include <stdarg.h>

// Define a variadic function
int sum_all(int count, ...)
{
    va_list args;
    int sum = 0;
    int i;

    va_start(args, count);
    for (i = 0; i < count; i++)
        sum += va_arg(args, int);
    va_end(args);

    return (sum);
}

// Use it with any number of arguments
int result = sum_all(3, 10, 20, 30);  // Returns 60
```

---

## 🚀 Deployment <a name = "deployment"></a>

No deployment required. Programs are executed directly from the command line after compilation.

These are educational examples and can be integrated into larger C projects or used as reference implementations.

---

## ⛏️ Built Using <a name = "built_using"></a>

- [C Language](https://en.wikipedia.org/wiki/C_(programming_language)) – Core language
- [GCC](https://gcc.gnu.org/) – Compiler
- [stdarg.h](https://man7.org/linux/man-pages/man3/stdarg.3.html) – Variable arguments library
- [Make](https://www.gnu.org/software/make/) – Build automation tool
- [Ubuntu](https://ubuntu.com/) – Recommended development environment

---

## ✍️ Authors <a name = "authors"></a>

- [@hugou74130](https://github.com/hugou74130) – Development, exercises, and testing
- Inspired by the **Holberton School** curriculum

---

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Holberton School for the projects and educational resources
- Fellow students and community members for their feedback and support
- Official C documentation and GCC resources
- The C standard library reference for variadic functions

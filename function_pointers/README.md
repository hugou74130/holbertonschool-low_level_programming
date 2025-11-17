<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/function_pointers" rel="noopener">
<img width=300px height=300px src="https://image.noelshack.com/fichiers/2025/47/1/1763395989-gemini-generated-image-1031hk1031hk1031.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Holberton School - Function Pointers</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)

</div>

---

<p align="center">
This directory contains C programming exercises focused on <b>Function Pointers</b> as part of the <b>Low Level Programming</b> curriculum at <b>Holberton School</b>.
It covers advanced pointer concepts: storing function addresses, passing functions as parameters, and arrays of function pointers.
</p>

---

## 📝 Table of Contents
- [About](#about)
- [Getting Started](#getting_started)
- [Project Structure](#project_structure)
- [Compilation](#compilation)
- [Usage](#usage)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

---

## 🧐 About <a name = "about"></a>

The **Function Pointers** module focuses on one of the most powerful concepts in C: **pointers to functions**.

Key topics covered include:

- Function pointer syntax and declaration
- Passing functions as parameters to other functions
- Returning pointers to functions
- Arrays of function pointers
- Callbacks and higher-order functions
- Practical applications (sorting, filtering, mapping)

This knowledge is essential for understanding callbacks, event handlers, and advanced data structure implementations.

---

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

You need a C compiler and build tools installed on your system.

On Ubuntu (or any Linux distribution):

```bash
sudo apt update
sudo apt install build-essential
```

This installs `gcc`, `make`, and required development libraries.

### Installing

Clone the repository to your local machine:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/function_pointers
```

Each file in this directory contains one or more functions demonstrating function pointer concepts.

---

## 📁 Project Structure <a name = "project_structure"></a>

```
function_pointers/
├── 0-print_name.c          # Basic function pointer declaration and usage
├── 1-array_iterator.c      # Function pointers as callback parameters
├── 2-int_index.c           # Searching arrays using function pointers
├── 3-calc.c                # Calculator using array of function pointers
├── 3-op_functions.c        # Calculator operation functions
├── 3-get_op_func.c         # Function pointer selection logic
└── function_pointers.h     # Header file with function prototypes
```

---

## 🔨 Compilation <a name = "compilation"></a>

To compile a single exercise:

```bash
gcc -Wall -Werror -Wextra -pedantic exercise.c -o exercise
```

To compile with a header file:

```bash
gcc -Wall -Werror -Wextra -pedantic -I. main.c exercise.c -o program
```

Then execute:

```bash
./program
```

---

## 🎈 Usage <a name="usage"></a>

### Example: Basic Function Pointer

```c
#include <stdio.h>

void say_hello(char *name)
{
    printf("Hello, %s!\n", name);
}

int main(void)
{
    void (*fp)(char *) = say_hello;  // Declare function pointer
    fp("World");                      // Call through pointer
    return (0);
}
```

### Example: Array of Function Pointers

```c
int (*operations[])(int, int) = {add, subtract, multiply, divide};
```

This repository can be used as:

- A learning resource for **function pointer concepts**
- Practice material for **callback functions** and **higher-order functions**
- Foundation for **sorting algorithms** (qsort, custom implementations)
- Reference for **event-driven programming** patterns

---

## ⛏️ Built Using <a name = "built_using"></a>

- [C Language](https://en.wikipedia.org/wiki/C_(programming_language)) – Core language
- [GCC](https://gcc.gnu.org/) – Compiler
- [Ubuntu](https://ubuntu.com/) – Development environment

---

## ✍️ Authors <a name = "authors"></a>

- [@hugou74130](https://github.com/hugou74130) – Development and exercises
- Inspired by the **Holberton School** curriculum

---

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Holberton School for the projects and educational resources
- Fellow students and community members for their feedback
- Official C documentation and GCC resources

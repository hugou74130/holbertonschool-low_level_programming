<p align="center">
  <a href="" rel="noopener">
 <img width=300px height=300px src="https://image.noelshack.com/fichiers/2025/46/1/1762798000-gemini-generated-image-rdonawrdonawrdon.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Holberton School - Low Level Programming</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)

</div>

---

<p align="center">
This repository contains all C programming projects completed as part of the **Low Level Programming** curriculum at **Holberton School**.
It covers the fundamentals of system programming: memory, pointers, structures, compilation, and basic algorithms.
</p>

---

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Deployment](#deployment)
- [Usage](#usage)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

---

## 🧐 About <a name = "about"></a>

The **Low Level Programming** track focuses on learning the foundations of the **C language** and the underlying logic of how computers work.
Topics covered include:
- Memory management (`malloc`, `free`)
- Pointers and arrays
- Structures and linked lists
- File I/O and system calls
- Sorting algorithms and data manipulation
- Compilation and linking concepts

Each directory in this repository corresponds to an individual project or module.

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

### Installing

Clone the repository to your local machine:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming
```

Each folder contains one or more `.c` files along with a test file `main.c`.
To compile a program, run for example:

```bash
gcc -Wall -Werror -Wextra -pedantic file.c main.c -o program
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
gcc -Wall -Werror -Wextra -pedantic my_file.c main.c -o test
./test
```

You can also write your own test files to verify function behavior.

---

## 🎈 Usage <a name="usage"></a>

This repository can be used as:
- A reference for learning **C programming**.
- A support tool for practicing **algorithmic logic**.
- A base for other system-level projects (e.g., mini-shell, memory management, etc.).

---

## 🚀 Deployment <a name = "deployment"></a>

No deployment required:
Programs are executed directly from the **command line** after compilation.

---

## ⛏️ Built Using <a name = "built_using"></a>

- [C Language](https://en.wikipedia.org/wiki/C_(programming_language)) – Core language
- [GCC](https://gcc.gnu.org/) – Compiler
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
- Official documentation of C and GCC

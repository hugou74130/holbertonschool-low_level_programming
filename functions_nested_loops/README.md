<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/functions_nested_loops" rel="noopener">
 <img width=200px height=200px src="https://i.imgur.com/6wj0hh6.jpg" alt="Project logo"></a>
</p>

<h3 align="center">functions_nested_loops - Functions and Nested Loops in C</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Master functions, nested loops, and fundamental programming patterns in C.
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

This project focuses on mastering functions and nested loops in C programming. You will learn how to write reusable functions, work with loops, perform mathematical operations, and understand control flow in programming.

Through practical exercises, you will develop skills in creating modular code, implementing algorithms, validating input, and building increasingly complex programs. These are fundamental building blocks for any C programmer.

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

Clone and navigate to the functions_nested_loops directory:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/functions_nested_loops
```

## 📋 Programs <a name = "programs"></a>

### 0-putchar.c
Prints the string "_putchar" using only the _putchar function. This is your first introduction to custom functions.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-putchar.c _putchar.c -o putchar
./putchar
```

### 1-alphabet.c
Prints the alphabet in lowercase (a-z) using a function. Demonstrates the use of loops within functions.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-alphabet.c _putchar.c -o alphabet
./alphabet
```

### 2-print_alphabet_x10.c
Prints the alphabet 10 times, each on a new line. Shows nested loops working together.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-print_alphabet_x10.c _putchar.c -o alphabet_x10
./alphabet_x10
```

### 3-islower.c
Checks if a character is lowercase (a-z). Returns 1 if true, 0 if false. Demonstrates conditional logic in functions.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-islower.c _putchar.c -o islower
./islower
```

### 4-isalpha.c
Checks if a character is alphabetic (a-z or A-Z). Returns 1 if true, 0 if false. Shows character classification.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-isalpha.c _putchar.c -o isalpha
./isalpha
```

### 5-sign.c
Prints the sign of a number: positive (+), negative (-), or zero (0). Demonstrates the use of if-else statements in functions.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-sign.c _putchar.c -o sign
./sign
```

### 6-abs.c
Computes the absolute value of a number. Shows how to return values from functions.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-abs.c _putchar.c -o abs
./abs
```

### 7-print_last_digit.c
Extracts and prints the last digit of a number. Demonstrates modulo operator usage.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 7-print_last_digit.c _putchar.c -o last_digit
./last_digit
```

### 8-24_hours.c
Prints every minute of a 24-hour day (00:00 to 23:59). Shows nested loops for time calculations.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 8-24_hours.c _putchar.c -o 24_hours
./24_hours
```

### 9-times_table.c
Prints the 9 times multiplication table (0 to 9). Uses nested loops to create formatted output.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 9-times_table.c _putchar.c -o times_table
./times_table
```

### 10-add.c
Adds two numbers together. A simple function that takes two parameters and returns their sum.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 10-add.c _putchar.c -o add
./add
```

### 11-print_to_98.c
Prints all natural numbers from n to 98. Demonstrates loops with different starting points.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 11-print_to_98.c _putchar.c -o print_to_98
./print_to_98
```

### 100-times_table.c
Prints the n times multiplication table (advanced version). Takes a parameter and generates a custom times table.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 100-times_table.c _putchar.c -o times_table_n
./times_table_n
```

### 101-natural.c
Calculates the sum of all multiples of 3 or 5 below a given number. Demonstrates algorithmic thinking.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 101-natural.c _putchar.c -o natural
./natural
```

### 102-fibonacci.c
Prints the Fibonacci sequence up to 50 Fibonacci numbers. Shows recursion and sequence generation.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 102-fibonacci.c _putchar.c -o fibonacci
./fibonacci
```

### 103-fibonacci.c
Prints Fibonacci numbers whose values do not exceed 4,000,000. Demonstrates conditional loops.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 103-fibonacci.c _putchar.c -o fibonacci_limit
./fibonacci_limit
```

### 104-fibonacci.c
Handles larger Fibonacci numbers using different data types. Shows how to work with big integers.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 104-fibonacci.c _putchar.c -o fibonacci_large
./fibonacci_large
```

## 🎈 Usage <a name="usage"></a>

General compilation pattern:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 program.c _putchar.c -o program_name
./program_name
```

Key concepts covered:
- **Functions**: Creating reusable blocks of code
- **Nested Loops**: Loops within loops for complex iterations
- **Control Flow**: if-else statements and conditional logic
- **Return Values**: Functions returning results
- **Parameters**: Functions accepting input values
- **Modular Code**: Breaking problems into smaller functions

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

<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/more_functions_nested_loops" rel="noopener">
 <img width=300px height=300px src="https://image.noelshack.com/fichiers/2025/46/1/1762797453-gemini-generated-image-prnih9prnih9prni.jpg" alt="Project logo"></a>
</p>

<h3 align="center">more_functions_nested_loops - Advanced Functions and Loops</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Advanced exercises on functions, nested loops, and pattern printing in C.
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

This project builds upon basic functions and loops with more advanced challenges. You will create functions for character validation, implement complex nested loop patterns, solve algorithmic problems, and develop visual output programs that draw shapes and patterns.

These exercises develop problem-solving skills and help you understand how to break complex problems into manageable functions. You'll work with mathematical concepts, control flow optimization, and creative use of loops.

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

You will need:

```
- GCC (GNU Compiler Collection)
- Git
- Terminal or command line
- Understanding of functions and nested loops
```

### Installation

Clone and navigate to the more_functions_nested_loops directory:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/more_functions_nested_loops
```

## 📋 Programs <a name = "programs"></a>

### 0-isupper.c
Checks if a character is uppercase (A-Z). Returns 1 if true, 0 if false. An essential character classification function.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-isupper.c main.c -o isupper
./isupper
```

Key concepts: Character validation, ASCII values, boolean return values

### 1-isdigit.c
Checks if a character is a digit (0-9). Returns 1 if true, 0 if false. Similar to standard library `isdigit()`.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-isdigit.c main.c -o isdigit
./isdigit
```

Key concepts: Digit classification, character range checking

### 2-mul.c
Multiplies two integers and returns the result. A basic arithmetic function for understanding parameter passing and return values.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-mul.c main.c -o mul
./mul
```

Key concepts: Multiplication, function parameters, integer arithmetic

### 3-print_numbers.c
Prints all digits from 0 to 9 using nested loops. Each digit is printed on the same line.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-print_numbers.c main.c -o print_numbers
./print_numbers
# Output: 0123456789
```

Key concepts: Loop iteration, digit printing, character conversion

### 4-print_most_numbers.c
Prints all digits from 0 to 9 except 2 and 4. Demonstrates conditional skipping within loops.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-print_most_numbers.c main.c -o print_most_numbers
./print_most_numbers
# Output: 01356789
```

Key concepts: Conditional loops, skip logic, loop control

### 5-more_numbers.c
Prints digits 0 to 14 ten times, each on a new line. Shows how to handle multi-digit numbers in a loop.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-more_numbers.c main.c -o more_numbers
./more_numbers
# Output: 0123456789101112131410123456789101112131...
```

Key concepts: Nested loops, number formatting, division and modulo

### 6-print_line.c
Draws a horizontal line of a specified length using the '#' character. Demonstrates simple shape drawing.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-print_line.c main.c -o print_line
./print_line
# Output: ############ (length determined by function parameter)
```

Key concepts: Pattern printing, loop-based graphics, character repetition

### 7-print_diagonal.c
Draws a diagonal line using the '\' character and spaces. Shows coordinate-based pattern generation.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 7-print_diagonal.c main.c -o print_diagonal
./print_diagonal
# Output: 
# \
#  \
#   \
```

Key concepts: Nested loops for positioning, spacing, diagonal patterns

### 8-print_square.c
Draws a square of a specified size using '#' characters. A classic nested loop pattern exercise.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 8-print_square.c main.c -o print_square
./print_square
# Output:
# ####
# ####
# ####
# ####
```

Key concepts: 2D pattern generation, nested loops, grid creation

### 9-fizz_buzz.c
Implements the FizzBuzz algorithm. Prints numbers from 1 to 100, but replaces multiples of 3 with "Fizz", multiples of 5 with "Buzz", and multiples of both with "FizzBuzz".

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 9-fizz_buzz.c main.c -o fizz_buzz
./fizz_buzz
# Output: 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz ... FizzBuzz
```

Key concepts: Conditional logic, modulo operator, string output, algorithm implementation

### 10-print_triangle.c
Draws a right-angled triangle of a specified size using '#' characters. A more complex pattern combining nested loops and spacing.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 10-print_triangle.c main.c -o print_triangle
./print_triangle
# Output:
#         #
#        ##
#       ###
#      ####
#     #####
```

Key concepts: Complex nested loops, dynamic spacing, progressive patterns

## 🎈 Usage <a name="usage"></a>

### General Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c main.c -o program_name
./program_name
```

### Running the Programs

Most programs require including `main.h` and linking with a main file. The typical usage pattern is:

```bash
# Compile with main.c which calls the functions
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 function.c main.c -o program
./program
```

## 🔑 Key Concepts <a name = "key_concepts"></a>

- **Character Validation**: Checking character properties (uppercase, digit, etc.)
- **Nested Loops**: Loops within loops for 2D pattern generation
- **Pattern Drawing**: Creating visual output using characters
- **Algorithm Implementation**: FizzBuzz and other algorithmic problems
- **Loop Control**: Skip statements, conditional iterations
- **Arithmetic Operations**: Multiplication, division, modulo
- **Grid-Based Output**: Coordinate systems for positioning characters
- **Spacing and Formatting**: Creating aligned patterns

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


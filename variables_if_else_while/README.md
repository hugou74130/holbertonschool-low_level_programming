<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/0x01-hello_world" rel="noopener">
 <img width=300px height=300px src="https://image.noelshack.com/fichiers/2025/46/1/1762797918-gemini-generated-image-5zcmp5zcmp5zcmp5.jpg" alt="Project logo"></a>
</p>

<h3 align="center">0x01-hello_world - Getting Started with C</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)


</div>

---

<p align="center"> Your first steps in C programming: printing, conditionals, and basic loops.
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

This is the starting point of your C programming journey with Holberton School. These beginner exercises focus on fundamental concepts: conditional statements (if/else), basic loops, character and number output, and simple algorithms. 

You'll learn how to compile and run C programs, use variables, work with standard library functions like `printf()`, and implement basic control flow. These foundational skills are essential before moving on to more complex programming concepts.

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

You will need:

```
- GCC (GNU Compiler Collection)
- Git
- Terminal or command line
- Text editor or IDE
```

### Installation

Clone and navigate to the 0x01-hello_world directory:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/0x01-hello_world
```

## 📋 Programs <a name = "programs"></a>

### 0-positive_or_negative.c
Determines whether a randomly assigned number is positive, negative, or zero. Your first introduction to conditional statements (if/else).

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-positive_or_negative.c -o positive_or_negative
./positive_or_negative
# Output: [number] is positive/negative/zero
```

Key concepts: Conditional statements, comparison operators, random number assignment

**What it teaches:**
- Using `if`, `else if`, and `else` statements
- Comparison operators: `>`, `<`, `==`
- Variable assignment and usage

### 1-last_digit.c
Prints the last digit of a randomly assigned number and tells whether it is greater than 5, less than 6 but not 0, or 0.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-last_digit.c -o last_digit
./last_digit
# Output: Last digit of [number] is [digit] and is [condition]
```

Key concepts: Modulo operator, nested conditionals, digit extraction

**What it teaches:**
- Using the modulo operator (%) to extract digits
- Multiple conditional branches
- Formatting output with printf()

### 2-print_alphabet.c
Prints the alphabet in lowercase (a-z) using a loop. A simple introduction to loops.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-print_alphabet.c -o print_alphabet
./print_alphabet
# Output: abcdefghijklmnopqrstuvwxyz
```

Key concepts: For loops, character output, ASCII values

**What it teaches:**
- Using `for` loops for iteration
- Character printing without newlines
- Loop variable management

### 3-print_alphabets.c
Prints the alphabet in lowercase, then in uppercase (a-zA-Z). Demonstrates consecutive loops.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-print_alphabets.c -o print_alphabets
./print_alphabets
# Output: abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
```

Key concepts: Multiple loops, character ranges, ASCII value differences

**What it teaches:**
- Chaining multiple loops together
- Understanding case differences in ASCII
- Loop structure and control

### 4-print_alphabt.c
Prints the alphabet in lowercase except for the letters q and z. Shows conditional logic within loops.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-print_alphabt.c -o print_alphabt
./print_alphabt
# Output: abcdefghijklmnoprstuvwxyw
```

Key concepts: Conditional statements in loops, character skipping

**What it teaches:**
- Using `if` statements inside `for` loops
- Skip logic to exclude specific characters
- Loop continuation and modification

### 5-print_numbers.c
Prints all digits from 0 to 9 on a single line. Your first numeric loop.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-print_numbers.c -o print_numbers
./print_numbers
# Output: 0123456789
```

Key concepts: Numeric loops, digit printing, putchar()

**What it teaches:**
- Iterating through numeric ranges
- Using putchar() for single character output
- Number to character conversion

### 6-print_numberz.c
Prints numbers from 0 to 9 except 2 and 4. Combines loops with conditional skipping.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-print_numberz.c -o print_numberz
./print_numberz
# Output: 0135678901357890135678901357890...
```

Key concepts: Loop with conditions, number skipping

**What it teaches:**
- Selecting which numbers to print
- Skip logic for specific values
- Loop flow control

### 7-print_tebahpla.c
Prints the alphabet in reverse order (z to a). Demonstrates backward iteration.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 7-print_tebahpla.c -o print_tebahpla
./print_tebahpla
# Output: zyxwvutsrqponmlkjihgfedcba
```

Key concepts: Reverse loops, decrementing loop variable

**What it teaches:**
- Using decrementing loops
- Starting from high values and going down
- Backward character output

### 8-print_base16.c
Prints all hexadecimal digits in lowercase (0-9, a-f). Introduces the hexadecimal number system.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 8-print_base16.c -o print_base16
./print_base16
# Output: 0123456789abcdef
```

Key concepts: Hexadecimal representation, character ranges, nested loops

**What it teaches:**
- Understanding hexadecimal (base 16)
- Combining numeric and alphabetic characters
- Extended character sequences

### 9-print_comb.c
Prints all possible single-digit combinations separated by commas and spaces. A classic beginner challenge.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 9-print_comb.c -o print_comb
./print_comb
# Output: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
```

Key concepts: Loop with conditional formatting, separator logic

**What it teaches:**
- Adding separators (commas and spaces)
- Conditional output based on loop position
- Formatting program output properly

### 100-print_comb3.c
Prints all possible combinations of two different digits in ascending order. Introduces nested loops for combinations.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 100-print_comb3.c -o print_comb3
./print_comb3
# Output: 01, 02, 03, ..., 89
```

Key concepts: Nested loops, combination generation, ascending order

**What it teaches:**
- Using nested loops to generate combinations
- Avoiding duplicate combinations
- Maintaining ascending order

### 101-print_comb4.c
Prints all possible combinations of three different digits in ascending order.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 101-print_comb4.c -o print_comb4
./print_comb4
# Output: 012, 013, 014, ..., 789
```

Key concepts: Triple nested loops, three-digit combinations

**What it teaches:**
- Handling three levels of nesting
- Preventing duplicate three-digit combinations
- Complex loop control

### 102-print_comb5.c
Prints all possible combinations of two two-digit numbers in ascending order. The most complex combination program.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 102-print_comb5.c -o print_comb5
./print_comb5
# Output: 01 02, 01 03, 01 04, ..., 98 99
```

Key concepts: Complex nested loops, two-number combinations, formatting

**What it teaches:**
- Managing four levels of loop nesting
- Creating combinations of two-digit numbers
- Advanced formatting with spaces and commas

## 🎈 Usage <a name="usage"></a>

### General Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o program_name
./program_name
```

### Understanding the Compiler Flags

- `-Wall`: Enable all common warning messages
- `-Werror`: Treat warnings as errors
- `-Wextra`: Enable extra warning messages
- `-pedantic`: Strictly conform to C standards
- `-std=gnu89`: Use the GNU89 C standard

## 🔑 Key Concepts <a name = "key_concepts"></a>

- **Conditional Statements**: `if`, `else if`, `else` for decision making
- **Comparison Operators**: `<`, `>`, `==`, `!=`, `<=`, `>=`
- **Loops**: `for`, `while` for repetition
- **Loop Variables**: Initialization, condition, increment
- **Character Output**: `putchar()`, `printf()` for printing
- **ASCII Values**: Understanding character-to-number conversion
- **Modulo Operator**: Using `%` for remainder calculations
- **Logical Operators**: `&&` (AND), `||` (OR), `!` (NOT)
- **Nested Loops**: Loops within loops for combinations
- **Formatting Output**: Proper spacing and separators

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


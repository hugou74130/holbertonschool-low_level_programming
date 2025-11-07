<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/recursion" rel="noopener">
 <img width=200px height=200px src="https://i.imgur.com/6wj0hh6.jpg" alt="Project logo"></a>
</p>

<h3 align="center">recursion - Recursion in C Programming</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Master recursion: functions that call themselves to solve complex problems elegantly.
    <br> 
</p>

## 📝 Table of Contents
- [About](#about)
- [Getting Started](#getting_started)
- [Programs](#programs)
- [Usage](#usage)
- [Recursion Concepts](#concepts)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>

Recursion is a powerful programming technique where a function calls itself to solve a problem by breaking it down into smaller, similar subproblems. This project teaches you how to think recursively and implement solutions to classic algorithmic problems using recursive approaches.

Through practical exercises, you will learn how to write base cases to stop recursion, how to make progress toward the base case with each recursive call, and how to use the call stack efficiently. Understanding recursion is essential for working with data structures like trees and graphs, and for writing elegant algorithms.

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

You will need:

```
- GCC (GNU Compiler Collection)
- Git
- Terminal or command line
- Understanding of functions and the call stack
```

### Installation

Clone and navigate to the recursion directory:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/recursion
```

## 📋 Programs <a name = "programs"></a>

### 0-puts_recursion.c
Prints a string recursively, one character at a time. A simple introduction to recursion where each call prints one character and then recursively calls itself with the next character.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-puts_recursion.c main.c -o puts_recursion
./puts_recursion
```

Key concepts: Base case (null terminator), recursive call, character iteration, string printing

**How it works:**
- Base case: When you reach the null terminator ('\0'), stop
- Recursive case: Print current character, then call recursively on the next character

### 1-print_rev_recursion.c
Prints a string in reverse order using recursion. By making the recursive call first, then printing, you reverse the output.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-print_rev_recursion.c main.c -o print_rev_recursion
./print_rev_recursion
# Input: "Hello" -> Output: "olleH"
```

Key concepts: Call stack ordering, post-order processing, string reversal

**How it works:**
- Base case: When you reach the start of string, stop
- Recursive case: Call recursively, then print current character
- The order of operations reverses the output

### 2-strlen_recursion.c
Calculates the length of a string recursively. Each recursive call counts one character and moves to the next.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-strlen_recursion.c main.c -o strlen_recursion
./strlen_recursion
```

Key concepts: Counting with recursion, accumulation through return values, base case detection

**How it works:**
- Base case: Return 0 when you reach the null terminator
- Recursive case: Return 1 + length of the rest of the string
- Each return adds up to give total length

### 3-factorial.c
Calculates the factorial of a number using recursion. For example, 5! = 5 × 4 × 3 × 2 × 1 = 120.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-factorial.c main.c -o factorial
./factorial
# Input: 5 -> Output: 120
```

Key concepts: Mathematical recursion, multiplication accumulation, base case for small numbers

**How it works:**
- Base case: Return 1 if n is 0 or 1
- Recursive case: Return n × factorial(n-1)
- The recursion multiplies decreasing numbers until reaching 1

### 4-pow_recursion.c
Calculates the power of a number (base raised to exponent) recursively. For example, 2^10 = 1024.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-pow_recursion.c main.c -o pow_recursion
./pow_recursion
# Input: 2, 10 -> Output: 1024
```

Key concepts: Exponentiation via recursion, repeated multiplication, handling edge cases

**How it works:**
- Base case: Return 1 if exponent is 0
- Recursive case: Return base × pow(base, exp-1)
- Each call multiplies the base and decreases the exponent

### 5-sqrt_recursion.c
Calculates the natural square root of a number recursively using binary search technique. Returns the natural square root of a number, or -1 if the number is not a perfect square.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-sqrt_recursion.c main.c -o sqrt_recursion
./sqrt_recursion
# Input: 16 -> Output: 4
# Input: 17 -> Output: -1 (not a perfect square)
```

Key concepts: Binary search via recursion, mathematical algorithms, optimization

**How it works:**
- Base case: Return the answer when found or -1 if impossible
- Recursive case: Search in a narrowed range by calling recursively with adjusted values
- Uses helper functions to maintain search boundaries

### 6-is_prime_number.c
Determines if a number is prime by using recursion to check divisibility. A prime number is only divisible by 1 and itself.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-is_prime_number.c main.c -o is_prime_number
./is_prime_number
# Input: 7 -> Output: 1 (prime)
# Input: 10 -> Output: 0 (not prime)
```

Key concepts: Number theory, divisibility checking, recursive validation

**How it works:**
- Base case: Return 1 if checking divisor reaches the number (it's prime)
- Base case: Return 0 if found any divisor less than the number (not prime)
- Recursive case: Check next potential divisor
- Numbers less than 2 are not prime

## 🎈 Usage <a name="usage"></a>

### General Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c main.c -o program_name
./program_name
```

### Understanding Recursion

A recursive function needs:
1. **Base Case**: The condition that stops the recursion
2. **Recursive Case**: The call to itself with modified parameters that move toward the base case

Example pattern:
```c
int function(int n) {
    if (n <= 0)          // Base case
        return something;
    return function(n-1); // Recursive case
}
```

## 🔑 Key Concepts <a name = "concepts"></a>

- **Base Case**: The condition that terminates recursion and prevents infinite loops
- **Recursive Case**: The call to the function itself with modified parameters
- **Call Stack**: The computer's memory of function calls waiting to complete
- **Progress Toward Base Case**: Each recursive call must move closer to the base case
- **Return Values**: Building up results through multiple returns
- **Stack Overflow**: What happens if recursion goes too deep without reaching base case
- **Pre-order Processing**: Operations performed before recursive calls
- **Post-order Processing**: Operations performed after recursive calls
- **Tail Recursion**: Recursion where the function call is the last operation
- **Mutual Recursion**: Functions that call each other

### Advantages of Recursion
- More elegant and readable for certain problems (trees, fractals, divide-and-conquer)
- Natural representation of recursive data structures
- Simpler logic for problems with recursive structure

### Disadvantages of Recursion
- Higher memory usage due to call stack
- Slower than iterative solutions
- Risk of stack overflow with deep recursion
- Can be harder to debug

## 🧮 Algorithm Complexity

- **0-puts_recursion.c**: O(n) time, O(n) space (n = string length)
- **1-print_rev_recursion.c**: O(n) time, O(n) space (n = string length)
- **2-strlen_recursion.c**: O(n) time, O(n) space (n = string length)
- **3-factorial.c**: O(n) time, O(n) space (n = input number)
- **4-pow_recursion.c**: O(exp) time, O(exp) space
- **5-sqrt_recursion.c**: O(log n) time, O(log n) space (binary search)
- **6-is_prime_number.c**: O(√n) time, O(√n) space (divisor checking)

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

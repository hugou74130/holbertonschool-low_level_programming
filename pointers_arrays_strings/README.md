<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/pointers_arrays_strings" rel="noopener">
 <img width=200px height=200px src="https://image.noelshack.com/fichiers/2025/46/1/1762797764-gemini-generated-image-p74trdp74trdp74t.jpg" alt="Project logo"></a>
</p>

<h3 align="center">pointers_arrays_strings - Pointers, Arrays, and String Manipulation</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)


</div>

---

<p align="center"> Master pointers, arrays, and string manipulation in C programming.
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

This project is crucial for mastering C programming fundamentals. You will learn to work with pointers (addresses and dereferencing), arrays (multi-dimensional and single), and strings (creation, manipulation, comparison). These concepts are the backbone of systems programming and memory management in C.

Through practical exercises, you'll understand memory addresses, pass by reference, dynamic memory concepts, and implement classic string manipulation functions. This knowledge is essential for writing efficient C programs and understanding how modern programming languages handle memory.

## 🏁 Getting Started <a name = "getting_started"></a>

### Prerequisites

You will need:

```
- GCC (GNU Compiler Collection)
- Git
- Terminal or command line
- Understanding of basic C syntax and functions
```

### Installation

Clone and navigate to the pointers_arrays_strings directory:

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/pointers_arrays_strings
```

## 📋 Programs <a name = "programs"></a>

### Pointer Manipulation

#### 0-reset_to_98.c
Takes a pointer to an int and sets the value it points to as 98. Demonstrates dereferencing pointers and modifying values through references.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-reset_to_98.c main.c -o reset_to_98
./reset_to_98
```

Key concepts: Pointer dereferencing, pass by reference, memory modification

#### 1-swap.c
Swaps the values of two integers using pointers. Shows how to exchange variable values without returning multiple values.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-swap.c main.c -o swap
./swap
```

Key concepts: Pointer parameters, value swapping, temporary variables

### Array Reversal

#### 4-rev_array.c
Reverses the content of an array of integers in place. Demonstrates array manipulation and two-pointer technique.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-rev_array.c main.c -o rev_array
./rev_array
```

Key concepts: Array indexing, in-place reversal, two-pointer approach

### String Output and Manipulation

#### 2-strlen.c
Calculates and returns the length of a string. A custom implementation of the standard `strlen()` function.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-strlen.c main.c -o strlen
./strlen
```

Key concepts: String traversal, null terminator, character counting

#### 3-puts.c
Prints a string followed by a newline, without using `printf()`. Similar to the standard `puts()` function.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-puts.c main.c -o puts
./puts
```

Key concepts: String printing, character iteration, newline handling

#### 4-print_rev.c
Prints a string in reverse order. Combines string traversal with reversal logic.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-print_rev.c main.c -o print_rev
./print_rev
```

Key concepts: String reversal, backward iteration, pointer arithmetic

#### 5-rev_string.c
Reverses a string in place (modifies the original string). Different from print_rev as it actually changes the string content.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-rev_string.c main.c -o rev_string
./rev_string
```

Key concepts: In-place reversal, string modification, array swapping

#### 6-puts2.c
Prints every other character of a string, starting with the first character. Demonstrates selective character printing.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-puts2.c main.c -o puts2
./puts2
# Input: "Hello" -> Output: "Hlo"
```

Key concepts: Conditional iteration, step counting, character skipping

#### 7-puts_half.c
Prints the second half of a string. Shows how to calculate string midpoint and iterate from there.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 7-puts_half.c main.c -o puts_half
./puts_half
```

Key concepts: String length calculation, midpoint calculation, partial printing

### String Concatenation and Copying

#### 0-strcat.c
Concatenates two strings (appends src to dest). A custom implementation of the standard `strcat()` function.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-strcat.c main.c -o strcat
./strcat
```

Key concepts: String concatenation, null terminator handling, buffer management

#### 1-strncat.c
Concatenates n bytes of src to dest. A safer version that limits concatenation length to prevent buffer overflow.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-strncat.c main.c -o strncat
./strncat
```

Key concepts: Bounded concatenation, overflow prevention, buffer safety

#### 2-strncpy.c
Copies n characters from src to dest. A bounded version of `strcpy()` that prevents buffer overflow.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-strncpy.c main.c -o strncpy
./strncpy
```

Key concepts: Bounded copying, null terminator, memory safety

#### 9-strcpy.c
Copies a string from src to dest. A custom implementation of the standard `strcpy()` function.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 9-strcpy.c main.c -o strcpy
./strcpy
```

Key concepts: String copying, pointer advancement, memory copying

### String Comparison and Search

#### 3-strcmp.c
Compares two strings and returns an integer indicating their relationship. Custom implementation of `strcmp()`.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-strcmp.c main.c -o strcmp
./strcmp
```

Key concepts: String comparison, character-by-character comparison, return values

#### 2-strchr.c
Locates the first occurrence of a character in a string and returns a pointer to it. Similar to standard `strchr()`.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-strchr.c main.c -o strchr
./strchr
```

Key concepts: Character search, pointer returns, null terminator

#### 3-strspn.c
Returns the number of bytes in a string consisting of characters from a set of bytes.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-strspn.c main.c -o strspn
./strspn
```

Key concepts: Character set matching, prefix calculation, string analysis

#### 4-strpbrk.c
Searches a string for any of a set of bytes and returns a pointer to the first match found.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-strpbrk.c main.c -o strpbrk
./strpbrk
```

Key concepts: Character set searching, pointer returns, pattern matching

#### 5-strstr.c
Locates a substring within a string and returns a pointer to its first occurrence.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-strstr.c main.c -o strstr
./strstr
```

Key concepts: Substring search, nested loops, pattern finding

### String Case Conversion

#### 5-string_toupper.c
Converts all lowercase letters in a string to uppercase. Demonstrates character manipulation.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-string_toupper.c main.c -o string_toupper
./string_toupper
# Input: "Hello World" -> Output: "HELLO WORLD"
```

Key concepts: ASCII values, character conversion, string modification

#### 6-cap_string.c
Capitalizes the first character of each word in a string. Shows conditional character replacement.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-cap_string.c main.c -o cap_string
./cap_string
# Input: "hello world" -> Output: "Hello World"
```

Key concepts: Word boundaries, character case conversion, iteration logic

#### 7-leet.c
Replaces certain letters with numbers (1337 speak): a→4, e→3, o→0, t→7, l→1. A fun string encoding exercise.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 7-leet.c main.c -o leet
./leet
# Input: "hello world" -> Output: "h3ll0 w0rld"
```

Key concepts: Character replacement, lookup patterns, custom encoding

### Memory Operations

#### 0-memset.c
Fills the first n bytes of a memory area with a specific constant byte. Custom implementation of `memset()`.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-memset.c main.c -o memset
./memset
```

Key concepts: Memory manipulation, byte operations, bulk memory filling

#### 1-memcpy.c
Copies n bytes from memory area src to memory area dest. Custom implementation of `memcpy()`.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-memcpy.c main.c -o memcpy
./memcpy
```

Key concepts: Memory copying, byte-by-byte operations, non-overlapping memory

### Array Operations

#### 8-print_array.c
Prints n elements of an array of integers, separated by commas and spaces.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 8-print_array.c main.c -o print_array
./print_array
```

Key concepts: Array iteration, formatted output, delimiter handling

#### 7-print_chessboard.c
Prints a chessboard pattern or any 2D array of characters. Demonstrates 2D array manipulation.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 7-print_chessboard.c main.c -o print_chessboard
./print_chessboard
```

Key concepts: 2D arrays, nested loops, multi-dimensional array access

#### 8-print_diagsums.c
Prints the sum of the diagonals of a square 2D array of integers.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 8-print_diagsums.c main.c -o print_diagsums
./print_diagsums
```

Key concepts: 2D array navigation, diagonal calculation, matrix operations

### String to Number Conversion

#### 100-atoi.c
Converts a string to an integer. A custom implementation of the standard `atoi()` function with sign and digit handling.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 100-atoi.c main.c -o atoi
./atoi
```

Key concepts: String parsing, digit extraction, sign handling, accumulation

## 🎈 Usage <a name="usage"></a>

### General Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c main.c -o program_name
./program_name
```

### Pointer and Memory Understanding

- Pointers store memory addresses
- `&variable` gets the address of a variable
- `*pointer` dereferences a pointer to access the value
- Arrays are pointers to their first element
- Strings are arrays of characters ending with '\0'

## 🔑 Key Concepts <a name = "key_concepts"></a>

- **Pointers**: Memory addresses, dereferencing, pointer arithmetic
- **Arrays**: Single and multi-dimensional, indexing, iteration
- **Strings**: Character arrays, null terminator, string operations
- **Memory Operations**: `memcpy()`, `memset()`, byte operations
- **String Functions**: Concatenation, copying, comparison, searching
- **Character Manipulation**: Case conversion, encoding
- **Buffer Safety**: Bounded operations to prevent overflow
- **Pass by Reference**: Modifying values through pointers

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


# 0x0A. C - argc, argv

## 🧠 About

This project is part of the **Low-Level Programming** track at **Holberton School**.  
It focuses on understanding how to use command-line arguments in C programs, specifically the parameters `argc` (argument count) and `argv` (argument vector).

You will learn how to:
- Pass arguments to your program via the command line.
- Count and print the number of arguments.
- Access and print each argument individually.
- Perform basic operations using arguments (e.g., multiplication, addition).

---

## 📂 Project Files

| File Name | Description |
|------------|-------------|
| `0-whatsmyname.c` | Prints the program’s name followed by a new line. |
| `1-args.c` | Prints the number of arguments passed to the program. |
| `2-args.c` | Prints all arguments it receives, one per line. |
| `3-mul.c` | Multiplies two numbers passed as arguments and prints the result. |
| `4-add.c` | Adds positive numbers passed as arguments and prints the result. |
| `main.h` | Header file containing function prototypes (if needed). |

---

## ⚙️ Compilation

All programs are compiled using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o program_name
```

Example for `0-whatsmyname.c`:
```bash
gcc -Wall -Werror -Wextra -pedantic 0-whatsmyname.c -o myname
./myname
```

---

## 🧩 Usage Examples

### Example 1: Program Name
```bash
$ ./myname
./myname
```

### Example 2: Number of Arguments
```bash
$ ./count arg1 arg2 arg3
3
```

### Example 3: Print All Arguments
```bash
$ ./print_args Hello Holberton School
./print_args
Hello
Holberton
School
```

### Example 4: Multiply Two Numbers
```bash
$ ./mul 5 7
35
```

### Example 5: Add Positive Numbers
```bash
$ ./add 10 20 5
35
```

---

## 🧮 Concepts Practiced

- `int main(int argc, char *argv[])`
- Iterating through command-line arguments.
- Using `atoi()` to convert strings to integers.
- Handling incorrect argument counts.
- Input validation and error messages.

---

## ✍️ Author

- [@hugou74130](https://github.com/hugou74130)

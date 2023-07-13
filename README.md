
# ft_printf_42

## Description

`ft_rintf_42` is a project derived from the 42 Silicon Valley curriculum, in which students are tasked with creating a simplified version of the printf function in C, named `ft_printf`. The goal of this exercise is to understand variadic functions, data formatting and improve skills in C.

## Functionality

The `ft_rintf_42` function mimics the standard printf function from the C library. The `ft_rintf_42` supports the following conversion specifiers:

* %c - Character
* %s - String
* %p - Pointer
* %d - Signed integer
* %i - Signed integer
* %u - Unsigned integer
* %x - Unsigned hexadecimal (lowercase)
* %X - Unsigned hexadecimal (uppercase)
* %% - Literal '%'

## Compilation

A Makefile is included for compiling the library. Run the following commands for respective outcomes:

```bash
make         # to compile the library
make clean   # to remove all object files
make fclean  # to remove all object files and the library
make re      # to re-compile the library
```

## Usage

To use the `ft_rintf_42` function in your code, include the header (`ft_printf.h`) and link the library during compilation:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s!", "World");
    return (0);
}
```

Compile the program as follows:

```bash
gcc -L. -lftprintf main.c -o prog
```

This command tells the compiler to look for the `ft_rintf_42` library in the current directory and link it to your program.

## Notes

This code adheres to the Norm (the 42 School's strict coding standards). Therefore, it follows a specific format and only includes specific C standard library functions.

## Authors and acknowledgment

This project is executed by 42 students. We express gratitude to the pedagogical team for providing a conducive learning environment.

## License

This project is licensed under the 42 School Norm. Feel free to use and adapt it while respecting the license.
```

Please adjust the README to better fit your specific project requirements and functions. This is a general structure that should suit most needs.

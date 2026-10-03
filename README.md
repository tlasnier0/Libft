*This activity has been created as part of the 42 curriculum by tlasnier.*

# Libft

## Description
**Libft** is the very first project of the 42 curriculum. The goal of this project is to build a custom C standard library from scratch by re-implementing essential libc functions as well as additional utility routines (memory handling, string manipulation, and linked list management).

This library serves as a fundamental, reusable foundation that will be integrated into future curriculum projects such as `ft_printf`, `get_next_line`, ...

---

## Instructions

### Compilation
The project includes a `Makefile` with the required targets:
* `make` : Compiles all source files with `-Wall -Wextra -Werror` and creates the static library archive `libft.a`.
* `make clean` : Removes the intermediate object files (`.o`).
* `make fclean` : Removes the object files as well as the compiled library `libft.a`.
* `make re` : Performs a complete rebuild (`fclean` followed by `make`).

### Usage in a C Project
To use this library in another C program:
1. Include the header in your source files:
   ```c
   #include "libft.h"
   ```

---

## Library Functions

### Part 1 - Libc Re-implementations
* **Memory manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* **String operations:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`
* **Character checks & conversions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **Allocations & conversions:** `ft_atoi`, `ft_calloc`, `ft_strdup`

### Part 2 - Additional Utility Functions
* **String generation & slicing:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
* **Number to string conversion:** `ft_itoa`
* **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 - Linked List Operations (`t_list`)
* **Node creation & addition:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
* **List traversal & size:** `ft_lstsize`, `ft_lstlast`, `ft_lstiter`
* **Node deletion & list clearing:** `ft_lstdelone`, `ft_lstclear`
* **List mapping & transformation:** `ft_lstmap`

---

## Resources & AI Disclosure

### References
* Linux Programmer's Manual (`man 3`) for standard libc function definitions and POSIX requirements.
* [Koor.fr](https://koor.fr/Index.wp) - Documentation and tutorials on C standard library functions used for Part 1.
* GNU C Library documentation on dynamic memory allocation and pointer arithmetic.

### AI Usage
Artificial Intelligence was used solely as a conceptual tutor to help understand complex programming logic and low-level C mechanisms (such as pointer arithmetic, heap memory management, and data structures). 
It was used purely for theoretical guidance and conceptual explanations, without generating any project code.

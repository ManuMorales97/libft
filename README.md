*This project has been created as part of the 42 curriculum by manmoral*

# Libft

## Description

Libft is the first project in the 42 curriculum.  
The goal of this project is to recreate a selection of functions from the C standard library, as well as to develop additional utility functions and linked list management tools.

This custom library will be reused in future projects throughout the cursus.  
Its purpose is to strengthen understanding of:

- Memory management  
- String manipulation  
- Pointer usage  
- Dynamic memory allocation  
- Data structures (linked lists)  

The final result is a static library named `libft.a`.

---

## Project Structure

The project is divided into three main parts:

### Part 1 – Libc Functions

Reimplementation of standard C library functions such as:

- Character checks (isalpha, isdigit, isalnum, etc.)  
- String manipulation (strlen, strchr, strncmp, etc.)  
- Memory functions (memset, memcpy, memmove, etc.)  
- Type conversion (atoi)  
- Memory allocation (calloc, strdup)  

All functions are prefixed with `ft_`.

---

### Part 2 – Additional Functions

Utility functions that are not part of libc or are implemented differently:

- ft_substr  
- ft_strjoin  
- ft_strtrim  
- ft_split  
- ft_itoa  
- ft_strmapi  
- ft_striteri  
- ft_putchar_fd  
- ft_putstr_fd  
- ft_putendl_fd  
- ft_putnbr_fd  

These functions mainly focus on:

- Advanced string manipulation  
- Writing to file descriptors  
- Functional programming concepts  

---

### Part 3 – Linked Lists

Implementation of a basic linked list structure:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

Implemented list management functions:

- ft_lstnew  
- ft_lstadd_front  
- ft_lstsize  
- ft_lstlast  
- ft_lstadd_back  
- ft_lstdelone  
- ft_lstclear  
- ft_lstiter  
- ft_lstmap  

These functions allow creating, traversing, modifying, and freeing linked lists.

---

## Compilation

To compile the library:

```bash
make
```

This will generate:

```
libft.a
```

Available Makefile rules:

- `make` or `make all`  
- `make clean`  
- `make fclean`  
- `make re`  

Compilation flags used:

```
-Wall -Wextra -Werror
```

The library is created using:

```
ar rcs libft.a
```

---

## How to Use the Library

1. Include the header in your C file:

```c
#include "libft.h"
```

2. Compile your project together with the library:

```bash
cc main.c libft.a
```

Or if necessary:

```bash
cc main.c -L. -lft
```

---

## Memory Management

All dynamically allocated memory is properly managed.  
No memory leaks are allowed.  
All heap allocations must be freed when they are no longer needed.

---

## Resources

Resources used during development:

- System manuals (`man function_name`)  
- C standard library documentation  
- Official 42 documentation (intranet)  

### AI Usage

AI tools were used strictly as learning support to:

- Clarify theoretical concepts  
- Understand edge cases  
- Review logical explanations  

All code was written, tested, and fully understood manually to ensure genuine learning.

---

## Skills Developed

During this project, I developed:

- A deeper understanding of pointers  
- Mastery of memory allocation and deallocation  
- Internal understanding of how standard functions work  
- Basic implementation of data structures  
- Improved debugging and segmentation fault analysis skills  

---

## Final Note

Libft is the foundation of future projects at 42.  
This library will be expanded and reused throughout the cursus.
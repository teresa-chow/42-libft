# Libft
[![42 School: Rank 0](https://img.shields.io/badge/42%20School-Rank%200-%2315bbbb)](https://www.42network.org/)

_Libft is the 1st project of the [Common Core curriculum](https://42.fr/en/the-program/software-engineer-degree/) at 42. It's about coding a C library: specifically, recoding a few functions of the C standard library, as well as some other utility functions. Future projects will rely on this library._
___


### Table of contents
[Usage](#compass-usage) · [Subject](#book-subject) · [Part 1](#mandatory-part-i--libc-functions) · [Part 2](#mandatory-part-ii--additional-functions) · [Bonus](#bonus-part) · [License](#license)

___

</br>

# :compass: Usage
## Setup and compilation

1. Clone repository
    ```bash
    git clone git@github.com:teresa-chow/42-libft.git
    ```

2. Go inside project directory and run `make`
    ```bash
    cd libft
    make
    ```
3. To use the library in your code, `#include` the following header
    ```c
    #include "libft.h"
    ```

</br>

## Makefile rules

Command | Purpose
--|--
`make` | to compile libft with mandatory files
`make bonus` | to compile libft with bonus
`make clean` | to clean the working directory of object files `*.o`
`make fclean` | to clean the working directory of object and archive files `*.o` / `*.a`
`make re` | to clean and re-compile

___

</br>

# :book: Subject
:page_facing_up: [libft subject EN [PDF]](./en_libft_2023.pdf)

</br>

>[!NOTE]
>This codebase follows the applicable programming standard at 42, known as the Norm.

<details open>
  <summary><h2>Mandatory part I – Libc functions</h2></summary>
    
Recoding of C standard library functions

  Name | Prototype | Description
  --|--|--
  [isalpha](./ft_isalpha.c) | `int  ft_isalpha(int c);` | _check for alphabetic character_
  [isdigit](./ft_isdigit.c) | `int  ft_isdigit(int c);` | _check for digit (`0` through `9`)_
  [isalnum](./ft_isalnum.c) | `int  ft_isalnum(int c);` | _check for alphanumeric character_
  [isascii](./ft_isascii.c) | `int  ft_isascii(int c);` | _check whether `c` is a 7-bit `unsigned char` that fits into the ASCII character set_
  [isprint](./ft_isprint.c) | `int  ft_isprint(int c);` | _check for any printable character (including `SPACE`)_
  [strlen](./ft_strlen.c) | `size_t  ft_strlen(const char *s);` | _calculate the length of a string_
  [memset](./ft_memset.c) | `void  *ft_memset(void *s, int c, size_t n);` | _fill memory with a constant byte_
  [bzero](./ft_bzero.c) | `void  ft_bzero(void *s, size_t n);` | _write zero-valued bytes_
  [memcpy](./ft_memcpy.c) | `void  *ft_memcpy(void *dest, const void *src, size_t n);` | _copy memory area (can only copy in forward direction)_
  [memmove](./ft_memmove.c) | `void  *ft_memmove(void *dest, const void *src, size_t n);` | _copy memory area (can copy in both forward and backward direction)_
  [strlcpy](./ft_strlcpy.c) | `size_t  ft_strlcpy(char *dst, const char *src, size_t size);` | _size-bounded string copying_
  [strlcat](./ft_strlcat.c) | `size_t  ft_strlcat(char *dst, const char *src, size_t size);` | _size-bounded string concatenation_
  [toupper](./ft_toupper.c) | `int  ft_toupper(int c);` | _convert a lowercase letter to uppercase_
  [tolower](./ft_tolower.c) | `int  ft_tolower(int c);` | _convert an uppercase letter to lowercase_
  [strchr](./ft_strchr.c) | `char  *ft_strchr(const char *s, int c)` | _locate a character in a string (1st occurrence)_
  [strrchr](./ft_strrchr.c) | `char  *ft_strrchr(const char *s, int c)` | _locate a character in a string (last occurrence)_
  [strncmp](./ft_strncmp.c) | `int  ft_strncmp(const char *s1, const char *s2, size_t n)` | _compare two strings_
  [memchr](./ft_memchr.c) | `void  *ft_memchr(const void *s, int c, size_t n)` | _scan memory for a character_
  [strnstr](./ft_strnstr.c) | `char  *ft_strnstr(const char *big, const char *little, size_t len)` | _locate a substring in a string_
  [atoi](./ft_atoi.c) | `int  ft_atoi(const char *nptr)` | _convert a string to an integer_
  [calloc](./ft_calloc.c) | `void  *ft_calloc(size_t nmemb, size_t size);` | _allocate dynamic memory: the memory is set to zero_
  [strdup](./ft_strdup.c) | `char *ft_strdup(const char *s);` | _duplicate a string_
</details>

<details open>
  <summary><h2>Mandatory part II – Additional functions</h2></summary>

Coding of modified standard or non-standard utility functions

  Name | Prototype | Description
  --|--|--
  [ft_substr](./ft_substr.c) | `char  *ft_substr(char const *s, unsigned int start, size_t len);` | _allocate with `malloc()` and return a substring from string `s` (beginning at index `start` and of max. size `len`)_
  [ft_strjoin](./ft_strjoin.c) | `char  *ft_strjoin(char const *s1, char const *s2);` | _allocate with `malloc()` and return a new string, which is the result of the concatenation of `s1` and `s2`_
  [ft_strtrim](./ft_strtrim.c) | `char  *ft_strtrim(char const *s1, char const *set);` | _allocate with `malloc()` and return a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string_
  [ft_split](./ft_split.c) | `char  **ft_split(char const *s, char c);` | _allocate with `malloc()` and return an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array must end with a `NULL` pointer_
  [ft_itoa](./ft_itoa.c) | `char  *ft_itoa(int n);` | _allocate with `malloc()` and return a string representing the integer (positive, zero or negative) received as an argument_
  [ft_strmapi](./ft_strmapi.c) | `char  *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | _apply function `f` to each character of the string `s`, and passing its index as first argument to create a new string (with `malloc()`) resulting from successive applications of `f`_
  [ft_striteri](./ft_striteri.c) | `void  ft_striteri(char *s, void (*f)(unsigned int, char*));` | _apply function `f` on each character of the string `s` passed as argument, passing its index as first argument_
  [ft_putchar_fd](./ft_putchar_fd.c) | `void  ft_putchar_fd(char c, int fd);` | _output character `c` to given file descriptor `fd`_
  [ft_putstr_fd](./ft_putstr_fd.c) | `void  ft_putstr_fd(char *s, int fd);` | _output string `s` to given file descriptor `fd`_
  [ft_putendl_fd](./ft_putendl_fd.c) | `void  ft_putendl_fd(char *s, int fd);` | _output string `s` to given file descriptor, followed by a newline_
  [ft_putnbr_fd](./ft_putnbr_fd.c) | `void  ft_putnbr_fd(int n, int fd);` | _output integer `n` to given file descriptor `fd`_
</details>


<details open>
  <summary><h2>Bonus part</h2></summary>

Manipulating lists

  Name | Prototype | Description
  --|--|--
  [ft_lstnew](./ft_lstnew.c) | `t_list  *ft_lstnew(void *content);` | _allocate with `malloc()` and return a new node. Member variable `content` is initialized with the value of the parameter `content`; variable `next` is initialized to `NULL`_
  [ft_lstadd_front](./ft_lstadd_front.c) | `void  ft_lstadd_front(t_list **lst, t_list *new);` | _add `new` node at the beginning of the list_
  [ft_lstsize](./ft_lstsize.c) | `int  ft_lstsize(t_list *lst);` | _count number of nodes in a list_
  [ft_lstlast](./ft_lstlast.c) | `t_list  *ft_lstlast(t_list *lst);` | _return last node of the list_
  [ft_lstadd_back](./ft_lstadd_back.c) | `void  ft_lstadd_back(t_list **lst, t_list *new);` | _add `new` node at end of the list_
  [ft_lstdelone](./ft_lstdelone.c) | `void  ft_lstdelone(t_list *lst, void (*del)(void*));` | _free the memory of node `lst`’s `content` using function `del` given as a parameter and `free()` the node; note: memory of `next` must not be freed_
  [ft_lstclear](./ft_lstclear.c) | `void  ft_lstclear(t_list **lst, void (*del)(void*));` | _delete and free node `*lst` and every successor of that node, using the function `del` and `free()`; finally, the pointer to the list must be set to `NULL`_
  [ft_lstiter](./ft_lstiter.c) | `void  ft_lstiter(t_list *lst, void (*f)(void *));` | _iterate the list `lst` and apply function `f` on the `content` of each node_
  [ft_lstmap](/ft_lstmap.c) | `t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));` | _iterate list `lst` and apply function `f` on the `content` of each node; create a new list resulting of the successive applications of function `f`; `del` function is used to delete the `content` of a node if needed_
</details>

___

</br>

### License
This work is published under the terms of [42 Unlicense](./LICENSE).

</br>

[⬆ back to top](#libft)

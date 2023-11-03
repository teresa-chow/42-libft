# Libft
![Static Badge](https://img.shields.io/badge/42%20School-Rank%200-%2315bbbb)

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
`make clean` | to clean the working directory of object files `*.o`
`make fclean` | to clean the working directory of object and archive files `*.o` / `*.a`

___

</br>

# :book: Subject
:page_facing_up: [libft subject EN [PDF]](https://github.com/teresa-chow/42-libft/blob/main/en_libft_2023.pdf)

</br>

>[!NOTE]
>This codebase follows the applicable programming standard at 42, known as the Norm.

<details open>
  <summary><h2>Mandatory part I – Libc functions</h2></summary>

  Name | Prototype | Purpose
  --|--|--
  [isalpha](./ft_isalpha.c) | `int  isalpha(int c);` | _check for alphabetic character_
  [isdigit](./ft_isdigit.c) | `int  isdigit(int c);` | _check for digit (`0` through `9`)_
  [isalnum](./ft_isalnum.c) | `int  isalnum(int c);` | _check for alphanumeric character_
  [isascii](./ft_isascii.c) | `int  isascii(int c);` | _check whether `c` is a 7-bit `unsigned char` that fits into the ASCII character set_
  [isprint](./ft_isprint.c) | `int  isprint(int c);` | _check for any printable character (including `SPACE`)_
  [strlen](./ft_strlen.c) | `size_t  strlen(const char *s);` | _calculate the length of a string_
  [memset](./ft_memset.c) | `void  *memset(void *s, int c, size_t n);` | _fill memory with a constant byte_
  [bzero](./ft_bzero.c) | `void  bzero(void *s, size_t n);` | _write zero-valued bytes_
  [memcpy](./ft_memcpy.c) | `void  *memcpy(void *dest, const void *src, size_t n);` | _copy memory area (can only copy in forward direction)_
  [memmove](./ft_memmove.c) | `void  *memmove(void *dest, const void *src, size_t n);` | _copy memory area (can copy in both forward and backward direction)_
  [strlcpy](./ft_strlcpy.c) | `size_t  strlcpy(char *dst, const char *src, size_t size);` | _size-bounded string copying_
  [strlcat](./ft_strlcat.c) | `size_t  strlcat(char *dst, const char *src, size_t size);` | _size-bounded string concatenation_
  [toupper](./ft_toupper.c) | `int  toupper(int c);` | _convert a lowercase letter to uppercase_
  [tolower](./ft_tolower.c) | `int  tolower(int c);` | _convert an uppercase letter to lowercase_
  [strchr](./ft_strchr.c) | `char  *strchr(const char *s, int c)` | _locate a character in a string (1st occurrence)_
  [strrchr](./ft_strrchr.c) | `char  *strrchr(const char *s, int c)` | _locate a character in a string (last occurrence)_
  [strncmp](./ft_strncmp.c) | `int  strncmp(const char *s1, const char *s2, size_t n)` | _compare two strings_
  [memchr](./ft_memchr.c) | `void  *memchr(const void *s, int c, size_t n)` | _scan memory for a character_
  [strnstr](./ft_strnstr.c) | `char  *strnstr(const char *big, const char *little, size_t len)` | _locate a substring in a string_
  [atoi](./ft_atoi.c) | `int  ft_atoi(const char *nptr)` | _convert a string to an integer_
  [calloc](./ft_calloc.c) | `void  *ft_calloc(size_t nmemb, size_t size);` | _allocate dynamic memory: the memory is set to zero_
  [strdup](./ft_strdup.c) | `char *ft_strdup(const char *s);` | _duplicate a string_
</details>

<details open>
  <summary><h2>Mandatory part II – Additional functions</h2></summary>

  Name | Prototype | Purpose
  --|--|--
  [ft_substr](./ft_substr.c) | `char  *ft_substr(char const *s, unsigned int start, size_t len);` |
  [ft_strjoin](./ft_strjoin.c) | `char  *ft_strjoin(char const *s1, char const *s2);` |
  ft_strtrim | `char  *ft_strtrim(char const *s1, char const *set);` |
  ft_split | `char  **ft_split(char const *s, char c);` |
  ft_itoa | `char  *ft_itoa(int n);` |
  ft_strmapi | `char  *ft_strmapi(char const *s, char (*f)(unsigned int, char));` |
  ft_striteri | `void  ft_striteri(char *s, void (*f)(unsigned int, char*));` |
  [ft_putchar_fd](./ft_putchar_fd.c) | `void  ft_putchar_fd(char c, int fd);` | _output character `c` to given file descriptor `fd`_
  [ft_putstr_fd](./ft_putstr_fd.c) | `void  ft_putstr_fd(char *s, int fd);` | _output string `s` to given file descriptor `fd`_
  [ft_putendl_fd](./ft_putendl_fd.c) | `void  ft_putendl_fd(char *s, int fd);` |
  [ft_putnbr_fd](./ft_putnbr_fd.c) | `void  ft_putnbr_fd(int n, int fd);` | _output integer `n` to given file descriptor `fd`_
</details>


<details open>
  <summary><h2>Bonus part</h2></summary>

  Name | Prototype | Purpose
  --|--|--
  ft_lstnew | `t_list  *ft_lstnew(void *content);` |
  ft_lstadd_front | `void  ft_lstadd_front(t_list **lst, t_list *new);` |
  ft_lstsize | `int  ft_lstsize(t_list *lst);` |
  ft_lstlast | `t_list  *ft_lstlast(t_list *lst);` |
  ft_lstadd_back | `void  ft_lstadd_back(t_list **lst, t_list *new);` |
  ft_lstdelone | `void  ft_lstdelone(t_list *lst, void (*del)(void*));` |
  ft_lstclear | `void  ft_lstclear(t_list **lst, void (*del)(void*));` |
  ft_lstiter | `void  ft_lstiter(t_list *lst, void (*f)(void *));` |
  ft_lstmap | `t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));` |
</details>

___

</br>

### License
This work is published under the terms of [42 Unlicense](https://github.com/teresa-chow/42-libft/blob/main/LICENSE).

</br>

[⬆ back to top](#libft)

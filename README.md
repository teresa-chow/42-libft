# 42-libft
![Static Badge](https://img.shields.io/badge/42%20School-Rank%200-%2315bbbb)

_Libft is the 1st project of the [Common Core curriculum](https://42.fr/en/the-program/software-engineer-degree/) at 42. It's about coding a C library: specifically, recoding a few functions of the C standard library, as well as some other utility functions. Future projects will rely on this library._
___


### Table of contents
[Subject](#book-subject) · [Part 1](#mandatory-part-i--libc-functions) · [Part 2](#mandatory-part-ii--additional-functions) · [Bonus](#bonus-part) · [How to use](#compass-how-to-use) · [License](#license)

___

</br>

# :book: Subject
[:page_facing_up: libft subject EN [PDF]](https://github.com/teresa-chow/42-libft/files/13047809/en_libft_2023.pdf)

</br>

>[!NOTE]
>This codebase follows the applicable programming standard at 42, known as the Norm.

<details open>
  <summary><h2>Mandatory part I – Libc functions</h2></summary>

  Name | Prototype | ...
  --|--|--
  [ft_isalpha](https://github.com/teresa-chow/42-libft/blob/main/ft_isalpha.c) | `int  ft_isalpha(int c);` | _checks for alphabetic character_
  [ft_isdigit](https://github.com/teresa-chow/42-libft/blob/main/ft_isdigit.c) | `int  ft_isdigit(int c);` | _checks for digit (`0` through `9`)_
  [ft_isalnum](https://github.com/teresa-chow/42-libft/blob/main/ft_isalnum.c) | `int  ft_isalnum(int c);` | _checks for alphanumeric character_
  [ft_isascii](https://github.com/teresa-chow/42-libft/blob/main/ft_isascii.c) | `int  ft_isascii(int c);` | _checks wether `c` is a 7-bit `unsigned char` that fits into the ASCII character set_
  [ft_isprint](https://github.com/teresa-chow/42-libft/blob/main/ft_isprint.c) | `int  ft_isprint(int c);` | _checks for any printable character (including `SPACE`)_
  [ft_strlen](https://github.com/teresa-chow/42-libft/blob/main/ft_strlen.c) | `size_t  ft_strlen(const char *s);` | _calculates the length of a string_
  [ft_memset](https://github.com/teresa-chow/42-libft/blob/main/ft_memset.c) | `void  *ft_memset(void *s, int c, size_t n);` | _fills memory with a constant byte_
  [ft_bzero](https://github.com/teresa-chow/42-libft/blob/main/ft_bzero.c) | `void  ft_bzero(void *s, size_t n);` | _writes zero-valued bytes_
  [ft_memcpy](https://github.com/teresa-chow/42-libft/blob/main/ft_memcpy.c) | `void  *ft_memcpy(void *dest, const void *src, size_t n);` | _copies memory area (can only copy in forward direction)_
  [ft_memmove](https://github.com/teresa-chow/42-libft/blob/main/ft_memmove.c) | `void  *ft_memmove(void *dest, const void *src, size_t n);` | _copies memory area (can copy in both forward and backward direction)_
  [ft_strlcpy](https://github.com/teresa-chow/42-libft/blob/main/ft_strlcpy.c) | `size_t  ft_strlcpy(char *dst, const char *src, size_t size);` | _size-bounded string copying_
  [ft_strlcat](https://github.com/teresa-chow/42-libft/blob/main/ft_strlcat.c) | `size_t  ft_strlcat(char *dst, const char *src, size_t size);` | _size-bounded string concatenation_
  [ft_toupper](https://github.com/teresa-chow/42-libft/blob/main/ft_toupper.c) | `int  ft_toupper(int c);` | _converts a lowercase letter to uppercase_
  [ft_tolower](https://github.com/teresa-chow/42-libft/blob/main/ft_tolower.c) | `int  ft_tolower(int c);` | _converts an uppercase letter to lowercase_
  [ft_strchr](https://github.com/teresa-chow/42-libft/blob/main/ft_strchr.c) | `char  *ft_strchr(const char *s, int c)` | _locates a character in a string (1st occurrence)_
  [ft_strrchr](https://github.com/teresa-chow/42-libft/blob/main/ft_strrchr.c) | `char  *ft_strrchr(const char *s, int c)` | _locates a character in a string (last occurrence)_
  [ft_strncmp](https://github.com/teresa-chow/42-libft/blob/main/ft_strncmp.c) | `int  ft_strncmp(const char *s1, const char *s2, size_t n)` | _compares two strings_
  [ft_memchr](https://github.com/teresa-chow/42-libft/blob/main/ft_memchr.c) | `void  *ft_memchr(const void *s, int c, size_t n)` | _scans memory for a character_
  [ft_strnstr](https://github.com/teresa-chow/42-libft/blob/main/ft_strnstr.c) | `char  *ft_strnstr(const char *big, const char *little, size_t len)` | _locates a substring in a string_
  [ft_atoi](https://github.com/teresa-chow/42-libft/blob/main/ft_atoi.c) | `int  ft_atoi(const char *nptr)` | _converts a string to an integer_
  ft_calloc | `void  *ft_calloc(size_t nmemb, size_t size);` | _allocates dynamic memory: the memory is set to zero_
  ft_strdup | `char *ft_strdup(const char *s);` | _duplicates a string_
</details>

<details open>
  <summary><h2>Mandatory part II – Additional functions</h2></summary>

  Name | Prototype | ...
  --|--|--
  ft_substr | `char  *ft_substr(char const *s, unsigned int start, size_t len);` |
  ft_strjoin | `char  *ft_strjoin(char const *s1, char const *s2);` |
  ft_strtrim | `char  *ft_strtrim(char const *s1, char const *set);` |
  ft_split | `char  **ft_split(char const *s, char c);` |
  ft_itoa | `char  *ft_itoa(int n);` |
  ft_strmapi | `char  *ft_strmapi(char const *s, char (*f)(unsigned int, char));` |
  ft_striteri | `void  ft_striteri(char *s, void (*f)(unsigned int, char*));` |
  ft_putchar_fd | `void  ft_putchar_fd(char c, int fd);` |
  ft_putstr_fd | `void  ft_putstr_fd(char *s, int fd);` |
  ft_putendl_fd | `void  ft_putendl_fd(char *s, int fd);` |
  ft_putnbr_fd | `void  ft_putnbr_fd(int n, int fd);` |
</details>


<details open>
  <summary><h2>Bonus part</h2></summary>

  Name | Prototype | ...
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

# :compass: How to use
I.  Clone repository
```bash
git clone git@github.com:teresa-chow/42-libft.git
```

II. Go inside project directory and run `make`
```bash
cd libft
make
```
III. To use the library in your code, `#include` the following header
```c
#include "libft.h"
```
___

</br>

### License
This work is published under the terms of [42 Unlicense](https://github.com/teresa-chow/42-libft/blob/main/LICENSE).

[⬆ back to top](#42-libft)

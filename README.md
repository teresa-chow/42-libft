# 42-libft
_Libft is the 1st subject of the [Common Core curriculum](https://42.fr/en/the-program/software-engineer-degree/) at 42. The aim of this project is to recode a few functions of the C standard library, as well as some other utility functions._
___


### Table of contents
[Subject](#book-subject) · [Part 1](#mandatory-part-i--libc-functions) · [Part 2](#mandatory-part-ii--additional-functions) · [Bonus](#bonus-part) · [Usage](#compass-usage) · [Footnotes](#footnotes)

___
# :book: Subject
[libft subject EN [PDF]](https://github.com/teresa-chow/42-libft/files/13047809/en_libft_2023.pdf)

</br>

## Mandatory part I – Libc functions
Name | Synopsis | ...
--|--|--
[ft_isalpha](https://github.com/teresa-chow/42-libft/blob/main/ft_isalpha.c) | `int  ft_isalpha(int c);` | _checks for alphabetic character_
[ft_isdigit](https://github.com/teresa-chow/42-libft/blob/main/ft_isdigit.c) | `int  ft_isdigit(int c);` | _checks for digit (`0` through `9`)_
[ft_isalnum](https://github.com/teresa-chow/42-libft/blob/main/ft_isalnum.c) | `int  ft_isalnum(int c);` | _checks for alphanumeric character_
[ft_isascii](https://github.com/teresa-chow/42-libft/blob/main/ft_isascii.c) | `int  ft_isascii(int c);` | _checks wether `c` is a 7-bit `unsigned char` that fits into the ASCII character set_
[ft_isprint](https://github.com/teresa-chow/42-libft/blob/main/ft_isprint.c) | `int  ft_isprint(int c);` | _checks for any printable character (including `SPACE`)_
[ft_strlen](https://github.com/teresa-chow/42-libft/blob/main/ft_strlen.c) | `size_t  ft_strlen(const char *s);` | _calculates the length of a string_
[ft_memset](https://github.com/teresa-chow/42-libft/blob/main/ft_memset.c) | `void  *ft_memset(void *s, int c, size_t n);` | _fills memory with a constant byte_
[ft_bzero](https://github.com/teresa-chow/42-libft/blob/main/ft_bzero.c) | `void  ft_bzero(void *s, size_t n);` | _writes zero-valued bytes_
[ft_memcpy](https://github.com/teresa-chow/42-libft/blob/main/ft_memcpy.c) | `void  *ft_memcpy(void *dest, const void *src, size_t n);` | _copies memory area_
[ft_memmove](https://github.com/teresa-chow/42-libft/blob/main/ft_memmove.c) | `void  *ft_memmove(void *dest, const void *src, size_t n);` | _copies memory area_
[ft_strlcpy](https://github.com/teresa-chow/42-libft/blob/main/ft_strlcpy.c) | `size_t  ft_strlcpy(char *dst, const char *src, size_t size);` | _size-bounded string copying_
[ft_strlcat](https://github.com/teresa-chow/42-libft/blob/main/ft_strlcat.c) | `size_t  ft_strlcat(char *dst, const char *src, size_t size);` | _size-bounded string concatenation_
[ft_toupper](https://github.com/teresa-chow/42-libft/blob/main/ft_toupper.c) | `int  ft_toupper(int c);` | _converts letter to upper case_
[ft_tolower](https://github.com/teresa-chow/42-libft/blob/main/ft_tolower.c) | `int  ft_tolower(int c);` | _converts letter lower case_
[ft_strchr](https://github.com/teresa-chow/42-libft/blob/main/ft_strchr.c) | `char  *ft_strchr(const char *s, int c)` | _locates a character in a string (1st occurrence)_
[ft_strrchr](https://github.com/teresa-chow/42-libft/blob/main/ft_strrchr.c) | `char  *ft_strrchr(const char *s, int c)` | _locates a character in a string (last occurrence)_
[ft_strncmp](https://github.com/teresa-chow/42-libft/blob/main/ft_strncmp.c) | `int  ft_strncmp(const char *s1, const char *s2, size_t n)` | _compares two strings_
[ft_memchr](https://github.com/teresa-chow/42-libft/blob/main/ft_memchr.c) | `void  *ft_memchr(const void *s, int c, size_t n)` | _scans memory for a character_
[ft_strnstr](https://github.com/teresa-chow/42-libft/blob/main/ft_strnstr.c) | `char  *ft_strnstr(const char *big, const char *little, size_t len)` | _locates a substring in a string_
[ft_atoi](https://github.com/teresa-chow/42-libft/blob/main/ft_atoi.c) | `int  ft_atoi(const char *nptr)` | _converts a string to an integer_

</br>

## Mandatory part II – Additional functions
Name | Synopsis | ...
--|--|--

</br>

## Bonus part
Name | Synopsis | ...
--|--|--

</br>

___

# :compass: Usage
___
### Footnotes
This work is published under the terms of the [Unlicense](https://github.com/teresa-chow/42-libft/blob/main/LICENSE).

[⬆ back to top](#42-libft)

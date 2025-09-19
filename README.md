# Libft - Your Very First Own Library

A comprehensive C library implementing essential standard library functions and additional utilities. This project serves as a foundation for future C programming assignments and helps deepen understanding of fundamental programming concepts.

## 📋 Table of Contents

- [About](#about)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Function Reference](#function-reference)
- [Testing](#testing)
- [Project Structure](#project-structure)
- [Technical Requirements](#technical-requirements)
- [Contributing](#contributing)
- [License](#license)

## 🎯 About

**libft** is a custom C library that reimplements many of the standard C library (libc) functions, along with additional utility functions. This project is designed to:

- Deepen understanding of C programming fundamentals
- Create a reusable library for future projects

The library strictly follows the original function behaviors and prototypes, with the key difference being the `ft_` prefix for all function names.

## ✨ Features

### Part 1: Libc Functions
Recreation of essential standard library functions:
- **Character Classification**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String Manipulation**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- **Memory Operations**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **Character Conversion**: `ft_toupper`, `ft_tolower`, `ft_atoi`

### Part 2: Additional Functions
Custom utility functions for enhanced functionality:
- **String Processing**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- **Conversion**: `ft_itoa`
- **Function Application**: `ft_strmapi`, `ft_striteri`
- **File Descriptor Output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## 🚀 Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/viridian-green/libft.git
   cd libft
   ```

2. **Compile the library:**
   ```bash
   make
   ```

3. **Clean object files (optional):**
   ```bash
   make clean    # Remove object files
   make fclean   # Remove object files and library
   make re       # Recompile everything
   ```

## 💡 Usage

## 📚 Function Reference

### Part 1 - Libc Functions

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_isalpha` | `int ft_isalpha(int c)` | Checks if character is alphabetic |
| `ft_isdigit` | `int ft_isdigit(int c)` | Checks if character is a digit |
| `ft_isalnum` | `int ft_isalnum(int c)` | Checks if character is alphanumeric |
| `ft_isascii` | `int ft_isascii(int c)` | Checks if character is ASCII |
| `ft_isprint` | `int ft_isprint(int c)` | Checks if character is printable |
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Calculates string length |
| `ft_memset` | `void *ft_memset(void *b, int c, size_t len)` | Fills memory with constant byte |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Sets memory to zero |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n)` | Copies memory area |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t len)` | Copies memory area (safe for overlapping) |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)` | Copies string with size limit |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize)` | Concatenates strings with size limit |
| `ft_toupper` | `int ft_toupper(int c)` | Converts to uppercase |
| `ft_tolower` | `int ft_tolower(int c)` | Converts to lowercase |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Locates first occurrence of character |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Locates last occurrence of character |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares strings up to n characters |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Locates byte in memory |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares memory areas |
| `ft_strnstr` | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Locates substring |
| `ft_atoi` | `int ft_atoi(const char *str)` | Converts string to integer |
| `ft_calloc` | `void *ft_calloc(size_t count, size_t size)` | Allocates and zeros memory |
| `ft_strdup` | `char *ft_strdup(const char *s1)` | Duplicates string |

### Part 2 - Additional Functions

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Creates substring |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Concatenates two strings |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Trims characters from string |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits string by delimiter |
| `ft_itoa` | `char *ft_itoa(int n)` | Converts integer to string |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies function to each character |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applies function to each character (in-place) |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Outputs character to file descriptor |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Outputs string to file descriptor |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Outputs string + newline to file descriptor |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Outputs integer to file descriptor |
## 📁 Project Structure

```
libft/
├── Makefile           # Build configuration
├── libft.h            # Header file with prototypes
├── README.md          # Project documentation
├── LICENSE            # License file
├── ft_isalpha.c       # Character classification functions
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_strlen.c        # String manipulation functions
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strdup.c
├── ft_memset.c        # Memory manipulation functions
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_calloc.c
├── ft_toupper.c       # Character conversion functions
├── ft_tolower.c
├── ft_atoi.c
├── ft_substr.c        # Additional utility functions
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_putchar_fd.c    # File descriptor output functions
├── ft_putstr_fd.c
├── ft_putendl_fd.c
└── ft_putnbr_fd.c
```

## ⚙️ Technical Requirements

- **Language**: C (C99 standard compatible, but without using `-std=c99` flag)
- **Compilation**: Must compile with `-Wall -Wextra -Werror` flags
- **Library Creation**: Must use `ar` command (not `libtool`)
- **Memory Management**: Proper handling of malloc/free
- **Global Variables**: Strictly forbidden
- **Helper Functions**: Must be declared as static
- **Norm Compliance**: Follows 42 School coding standards

## 🎓 Learning Objectives

By completing this project, you will have gained experience in:
- C programming fundamentals
- Memory management and allocation
- String manipulation algorithms
- Function pointer usage
- Library creation and linking
- Makefile creation and management
- Understanding of standard library implementations

## 🤝 Contributing

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



---

**Note**: This library is designed for educational purposes and 42 School curriculum. Feel free to expand and improve upon it throughout your learning journey!

*This project has been created as part of the 42 curriculum by ebrahaj.*

# ft_printf

The goal of this project is pretty straightforward. You will recode
printf(). You will mainly learn about using a variable number of
arguments

## Description
`ft_printf` reproduces a subset of the C standard library `printf` conversions:

- `%c` — character
- `%s` — string
- `%p` — pointer in hex with `0x` prefix
- `%d` / `%i` — signed decimal integer
- `%u` — unsigned decimal integer
- `%x` — lowercase hexadecimal
- `%X` — uppercase hexadecimal
- `%%` — a literal percent character

The library exposes a single public entry point:

```c
int ft_printf(const char *format, ...);
```

## Instructions

Requirements: `cc`, `ar`, and a POSIX environment.

```bash
make            # builds libftprintf.a
make clean      # remove build artifacts
make fclean     # remove build artifacts and libftprintf.a
make re         # rebuild from scratch
```

The archive `libftprintf.a` is created at the repository root, as required.

Link the archive and include the header:

```c
#include "ft_printf.h"

int main(void)
{
    int count = ft_printf("Hello %s %d 0x%x %p %\n", "world", 42, 3735928559u, (void*)0x42);
    (void)count; // characters written
    return 0;
}
```

Compile the example (supposing `libftprintf.a` already built):

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -I. -o demo
./demo
```

## Design notes

- **Dispatcher helper**: A small, `static` helper maps a conversion specifier to the corresponding print routine. This keeps `ft_printf` short and Norm compliant.
- **Return value**: All print routines return the number of bytes written, aggregated by `ft_printf` to match `printf` semantics.
- **No buffering**: As required, there is no internal buffer layer; output goes directly through `write(2)`.
- **Pointer formatting**: Non‑NULL pointers are printed as `0x` followed by lowercase hexadecimal; `NULL` is printed as `(nil)`.

## Limitations

- Field width, precision, and flags (`-0#+ ` etc.) are intentionally **not** implemented.
- Locale and wide‑character handling are out of scope.

## Project Requirements Summary

- Language: C
- Build: `make` producing `libftprintf.a` at project root
- Conversions: `cspdiuxX%`
- External functions allowed: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`
- Norm compliance throughout the repository


## Resources & AI usage

- C standard library `printf(3)` man page
- Variadic functions: `stdarg.h`
- 42 subject PDF for `ft_printf` (rules and scope)

**AI usage disclosure**: AI was used in this project for understanding and for better clarity of the new term that we got from this project (variadic functions).


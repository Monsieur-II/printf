OVERVIEW:

This project is a simple implementation of the printf function in C.
It aims to replicate some basic functionalities of the standard printf function found in the C library.
This function will generate output based on a given format string, which may contain conversion specifiers for characters, strings, and the percent symbol.
The output will be written to the standard output stream (stdout).

VALID FORMAT SPECIFIERS:

%c: Prints a single character.
%s specifier: Prints a string, terminated by a null character.
%%: Prints a percent symbol.
%d and %i: Print signed integers.

PROTOTYPE:

int _printf(const char *format, ...);

TEST CODE:

#include "alx.h"

int main(void)
{
    int len;

    len = _printf("Hello, %s!\n", "world");
    _printf("The number of characters printed is: %d\n", len);

    _printf("%c\n", 'A');
    _printf("%%\n");
    
    return (0);
}

RETURN VALUE:

The _printf function will return the count of characters that were printed,
excluding the null byte used for terminating output to strings.

GUIDANCE:

1. Clone the repository from GitHub: printf.
2. Implement the custom _printf function in the provided source files. It is necessary to handle the specified conversion specifiers: %c, %s, %%, %d, and %i.
3. Test the implementation using various test cases to ensure accuracy and correctness.

NOTE:

The custom printf function is designed to focus solely on the core functionality of printing formatted output.
It does not incorporate any features related to:

flag characters,
field width,
precision,
or length modifiers...

as outlined in the project instructions.

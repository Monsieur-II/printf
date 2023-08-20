#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int print_rev(char *s);

/**
 * struct func - struct containing string and function pointer
 * @t: the string
 * @f: the function pointer
 */
typedef struct func
{
	char *t;
	int (*f)(va_list, int);
} func_t;
int (*checkspec(char s))(va_list, int);
int print_char(va_list list, int idx);
int print_str(va_list list, int idx);
int print_int(va_list list, int idx);
int printint(int d);
int cent(va_list list, int idx);
int print_binary(va_list list, int idx);

#endif /*MAIN_HEADER*/

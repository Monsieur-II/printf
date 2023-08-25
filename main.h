#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int print_rev(char *s);
void print_hex(char num);
int print_uhex(unsigned int num);
int print_uheX(unsigned int num);

/**
 * struct func - struct containing string and function pointer
 * @t: the string
 * @f: the function pointer
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int (*checkspec(char s))(va_list);
int print_char(va_list list);
int print_str(va_list list);
int print_int(va_list list);
int printint(int d);
int cent(va_list list);
int print_binary(va_list list);
int print_r(va_list list);
int print_rot(va_list list);
int print_S(va_list list);
int print_o(va_list list);
int print_uint(va_list list);
int print_x(va_list list);
int print_X(va_list list);

#endif /*MAIN_HEADER*/

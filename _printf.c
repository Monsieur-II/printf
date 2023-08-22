#include "main.h"
#include <stdio.h>

/**
 * _printf - prints a string in a formatted way
 * @format: string to print
 * @...: variadic parameters
 *
 * Return: number of characters printed, -1 on error
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, idx = 0, value;
	va_list list;
	int (*func_to_use)(va_list, int);

	va_start(list, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = _putchar(format[i]);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			i++;

			func_to_use = checkspec(format[i]);
			if (func_to_use)
			{
				value = func_to_use(list, idx);
				if (format[i] != '%' && format[i] != ' ' && format[i])
					idx++;
				count += value;
				i++;
				continue;
			}
		}
	}
	va_end(list);
	return (count);
}

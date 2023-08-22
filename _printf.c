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
	if (format == NULL)
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
			if (format[i + 1] == ' ' || format[i + 1] == '\0')
				return (-1);

			i++;
			func_to_use = checkspec(format[i]);

			if (func_to_use)
			{
				value = func_to_use(list, idx);
				idx++;
				count += value;
				i++;
				continue;
			}
			else
				return (-1);
		}
	}
	va_end(list);
	return (count);
}

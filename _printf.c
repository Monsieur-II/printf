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
	int i = 0, count = 0;
	va_list list;
	int (*func_to_use)(va_list);

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
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
				count += func_to_use(list);
				i++;
				continue;
			}
			else
			{
				_putchar('%');
				count++;
				continue;
			}
		}
	}
	va_end(list);
	return (count);
}

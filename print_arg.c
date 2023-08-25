#include "main.h"

/**
 * print_char - prints a char
 * @list: the list from which to print char
 *
 * Return: the number of bytes written
 */
int print_char(va_list list)
{
	int count;
	char c;

	c = va_arg(list, int);

	count = _putchar(c);
	return (count);
}

/**
 * print_str - prints a string from a list
 * @list: the list
 *
 * Return: no. of bytes written
 */
int print_str(va_list list)
{
	int count = 0;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		_puts("(null)");
		return (6);
	}

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}

/**
 * print_int - prints decimal integer
 * @list: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_int(va_list list)
{
	int count;
	int num;

	num = va_arg(list, int);

	count = printint(num);

	return (count);
}

/**
 * cent - prints percent sign
 * @list: the argument list
 *
 * Return: no. of bytes written
 */
int cent(va_list list __attribute__((unused)))
{
	int count;

	count = _putchar('%');

	return (count);
}

/**
 * print_binary - prints unsigned int in binary
 * @list: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_binary(va_list list)
{
	int count = 0, j = 0;
	unsigned int num;
	char arr[64];

	num = va_arg(list, int);

	if (num == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		arr[j++] = (num % 2) + '0';
		num /= 2;
	}
	arr[j] = '\0';

	count = (print_rev(arr));

	return (count);
}

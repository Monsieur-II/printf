#include "main.h"

/**
 * print_char - prints a char
 * @list: the list from which to print char
 * @idx: the index of the char
 *
 * Return: the number of bytes written
 */
int print_char(va_list list, int idx)
{
	int i, count;
	char c;

	for (i = 0; i <= idx; i++)
		c = va_arg(list, int);

	if (!c)
		return (1);

	count = _putchar(c);
	return (count);
}

/**
 * print_str - prints a string from a list
 * @list: the list
 * @idx: the index of the string in list
 *
 * Return: no. of bytes written
 */
int print_str(va_list list, int idx)
{
	int i, count = 0;
	char *str;

	for (i = 0; i < idx; i++)
		va_arg(list, char *);

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
 * @idx: the index of the argument
 *
 * Return: the no. of bytes written
 */
int print_int(va_list list, int idx)
{
	int i, count;
	int num;

	for (i = 0; i <= idx; i++)
		num = va_arg(list, int);

	count = printint(num);

	return (count);
}

/**
 * cent - prints percent sign
 * @list: the argument list
 * @idx: the index
 *
 * Return: no. of bytes written
 */
int cent(va_list list __attribute__((unused)), int idx __attribute__((unused)))
{
	int count;

	count = _putchar('%');

	return (count);
}

/**
 * print_binary - prints unsigned int in binary
 * @list: the list to print from
 * @idx: the index of the argument
 *
 * Return: the no. of bytes written
 */
int print_binary(va_list list, int idx)
{
	int count = 0, i, j = 0;
	unsigned int num;
	char arr[64];

	for (i = 0; i <= idx; i++)
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

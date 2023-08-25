#include "main.h"

/**
 * print_o - prints unsigned int in octal
 * @list: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_o(va_list list)
{
	int count = 0, j = 0;
	unsigned int num;
	char arr[64];

	num = va_arg(list, int);

	if (num == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		arr[j++] = (num % 8) + '0';
		num /= 8;
	}
	arr[j] = '\0';

	count = (print_rev(arr));

	return (count);
}

/**
 * printuint - prints decimal integer
 * @d: the integer
 *
 * Return: number of chars written
 */
int printuint(unsigned int d)
{
	char *buffer = NULL;
	unsigned int temp = d, size;
	int num_of_digits = 0;
	int i;
	unsigned int num;

	if (d == 0)
		return (_putchar('0'));

	num = d;
	while (temp != 0)
	{
		num_of_digits++;
		temp /= 10;
	}
	size = num_of_digits + 1;
	buffer = malloc(sizeof(char) * (size));
	if (!buffer)
		return (-1);
	for (i = size - 2; i >= 0; i--)
	{
		buffer[i] = (num % 10) + '0';
		num /= 10;
	}
	buffer[size - 1] = '\0';

	_puts(buffer);
	free(buffer);

	return (num_of_digits);
}

/**
 * print_uint - prints decimal integer
 * @list: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_uint(va_list list)
{
	int count;
	int num;

	num = va_arg(list, unsigned int);

	count = printuint(num);

	return (count);
}

/**
 * print_x - prints hexidecimal integer
 * @list: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_x(va_list list)
{
	int count;
	int num;

	num = va_arg(list, unsigned int);

	count = print_uhex(num);

	return (count);
}

/**
 * print_X - prints hexidecimal integer
 * @list: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_X(va_list list)
{
	int count;
	int num;

	num = va_arg(list, unsigned int);

	count = print_uheX(num);

	return (count);
}

#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * printint - prints decimal integer
 * @d: the integer
 *
 * Return: number of chars written
 */
int printint(int d)
{
	char *buffer = NULL;
	int temp = d, size;
	int num_of_digits = 0;
	int i, f = 0;

	if (d == 0)
		return (_putchar('0'));

	if (d < 0)
	{
		f = 1;
		d *= -1;
	}

	while (temp != 0)
	{
		num_of_digits++;
		temp /= 10;
	}

	size = num_of_digits + 1;
	buffer = malloc(sizeof(char) * (size));
	for (i = size - 2; i >= 0; i--)
	{
		buffer[i] = (d % 10) + '0';
		d /= 10;
	}

	buffer[size - 1] = '\0';
	if (f == 1)
	{
		_putchar('-');
		num_of_digits++;
	}

	_puts(buffer);
	free(buffer);

	return (num_of_digits);
}

/**
 * print_rev - prints string in reverse
 * @s: string pointer
 *
 * Return: no. of bytes written
 */
int print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (n);
}

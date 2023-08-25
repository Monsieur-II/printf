#include "main.h"

/**
 * _strlen - prints length of string pointed by *s
 * @s: pointer to string
 *
 * Return: 0;
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

/**
 * print_S - prints non printable chars in hex
 * @list: the list
 *
 * Return: no. of bytes written
 */
int print_S(va_list list)
{
	int i = 0, count = 0;
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		return (_printf("(null)"));

	while (s[i])
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			print_hex(s[i]);
			count += 4;
		}

		else
		{
			_putchar(s[i]);
			count++;
		}
		i++;
	}

	return (count);
}

/**
 * print_hex - prints num in hex format
 * @num: the num
 *
 * Return: the printed chars
 */
void print_hex(char num)
{
	char hex[] = "0123456789ABCDEF";
	int arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	char x;
	int i, j = 0;
	char buffer[5];

	while (num > 0)
	{

		x = num % 16;

		for (i = 0; i < 16; i++)
		{
			if ((int)x == arr[i])
				buffer[j++] = hex[i];
		}
		num /= 16;
	}

	buffer[j] = '\0';

	_puts("\\x");

	if (_strlen(buffer) == 1)
		_putchar(48);

	print_rev(buffer);
}

/**
 * print_uhex - prints num in hex format
 * @num: the num
 *
 * Return: the printed chars
 */
int print_uhex(unsigned int num)
{
	char hex[] = "0123456789abcdef";
	int arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int x, i, j = 0;
	char buffer[64];
	unsigned int number = num;

	if (number == 0)
		return (_putchar('0'));

	while (number > 0)
	{
		x = number % 16;

		for (i = 0; i < 16; i++)
		{
			if (x == arr[i])
				buffer[j++] = hex[i];
		}
		number /= 16;
	}

	buffer[j] = '\0';
	print_rev(buffer);

	x = _strlen(buffer);
	return (x);
}

/**
 * print_uheX - prints num in hex format
 * @num: the num
 *
 * Return: the printed chars
 */
int print_uheX(unsigned int num)
{
	char hex[] = "0123456789ABCDEF";
	int arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int x, i, j = 0;
	char buffer[64];
	unsigned int number = num;

	if (number == 0)
		return (_putchar('0'));

	while (number > 0)
	{
		x = number % 16;

		for (i = 0; i < 16; i++)
		{
			if (x == arr[i])
				buffer[j++] = hex[i];
		}
		number /= 16;
	}

	buffer[j] = '\0';
	print_rev(buffer);

	x = _strlen(buffer);
	return (x);
}

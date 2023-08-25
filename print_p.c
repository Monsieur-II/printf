#include "main.h"

/**
 * print_phex - prints num in hex format
 * @num: the num
 *
 * Return: the printed chars
 */
int print_phex(unsigned long int num)
{
	char hex[] = "0123456789abcdef";
	int arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int x, i, j = 0;
	char buffer[64];
	unsigned long int number = num;

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

	buffer[j++] = 'x';
	buffer[j++] = '0';
	buffer[j] = '\0';
	print_rev(buffer);

	x = _strlen(buffer);
	return (x);
}

/**
 * print_p - prints hexidecimal integer
 * @list: the list to print from
 *
 * Return: the no. of bytes written
 */
int print_p(va_list list)
{
	int count;
	void *add;
	unsigned long int num;

	add = va_arg(list, void *);

	if (add == NULL)
	{
		_puts("(nil)");
		return (5);
	}
	num = (unsigned long int)add;

	count = print_phex(num);

	return (count);
}

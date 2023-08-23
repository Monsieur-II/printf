#include "main.h"

/**
 * checkspec - checks the format specifier
 * @s: the character to check
 *
 * Return: the function to use
 */
int (*checkspec(char s))(va_list)
{
	int i;
	func_t arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", cent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"r", print_r},
		{"R", print_rot},
		{NULL, NULL}};

	for (i = 0; arr[i].t != NULL; i++)
	{
		if (*(arr[i].t) == s)
			return (arr[i].f);
	}
	return (NULL);
}

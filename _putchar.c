#include <unistd.h>
/**
 * _putchar - prints char to stdout
 *@c: the char
 *
 * Return: char c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

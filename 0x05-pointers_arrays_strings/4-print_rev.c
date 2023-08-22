#include "main.h"
/**
 * print_rev - write string in reverse
 *
 * @s: pointer to string to write
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int len = 0;
	int count;

	while (*(s + len) != ('\0'))
	{
		len = len + 1;
	}
	for (count = 1; count <= len; count++)
	{
		_putchar(*(s + (len - count)));
	}
	_putchar('\n');
}

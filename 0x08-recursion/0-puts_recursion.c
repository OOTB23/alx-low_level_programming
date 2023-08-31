#include "main.h"

/**
 * _puts_recursion- function to print string via recursion
 *
 * @s: input string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(*s++);
	}

}

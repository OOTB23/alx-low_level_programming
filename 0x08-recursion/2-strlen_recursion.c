#include "main.h"

/**
 * _strlen_recursion- function to return string length
 *
 * @s: input string
 *
 * Return: int string lengtt
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s > '\0')
	{
		int sum = sum +  _strlen_recursion(s + 1) + 1;
	}
	return (sum);
}


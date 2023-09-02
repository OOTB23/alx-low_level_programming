#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - function checks for uppercase digit
 * @c: The character to check case
 * Return: nothing.
 *
 */
int _isdigit(int c)
{

	int r;

	if (isdigit(c) == 0)
	{
		r = 0;
	}
	else
	{
		r = 1;
	}

	return (r);

}

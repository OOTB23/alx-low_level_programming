#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - function checks for uppercase character
 * @c: The character to check case
 * Return: nothing.
 *
 */
int _isupper(int c)
{

	int r;

	if (isupper(c) == 0)
	{
		r = 0;
	}
	else
	{
		r = 1;
	}

	return (r);

}

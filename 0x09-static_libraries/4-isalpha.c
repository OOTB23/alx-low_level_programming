#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function indicate type aplphabit or not
 * @c: The character to check type
 * Return: nothing.
 *
 */
int _isalpha(int c)
{

	int r;

	if (isalpha(c) == 0)
	{
		r = 0;
	}
	else
	{
		r = 1;
	}

	return (r);

}

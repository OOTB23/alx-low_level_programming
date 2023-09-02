#include "main.h"
#include <ctype.h>
/**
 * _islower - function indicate if character is lowercase
 * @c: The character to check case
 * Return: nothing.
 *
 */
int _islower(int c)
{

	int r;

	if (islower(c) == 0)
	{
		r = 0;
	}
	else
	{
		r = 1;
	}

	return (r);

}

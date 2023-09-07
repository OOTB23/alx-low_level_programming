#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function to creates an array to size of char.
 * @c: The character to intialize arry with
 * @size: size of array
 * Return: array pointer
 *
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(size));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (size--)
		{
			p[size] = c;
		}
		return (p);
	}
}

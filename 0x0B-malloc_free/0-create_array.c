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
	char *p = malloc(size);
	unsigned int i;

	if (size == 0 || p == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}

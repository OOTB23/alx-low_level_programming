#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- function to dublicate string.
 * @str: The input string
 * Return: array pointer
 *
 */
char *_strdup(char *str)
{
	unsigned int i = 1;
	char *p;

	while (*str)
	{
		i++;
	}
	p = malloc(i * sizeof(*str));

	if (i == 0 || p == NULL)
	{
		return (0);
	}

	while (i--)
	{
		p[i] = str[i];
	}
	return (p);
}

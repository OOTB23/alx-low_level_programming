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
	unsigned int i = 0;
	unsigned int c = 0;
	char *p;

	while (*str)
	{
		i++;
	}
	p = malloc(i * sizeof(*str) + 1);

	if (i == 0 || p == NULL)
	{
		return (0);
	}

	for (; c < i; c++)
	{
		p[c] = str[c];
	}
	return (p);
}

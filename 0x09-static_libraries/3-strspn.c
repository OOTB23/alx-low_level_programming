#include "main.h"

/**
 * _strspn- function to fetch substring from a string
 *
 * @s: input string
 * @accept: substring to look for
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (i = 0; accept[i] != s[c]; i++)
		{
			if (accept[i] == '\0')
			{
				return (c);
			}
		}
	}
	return (c);
}

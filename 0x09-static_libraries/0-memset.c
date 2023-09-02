#include "main.h"

/**
 * _memset- function to store in memory location
 *
 * @s: input path
 * @b: value to store
 * @n: number of mem locations
 *
 * Return: mem path after sotre
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

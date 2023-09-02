#include "main.h"

/**
 * _strncpy- copy two strings
 *
 * @dest: string to copy to
 *
 * @src: String to be opy from
 *
 *@n: most number of string bytes
 *
 * Return: string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; (src[c] != '\0') && c < n; c++)
	{
		dest[c] = src[c];
	}

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

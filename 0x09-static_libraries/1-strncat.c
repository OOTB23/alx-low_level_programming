#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string to connetenate it
 *
 * @src: String to be conctenated
 *
 *@n: most number of string bytes
 *
 * Return: string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int c;

	while (dest[len1] != '\0')
	{
		len1 = len1 + 1;
	}
	for (c = 0; (src[c] != '\0') && c < n; c++)
	{
		dest[len1 + c] = src[c];
	}
	dest[len1 + c] = '\0';
	return (dest);
}

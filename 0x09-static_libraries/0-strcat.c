#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string to connetenate it
 *
 * @src: String to be conctenated
 *
 * Return: string.
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int c;

	while (*dest != '\0')
	{
		len1 = len1 + 1;
	}
	for (c = 0; dest[c] != '\0'; c++)
	{
		dest[len1++] = src[c++];
	}

return (dest);
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - copy string to another
 *
 * @src: string to copy
 * @dest: string to copy to
 *
 * Return: nothing.
*/
char *_strcpy(char *dest, char *src)
{
	char *p;

	strcpy(dest, src);
	p = dest;
	return (p);
}

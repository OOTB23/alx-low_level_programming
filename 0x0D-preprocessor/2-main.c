#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- entery point
 *
 *
 * Return: (0) on success
 */
int main(void)
{
	char *f;
	int l = 0;

	f = __FILE__;
	while (f)
	{
		l++;
	}
	for (; f[l] != '/'; l--)
	{
		_putchar(f[l]);
	}
	return (0);
}

#include "main.h"
/**
 * _atoi - write string in reverse
 *
 * @s: string to get in from
 *
 * Return: 0 if string have no number , int with number value
 */

int _atoi(char *s)
{
	
	int ns = 1;
	int result = 0;

	while (*s != ('\0'))
	{
		if (*s == '-')
		{
			ns = ns * (-1);
		}
		else if  (*s > '0' && *s < '9')
		{
			result = (result * 10) + (*s - 48);
			
		}

		else if (result > 0 )
		{
			break;
		}
		 
		
	}
	result = result * ns;	
		
	return (result);
}


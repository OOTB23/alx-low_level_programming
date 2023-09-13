#include "dog.h"
#include <stdio.h>

/**
 * print_dog- function to print struct type dog
 *
 * @d:dog struct
 *
 * Description:function to print dog struct
 *
 * Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

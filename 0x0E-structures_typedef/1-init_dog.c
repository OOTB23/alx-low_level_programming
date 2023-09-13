#include "dog.h"

/**
 * init_dog- function to intialize struct type dog
 *
 * @d:dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Description:function to  define dog ownership
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

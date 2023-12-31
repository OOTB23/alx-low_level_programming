#ifndef DOG_H
#define DOG_H

/**
 * struct dog- struct for dog data
 *
 * @name:dog name
 * @age: dog age
 * @owner: owner name
 *
 * Description: define dog ownership
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

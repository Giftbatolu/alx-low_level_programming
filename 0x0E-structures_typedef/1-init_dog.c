#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a varable of struct dog
 * @d: The pointer to the initialize varible of struct dog
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner: owner to be initialized
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

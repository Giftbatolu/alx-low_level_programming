#include "dog.h"

/**
 * init_dog - function that initialize a stucture.
 * @d: The pinter to the syructure.
 * @name: The first member.
 * @age: The second member
 * @owner: The third member.
 *
 * Return Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

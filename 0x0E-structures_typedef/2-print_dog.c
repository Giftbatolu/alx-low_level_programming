#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that print  struct dog
 * @d: The struct of dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that print name
 * @name: The string to be printed
 * @f: The pointer to the function
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

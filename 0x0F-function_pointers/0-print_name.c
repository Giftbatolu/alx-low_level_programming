#include "function_pointers.h"

/**
 * print_name - function that prints name.
 * @name: The name to be passed.
 * @f: The function pointer.
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	f (name);
}

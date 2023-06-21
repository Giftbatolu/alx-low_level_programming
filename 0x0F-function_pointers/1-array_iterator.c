#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that execute given parameter
 * @array: The array to be checked
 * @size: size of the array
 * @action: The pointer to the function
 *
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!(array) || !(action))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

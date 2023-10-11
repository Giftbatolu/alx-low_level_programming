#include "function_pointers.h"

/**
 * array_iterator - function that execute a function on given
 * parameter of an array.
 * @array: The array to execute.
 * @size: The size of the array.
 * @action: The function pointer.
 *
 * Return:Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;
	for (b = 0; b < size; b++)
		action(array[b]);
}

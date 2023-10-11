#include "function_pointers.h"

/**
 * int_index - function that search for integers.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @cmp: The function pointer.
 *
 * Return: The search element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}

#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - for that search for int
 * @array: Tje array
 * @size: The number of element of the array
 * @cmp: Tje pointer to the function
 *
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(size) || !(array)  || !(cmp))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

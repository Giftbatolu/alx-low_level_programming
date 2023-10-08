#include "main.h"

/**
 * array_range - function that allocate memory for array of integer.
 * @min: The min numberof the array.
 * @max: The max num of the array.
 *
 * Return: pointer to the newly allocated array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int b, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (b = 0; min <= max; b++)
		ptr[b] = min++;

	return (ptr);
}

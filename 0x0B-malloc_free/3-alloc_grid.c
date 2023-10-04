#include "main.h"

/**
 * alloc_grid - function that returns a pointer to 2-dimensional
 * array of integers.
 * @width: The width
 * @height: The height
 *
 * Return: if fails return null else pointer to 2-dimensional.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int b, d;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (b = 0; b < height; b++)
	{
		ptr[b] = malloc(sizeof(int) * width);
		if (ptr[b] == NULL)
		{
			for (; b >= 0; b--)
				free(ptr[b]);
			free(ptr);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (d = 0; d < width; d++)
			ptr[b][d] = 0;
	}
	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that return a pointer to 2-dimensional array
 * @width: The width
 * @height: The height
 *
 * Return: a pointer on sucess else NULL
 */
int **alloc_grid(int width, int height)
{
	int **ch;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (0);
	ch = malloc(sizeof(int *) * height);
	if (ch == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		ch[a] = malloc(sizeof(int) * width);
		if (ch[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ch[a]);
			free(ch);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ch[a][b] = 0;
	}
	return (ch);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create array and initialize it
 * @size: The size
 * @c: The string
 *
 * Return: a pointer if success else NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		ptr[b] = c;
	ptr[b] = '\0';
	return (ptr);
}

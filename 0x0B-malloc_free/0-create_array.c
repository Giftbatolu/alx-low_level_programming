#include "main.h"

/**
 * create_array - function that create array of chars and initialise
 * it with a single char.
 * @size: The size of the array
 * @c: The char to be initialized
 *
 * Return: if fail return NULL esle pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int b;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		ptr[b] = c;
	return (ptr);
}

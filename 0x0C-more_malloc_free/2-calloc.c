#include "main.h"

/**
 * _calloc - fuction that allocate memory for an array
 * @nmemb: The element of the array
 * @size: the size of the array.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (b = 0; b < (size * nmemb); b++)
		ptr[b] = 0;
	return (ptr);
}

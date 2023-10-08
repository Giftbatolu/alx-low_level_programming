#include "main.h"

/**
 * malloc_checked - function that allocate memory using malloc
 * @b: the bytes to be allocated.
 *
 * Return: Memory to the allocated bytes.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

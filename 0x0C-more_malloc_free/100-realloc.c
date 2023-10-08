#include "main.h"

/**
 * _realloc - function that reallocate memory usin malloc and free.
 * @ptr: The previous pointer allocated to the memory block.
 * @old_size: The size allocated to the prevoius memory.
 * @new_size: The new size allocte to the memory.
 *
 * Return: pointer to the allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int b;

	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_ptr != NULL)
	old_ptr = ptr;
	{
		for (b = 0; b < check(old_size, new_size); b++)
		new_ptr[b] = old_ptr[b];
		free(ptr);
		return (new_ptr);
	}
}

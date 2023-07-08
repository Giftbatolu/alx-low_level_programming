#include "main.h"

/**
 * set_bit - function that sets the value of bit to 1 at given index
 * @n:The pointer to the number
 * @index: The index
 *
 * Return: if it worked return 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | (1UL << index));
	return (1);
}

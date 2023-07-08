#include "main.h"

/**
 * clear_bit - function that set the value of a bit to 0 at given
 * index
 * @n: The pointer to number
 * @index: The index
 *
 * Return: if it worked return 1 else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & ~(1UL << index));
	return (1);
}

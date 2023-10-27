#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index.
 * @n: The pointer to the number
 * @index: The index of the given bit.
 *
 * Return: 1 if success or -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

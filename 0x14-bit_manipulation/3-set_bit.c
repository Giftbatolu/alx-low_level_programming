#include "main.h"

/**
 * set_bit - set the number to 1 at given index.
 * @n: The oointer to the number.
 * @index: The index of the number.
 *
 * Return: 1 or -1 if failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}

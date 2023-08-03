#include "main.h"

/**
 * clear_bit - function that set the value of bit to 0.
 * @n: The pointer
 * @index: the index
 *
 * Return: 1 on sucess otherwise 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

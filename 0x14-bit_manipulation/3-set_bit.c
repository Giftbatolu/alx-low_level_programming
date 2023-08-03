#include "main.h"

/**
 * set_bit - function that set the value to 1
 * @n: The num
 * @index: The index
 *
 * Return: 1 on sucess otherwise 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}

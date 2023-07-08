#include "main.h"

/**
 * get_bit - function that return of a bit of a given number
 * @n: The number
 * @index: The index
 *
 * Return: The value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n << index) & 1;
	return (bit_value);
}

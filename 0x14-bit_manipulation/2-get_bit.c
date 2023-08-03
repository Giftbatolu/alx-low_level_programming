#include "main.h"

/**
 * get_bit - function that return the value at an index
 * @n: The number to find the value of
 * @index: The index of the number
 *
 * Return: The value of the bit at the index otherwise -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
}

#include "main.h"

/**
 * get_bit - return bit at a given index.
 * @n: The number to return.
 * @index: The index of the number.
 *
 * Return: The value at the index or -1 if failed.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index > 63)
		return (-1);
	bit_num = (n >> index) & 1;
	return (bit_num);
}

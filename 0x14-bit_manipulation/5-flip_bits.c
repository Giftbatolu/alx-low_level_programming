#include "main.h"

/**
 * flip_bits - return the number of bit to flip to change from one
 * number to another.
 * @n: The first number.
 * @m: The second number
 *
 * Return: The number of bit to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, count = 0;
	unsigned long int result;
	unsigned long int exor = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		result = exor >> b;
		if (result & 1)
			count++;
	}
	return (count);
}

#include "main.h"

/**
 * flip_bits - function that return the numbet of bits to flip to get
 * fron one to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The result of the flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int v_count = 0;
	unsigned int b = 0;

	while (b <= 63)
	{
		if ((n & 1) != (m & 1))
			v_count++;

		n = n >> 1;
		m = m >> 1;
		b++;
	}
	return (v_count);
}

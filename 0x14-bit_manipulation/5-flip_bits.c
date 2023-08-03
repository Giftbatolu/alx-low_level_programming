#include "main.h"

/**
 * flip_bits - function that return the number of bit to be flip to
 * get fron one nimber to another
 * @n: The stating number
 * @m: The resilting number
 *
 * Return: an integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b;
	int d = 0;
	unsigned long int mask;
	unsigned long int flag_xor = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		mask = flag_xor >> b;
		if (mask & 1)
			d++;
	}
	return (d);
}

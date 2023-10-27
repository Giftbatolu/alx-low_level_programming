#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: The number to print the binary of.
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int b, count = 0;
	unsigned long int binary;

	for (b = 63; b >= 0; b--)
	{
		binary = n >> b;
		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

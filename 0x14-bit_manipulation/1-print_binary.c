#include "main.h"

/**
 * print_binary - functiin that print the binary presentation of num
 * @n: The number to be printed
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	int b;
	int d = 0;
	unsigned long int mask;

	for (b = 63; b >= 0; b--)
	{
		mask = n >> b;
		if (mask & 1)
		{
			_putchar('1');
			d++;
		}
		else if (d)
			_putchar('0');
	}
	if (!d)
		_putchar('0');
}

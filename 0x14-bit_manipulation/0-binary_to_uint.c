#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that convert a binary to unsigned int
 * @b: pointer to the string to be converted
 *
 * Return: The xonverted nunber if sucess otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d;
	unsigned int dec_num = 0;

	if (b == NULL)
		return (0);
	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[d] - '0');
	}
	return (dec_num);
}

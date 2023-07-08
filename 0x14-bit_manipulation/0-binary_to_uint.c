#include "main.h"

/**
 * binary_to_uint - function that convert binary to unsigned int
 * @b: The character to be printed
 *
 * Return: The result of the function
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int dec_num = 0;

	if (b == NULL)
		return (0);
	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] == '1')
			dec_num = (dec_num << 1) | 1;
		else if (b[d] == '0')
			dec_num <<= 1;
		else if (b[d] != '0' && b[d] != '1')
			return (0);
	}
	return (dec_num);
}

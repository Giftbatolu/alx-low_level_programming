#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int.
 * @b: The pointer to the string to be converted.
 *
 * Return: The convert number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}
	return (result);
}

#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 for big endian 1 for small endian.
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *ch = (char *) &b;

	return (*ch);
}

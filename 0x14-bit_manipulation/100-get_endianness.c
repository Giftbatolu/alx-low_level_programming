#include "main.h"

/**
 * get_endianness - function that check for endianness
 *
 * Return: 1 if endians is big else 0
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *ptr = (char *)&b;

	return (*ptr);
}

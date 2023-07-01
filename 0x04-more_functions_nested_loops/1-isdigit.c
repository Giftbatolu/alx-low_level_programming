#include "main.h"

/**
 * _isdigit - function rhat check for digit
 * @c: The digit to be checked
 *
 * Return: 1 is digit esle 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

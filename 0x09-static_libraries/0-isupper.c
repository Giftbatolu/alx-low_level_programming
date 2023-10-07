#include "main.h"

/**
 * _isupper - function that check for upper caracter
 * @c: The charactet to be checked
 *
 * Return: 1 if it is upper else 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

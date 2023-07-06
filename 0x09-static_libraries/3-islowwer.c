#include "main.h"

/**
 * _islower - function that check for lower character
 * @c: The character ti be checked
 *
 * Return: 1 if it is lower case character otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

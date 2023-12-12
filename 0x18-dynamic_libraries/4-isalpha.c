#include "main.h"

/**
 * _isalpha - function that check for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if it is alpha else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

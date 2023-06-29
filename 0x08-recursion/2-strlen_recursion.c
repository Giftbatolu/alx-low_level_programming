#include "main.h"

/**
 * _strlen_recursion - function that return the lenth of a string
 * @s: The lenght od the string
 *
 * Return: An interger value
 */
int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s)
	{
		str++;
		str += (_strlen_recursion(s + 1));
	}
	return (str);
}

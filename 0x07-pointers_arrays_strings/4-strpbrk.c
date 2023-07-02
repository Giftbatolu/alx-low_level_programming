#include "main.h"

/**
 * _strpbrk - function that searches for strings
 * @s: The strings
 * @accept: The strings
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}

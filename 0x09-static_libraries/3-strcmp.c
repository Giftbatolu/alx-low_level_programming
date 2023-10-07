#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int b = 0;

	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}
		b++;
	}
	return (0);
}

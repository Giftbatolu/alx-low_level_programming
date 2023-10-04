#include "main.h"

/**
 * str_concat - function that concatenate two string
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: on failure return null.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int b, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	b = d = 0;
	while (s1[b] != '\0')
		b++;
	while (s2[d] != '\0')
		d++;
	ptr = malloc(sizeof(char) * (b + d + 1));
	if (ptr == NULL)
		return (NULL);
	b = d = 0;
	while (s1[b] != '\0')
	{
		ptr[b] = s1[b];
		b++;
	}
	while (s2[d] != '\0')
	{
		ptr[b] = s2[d];
		b++, d++;
	}
	ptr[b] = '\0';
	return (ptr);
}

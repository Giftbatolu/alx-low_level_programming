#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _memset - function that fill the memory
 * @s: the space to be filled
 * @b: the char
 * @n: The number of bytes
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		s[d] = b;
	return (s);
}

/**
 * _calloc - function that allocate memory for an array
 * @nmemb: The array
 * @size: The size
 *
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	_memset(str, 0, nmemb * size);
	return (str);
}

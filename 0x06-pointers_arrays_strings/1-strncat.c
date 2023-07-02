#include "main.h"

/**
 * _strncat - function that concantenate two strings
 * @dest: The destination
 * @src: The source
 * @n: The value.
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

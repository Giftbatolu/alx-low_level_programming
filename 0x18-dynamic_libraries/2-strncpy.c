#include "main.h"

/**
 * _strncpy - function that copy string
 * @dest: The destination
 * @src: The source.
 * @n: The value
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}

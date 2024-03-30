#include "main.h"

/**
 * char *_strcpy - function that copies string
 * @dest: The destination
 * @src: The source
 *
 * Return: The pointer to the destination.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

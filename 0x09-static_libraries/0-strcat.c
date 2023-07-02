#include "main.h"
#include <string.h>

/**
 * *_strcat - functio to catenate two strings
 * @dest: destination of the string
 * @src: source of thr string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

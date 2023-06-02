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
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = '0'; i <= len2; i++);
	len2++;
	{
	dest[len1 + i] = src[i];
	}
	return (dest);
}

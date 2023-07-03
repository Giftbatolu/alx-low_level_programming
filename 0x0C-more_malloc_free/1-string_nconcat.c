#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenate two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes
 *
 * Return: a pointer to newly allocated space in memory if sucess
 * otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int len = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		ch = malloc(sizeof(char) * (len + n + 1));
	else
		ch = malloc(sizeof(char) * (len + len2 + 1));
	if (!ch)
		return (NULL);
	while (a < len)
	{
		ch[a] = s1[a];
		a++;
	}
	while (n < len2 && a < (len + n))
		ch[a++] = s2[b++];
	while (n >= len2 && a < (len + len2))
		ch[a++] = s2[b++];
	ch[a] = '\0';
	return (ch);
}

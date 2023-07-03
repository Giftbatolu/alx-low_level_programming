#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - funtion that comcatenate two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: pointer if success otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	int b = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[b] != '\0')
		b++;
	while (s2[j] != '\0')
		j++;
	ch = malloc(sizeof(char) * (b + j + 1));
	if (ch == NULL)
		return (NULL);
	while (s1[b] != '\0')
	{
		ch[b] = s1[b];
		b++;
	}
	while (s2[j] != '\0')
	{
		ch[b] = s2[j];
		b++;
		j++;
	}
	ch[b] = '\0';
	return (ch);
}

#include "main.h"
#include  <stdio.h>
#include   <stdlib.h>

/**
 * _strdup - function that duplicate strings
 * @str: The string
 *
 * Return: pointer if success otjerwise NULL
 */
char *_strdup(char *str)
{
	char *ch;
	int b = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[b] != '\0')
		b++;
	ch = malloc(sizeof(char) * (b + 1));
	if (ch == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		ch[j] = str[j];
	return (ch);
}

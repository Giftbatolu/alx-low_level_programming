#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_letter - function that help to count strings
 * @s: The string
 *
 * Return: the sting count
 */
int count_letter(char *s)
{
	int num = 0;
	int b;
	int d = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			num = 0;
		else if (num == 0)
		{
			num = 1;
			d++;
		}
	}
	return (d);
}

/**
 * strtow - function that split stringd
 * @str: The string
 *
 * Return: A pointer if sucess if success else NULL.
 */
char **strtow(char *str)
{
	char **string;
	char *ch;
	int i, j = 0, len = 0;
	int letters, k = 0, start, end;

	while (*(str + len))
		len++;
	letters = count_letter(str);
	if (letters == 0)
		return (NULL);
	string = (char **)malloc(sizeof(char *) * (letters + 1));
	if (string == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				ch = (char *)malloc(sizeof(char) * (k + 1));
				if (ch == NULL)
					return (NULL);
				while (start < end)
					*ch++ = str[start++];
				*ch = '\0';
				string[j] = ch - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}
	string[j] = NULL;
	return (string);
}

#include "main.h"

/**
 * _strdup - function that duplicate strings
 * @str: The character to be duplicated
 *
 * Return: if fails return null else pointer to the duplicated chars
 */
char *_strdup(char *str)
{
	char *ptr;
	int b, d = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;
	ptr = malloc(sizeof(char) * (b + 1));
	if (ptr == NULL)
		return (NULL);
	for (d = 0; str[d]; d++)
		ptr[d] = str[d];
	return (ptr);
}

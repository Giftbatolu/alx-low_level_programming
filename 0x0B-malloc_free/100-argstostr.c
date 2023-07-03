#include "main.h"
#include <stdlib.h>

/**
 * argstostr - functoin that concantenate argument
 * @ac: The argument count
 * @av: The array
 *
 * Return: a pointer to a new string if sucess else NULL
 */
char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;
	ptr = malloc(sizeof(char) * d + 1);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		if (ptr[c] == '\0')
			ptr[c++] = '\n';
	}
	return (ptr);
}

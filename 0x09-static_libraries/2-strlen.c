#include "main.h"

/**
 * _strlen - fuction that return length of string
 * @s: string to print
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	length++;
	return (length);
}

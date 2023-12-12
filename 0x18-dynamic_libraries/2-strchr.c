#include "main.h"
/**
 * _strchr - function to locate a character in string
 * @s:The string to checked
 * @c: The character to find
 *
 * Return: a pointer to the first occurance if c is found
 * otherwise null
 */
char *_strchr(char *s, char c)
{
	int ch;

	for (ch = 0; s[ch] >= '\0'; ch++)
	{
		if (s[ch] == c)
			return (s + ch);
	}
	return ('\0');
}

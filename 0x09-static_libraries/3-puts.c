#include "main.h"

/**
 * _puts - function that print a string followed by new line
 * @str: string to be print
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - fuction that print a strong followed by new line
 * @str: string to print
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

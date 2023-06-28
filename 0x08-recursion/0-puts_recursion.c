#include "main.h"

/**
 * _puts_recursion - function tha print string
 * @s: The characyer to be printed.
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

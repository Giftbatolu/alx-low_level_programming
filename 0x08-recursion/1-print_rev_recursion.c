#include "main.h"

/**
 * _print_rev_recursion - function that print a string in reverse
 * @s: The character to be printed
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

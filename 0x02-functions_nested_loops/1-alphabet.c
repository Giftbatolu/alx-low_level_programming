#include "main.h"

/**
 * print_alphabet - function that print alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

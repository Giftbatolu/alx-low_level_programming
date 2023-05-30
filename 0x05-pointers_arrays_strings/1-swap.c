#include "main.h"

/**
 * swap_int - function to swap tje values of two intergers
 * @a: integer to be swap
 * @b: integer to be swap
 */
void swap_int(int *a, int *b)
{
	int ch;

	ch = *a;
	*a = *b;
	*b = ch;
}

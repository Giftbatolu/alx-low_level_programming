#include "main.h"

/**
 * _pow_recursion - function that print the value of raised to power
 * @x: The base value
 * @y: The power
 *
 * Return: The result of the function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

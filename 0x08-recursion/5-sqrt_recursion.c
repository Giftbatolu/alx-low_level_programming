#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int b);

/**
 * _sqrt_recursion - function that return sqrt of natural number
 * @n: The square of the number
 *
 * Return: The result ofthe square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - function tha print sqr root of natural no
 * @n: The square of the number
 * @b: The iterator
 *
 * Return: The result
 */
int actual_sqrt_recursion(int n, int b)
{
	if (b * b > n)
		return (-1);
	if (b * b == n)
		return (b);
	return (actual_sqrt_recursion(n, b + 1));
}

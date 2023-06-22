#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that return the sum of all its arg
 * @n: The argument to be passed
 *
 * Return: the result ot the argument
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;

	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}

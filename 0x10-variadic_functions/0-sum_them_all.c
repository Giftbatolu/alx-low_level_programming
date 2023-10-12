#include "variadic_functions.h"

/**
 * sum_them_all - function returns sum all the parameters pass to it
 * @n: The fixed number.
 * @...: The ellipsis.
 *
 * Return: The sum of all the argument.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int b;

	va_list ptr;

	va_start(ptr, n);
	for (b = 0; b < n; b++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}

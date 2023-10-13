#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers..
 * @separator: The string to be printed between number.
 * @n: The number of integers pass to the function.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;

	va_list ptr;

	va_start(ptr, n);
	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && b < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}

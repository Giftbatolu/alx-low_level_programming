#include "variadic_functions.h"

/**
 * print_strings - function that print strings.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 *
 * Return: nothings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	char *str;

	va_list ptr;

	va_start(ptr, n);
	for (b = 0; b < n; b++)
	{
		str = va_arg(ptr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && b < n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}

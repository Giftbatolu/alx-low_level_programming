#include "main.h"

/**
 * main - The entry point
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	if (argc)
		printf("%d\n", argc - 1);

	return (0);
}

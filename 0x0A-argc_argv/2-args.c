#include "main.h"

/**
 * main - The entry point
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int b;

	while (argv[b])
	{
		printf("%s\n", argv[b]);
		b++;
	}

	return (0);
}

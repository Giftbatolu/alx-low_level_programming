#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * main - function that add two numbers.
 * @argc: The argument count
 * @argv: The array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int b;
	int sum = 0;
	unsigned int j;
	char *i;

	if (argc > 1)
	{
		for (b = 1; b < argc; b++)
		{
			i = argv[b];
			for (j = 0; j < strlen(i); j++)
			{
				if (i[j] < 48 || i[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(i);
			i++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

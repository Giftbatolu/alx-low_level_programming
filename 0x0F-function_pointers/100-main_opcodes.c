#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that print the opcode of itself
 * @argc: The argument count
 * @argv: Tje array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%.2x\n", opcode[i]);
			break;
		}
		printf("%.2x\n", opcode[i]);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - print all the arguments
 * @argv: array of argument
 * @argc: number of argument count
 *
 * Return: Always 0(sucess)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}

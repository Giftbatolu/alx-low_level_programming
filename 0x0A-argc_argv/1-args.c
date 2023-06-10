#include "main.h"
#include <stdio.h>

/**
 * main - print the number of argument
 * @argv: array of argument
 * @argc: number if argument count
 *
 * Return: Always 0(sucess)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>

/**
 * main - function that print the name of the file it was compile from
 *
 * Return: The name of the file.
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}

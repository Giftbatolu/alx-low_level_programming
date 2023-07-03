#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _atoi - function that covert sting to integer
 * @s: The string
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int len = 0;
	int d = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
/**
 * main - function that multiply tow numbers
 * @argc: The argument count
 * @argv: The array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	if (argc == 3)
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

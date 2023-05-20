#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int ch;

	ch = '0';
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

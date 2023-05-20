#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

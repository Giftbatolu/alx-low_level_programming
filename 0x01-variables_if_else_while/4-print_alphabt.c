#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	char e, q;

	e = 'e';
	q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != e && ch != q)
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

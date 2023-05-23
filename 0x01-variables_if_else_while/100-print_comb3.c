#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch, n;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (n = '1'; n <= '9'; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != '8' || n  != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

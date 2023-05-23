#include <stdio.h>
/**
 * main - Entry piont
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int ch, n, m;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (n = '1'; n <= '9'; n++)
		{
			for (m = '2'; m <= '9'; m++)
			{
				if (m > n && n > ch)
				{
					putchar(ch);
					putchar(n);
					putchar(m);
					if (ch != '7' || n  != '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

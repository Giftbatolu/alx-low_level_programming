#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char is %zu byte(s)\n", sizeof(char));
	printf("size of a int is %zu byte(s)\n", sizeof(int));
	printf("size of a long int is %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int is %zu byte(s)\n", sizeof(long long int));
	printf("size of a float is %zu byte(s)\n", sizeof(float));
	return (0);
}

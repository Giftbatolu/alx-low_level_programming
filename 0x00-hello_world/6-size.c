#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char is %zu bytes\n", sizeof(char));
	printf("size of a int is %zu bytes\n", sizeof(int));
	printf("size of a long int is %zu bytes\n", sizeof(long int));
	printf("size of a long long int is %zu bytes\n", sizeof(long long int));
	printf("size of a float is %zu bytes\n", sizeof(float));
	return (0);
}

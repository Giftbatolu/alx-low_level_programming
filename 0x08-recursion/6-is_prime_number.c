#include "main.h"

int checkup_prime(int n, int b);
/**
 * is_prime_number - ruturn if the number is prime
 * @n: The number to be checked
 *
 * Return: An inyerger value
 */
int is_prime_number(int n)
{
	return (checkup_prime(n, 1));
}
/**
 * checkup_prime - function that check prime number
 * @n: The number to be checked
 * @b: The itetator.
 *
 * Return: 1 if it is orime otherwise 0.
 */
int checkup_prime(int n, int b)
{
	if (n <= 1)
		return (0);
	if (n % b == 0 && b > 1)
		return (0);
	if ((n / b) < b)
		return (1);
	return (checkup_prime(n, b + 1));
}

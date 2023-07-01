#include "main.h"

int checkup_palin(char *s, int a, int b);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that check if strind is palindrome
 * @s: The string to be checked
 *
 * Return: 1 if it is palindrone else 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checkup_palin(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns tthe lenght of the string
 * @s: The string
 *
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * checkup_palin - check for palindrome
 * @s: string to be checked
 * @a: The itrrator.
 * @b: lenght of the string.
 *
 * Return: 1 if the number is palindrome otherwise 0.
 */
int checkup_palin(char *s, int a, int b)
{
	if (*(s + a) != *(s + b - 1))
		return (0);
	if (a >= b)
		return (1);
	return (checkup_palin(s, a + 1, b - 1));
}

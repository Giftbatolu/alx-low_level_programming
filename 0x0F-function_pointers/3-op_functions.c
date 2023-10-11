#include "3-calc.h"

/**
*op_add - Function that add two numbers
*@a:The first number
*@b:The second number
*
*Return:The result of addition.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - Function that substract of two numbers
*@a:The first number
*@b:The second number
*
*Return: The result of subtraction.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - Function that multiply two numbers
*@a:The first number
*@b: The second number
*
*Return: The result multiplication.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - Function that find division of two numbers.
*@a: The first number.
*@b: The second number.
*
*Return: The result quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - Function that find remainder of  division of two numbers.
*@a: The first number.
*@b: The second number.
*
*Return: The result remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}

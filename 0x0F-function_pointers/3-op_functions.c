#include <stdio.h>
#include <stdlib.h>
/**
 *  op_add - add number
 * @a: first number
 * @b: Second number
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that rest
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function multiply
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that Divide
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
return (a / b);
}
/**
 * op_mod - function for module
 * @a: first
 * @b: second
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
return (a % b);
}

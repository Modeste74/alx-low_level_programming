#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two parameters
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts two parameters
 * @a: num1
 * @b: num2
 * Return: substruct
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two parameters
 * @a: num1
 * @b: num2
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two parameters
 * @a: num1
 * @b: num2
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - find the modulus of two parameters
 * @a: num1
 * @b: num2
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

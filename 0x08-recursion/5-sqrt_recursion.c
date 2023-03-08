#include "main.h"

/**
 * _solve - entry point
 * @guess: possible squareroot of n
 * @n: squareroot to be determined
 * Return: Solution
 */
int _solve(int guess, int n)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess < n)
	{
		return (_solve(guess += 1, n));
	}
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (-1);
}
/**
 * _sqrt_recursion - makes use of _solve
 * @n: squareroot to be determined
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	int guess = 0;

	if (guess < 0)
	{
		return (-1);
	}
	return (_solve(guess, n));
}

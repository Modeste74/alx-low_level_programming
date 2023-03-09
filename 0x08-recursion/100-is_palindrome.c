#include "main.h"

int check_for_pali(char *s, int n, int l);
int length(char *s);

/**
 * is_palindrome - entry point
 * @s: to be determined if a palindrome
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_for_pali(s, 0, length(s)));
}
/**
 * length - for finding length of string
 * @s: string
 * Return: length
 */
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);

	}
	return (1 + length(s + 1));
}
/**
 * check_for_pali - checks for palindrome
 * @s: string
 * @n: iterator
 * @l: length of string
 * Return: 1 or 0
 */

int check_for_pali(char *s, int n, int l)
{
	if (*(s + n) != *(s + l - 1))
	{
		return (0);
	}
	if (n >= l - 1)
	{
		return (1);
	}
	return (check_for_pali(s, n + 1, l - 1));
}

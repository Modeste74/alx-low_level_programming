#include "main.h"

/**
 * *rot13 - prototype head for the function below
 * @str: string to be coded
 * Return: encoded string str
 */
char *rot13(char *str)
{
	int n;
	int m;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; str[n] != '\0'; n++)
	{
		for (m = 0; m < 52; m++)
		{
			if (str[n] == s1[m])
			{
				str[n] = s2[m];
				break;
			}
		}
	}
	return (str);
}

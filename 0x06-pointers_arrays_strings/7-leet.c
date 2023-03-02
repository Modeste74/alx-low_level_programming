#include "main.h"

/**
 * *leet - prototype head for this function
 * @str: string to be changed
 * Return: str changed
 */
char *leet(char *str)
{
	int n, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (n = 0; str[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (str[n] == s1[m])
			{
				str[n] = s2[m];
			}
		}
	}
	return (str);
}

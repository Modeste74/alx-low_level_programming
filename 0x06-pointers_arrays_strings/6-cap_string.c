#include "main.h"
#include <string.h>

/**
 * *cap_string - to be used as head in this function
 *
 * @str: to be capitalized
 * Return: str after capitalization
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (i == 0 ||
				str[i - 1] == ' ' ||
				str[i - 1] == '\n' ||
				str[i - 1] == '\t' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
			str[i] -= 32;
	}
	return (str);
}

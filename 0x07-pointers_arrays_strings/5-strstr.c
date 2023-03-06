#include "main.h"

/**
 * *_strstr - prototype head for below function
 * @haystack: subjectstring to be searched
 * @needle: string to be searched for in subject
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int n = 0;

	while (haystack[n] != '\0')
	{
		if (haystack[n] == *needle)
		{
			return (haystack + n);
		}
		if (*needle == 0)
		{
			return (haystack);
		}
		n++;
	}
	return ('\0');
}

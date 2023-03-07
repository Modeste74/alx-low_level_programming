#include "main.h"

/**
 * *_strstr - prototype head for below function
 * @haystack: subjectstring to be searched
 * @needle: string to be searched for in subject
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int ind = 0;
	char *h = haystack;
	char *n = needle;

	while (haystack[ind] != '\0')
	{
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (haystack[ind] == *needle)
		{
			return (haystack + ind);
		}
		if (*needle == 0)
		{
			return (haystack);
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		ind++;
	}
	return ('\0');
}

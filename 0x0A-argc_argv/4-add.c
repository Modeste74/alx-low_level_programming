#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: string
 * @argc: number of arguements
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int n, sum = 0;

	for (n = 1; n < argc; n++)
	{
		if (*argv[n] < 48 || *argv[n] > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}

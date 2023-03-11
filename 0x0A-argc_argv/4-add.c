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
	int n, m, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m]; m++)
		{
			if (argv[n][m] < 48 || argv[n][m] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*s)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = get_op_func(argv[2]);

	if (s == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", s(num1, num2));
	return (0);
}

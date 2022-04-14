#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int (*g)(int a, int b);
	int resul, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	g =  (*get_op_func(argv[2]));

	if (g == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	resul = g(a, b);

	printf("%d\n", resul);
	return (0);
}

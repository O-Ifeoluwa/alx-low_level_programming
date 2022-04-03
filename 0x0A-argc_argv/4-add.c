#include <main.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program
 * @argc: count
 * @argv: array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum, cen;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		cen = atoi(argv[i]);
		if (cen >= 0)
			sum += cen;
	}
	printf("%d\n", sum);
	return (0);
}

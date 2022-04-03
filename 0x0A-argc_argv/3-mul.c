#include <main.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - takes arguments
 * @argc - count
 * @argv - array
 * Return 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

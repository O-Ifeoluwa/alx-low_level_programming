#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)

/**
 * main - program prints its name ffed by a new line
 * @argc: first argument
 * @argv: second argument
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("Name of program is: %s\n", argv[0]);
	return (0);
}

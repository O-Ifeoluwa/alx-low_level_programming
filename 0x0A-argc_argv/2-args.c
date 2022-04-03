#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: array of strings
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}

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
	int argv_string;

	for (argv_string = 0; argv_string < argc; argv_string++)
		printf("%s\n", argv[argv_string];

	return (0);
}

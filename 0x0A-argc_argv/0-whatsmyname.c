#include <stdio.h>

/**
 * main - program prints its name ffed by a new line 
 * @argc: first argument
 * @argv: second argument
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("Name of program is: %s\n", argv[0]);
	return (0);
}

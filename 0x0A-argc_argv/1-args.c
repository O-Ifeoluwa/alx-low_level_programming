#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: first argument
 * @argv: second argument
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	print("%d\n", argc - 1);
	return (0);
}

#include "main.h"

/**
 * print_rev - function that prints string, in reverse, followed by a new line
 * @s: a string
 *
 * Return: : 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

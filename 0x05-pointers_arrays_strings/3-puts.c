#include "main.h"

/**
 *  * _puts - a function that prints a string to stdout followed by a new line
 * @str: a string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

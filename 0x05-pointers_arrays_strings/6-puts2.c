#include "main.h"

/**
 * puts2 - prints every other character of a string, startig with the first
 *   * @str: a string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

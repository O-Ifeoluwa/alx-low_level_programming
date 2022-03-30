#include "main.h"

/**
 *  _puts_recursion - prints a string, followed by a new line
 *  @s: a string
 *  Return: string?
 */

void _puts_recursion(char *s)
{
	do
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} while ( *s != '\0');
	_putchar('\n');
}

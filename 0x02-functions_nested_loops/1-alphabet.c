#include <stdio.h>
#include "main.h"

/*
 * Print_alphabet - prints an alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}

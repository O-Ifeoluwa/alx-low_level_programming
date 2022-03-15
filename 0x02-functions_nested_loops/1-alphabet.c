#include "main.h"

/*
 * print_alphabet - prints an alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter_of_alphabet = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n')
}

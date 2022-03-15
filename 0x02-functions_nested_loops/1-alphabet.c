#include "main.h"

/*
 * print_alphabet - prints an alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter_of_alphabet = 'a';

	while (letter_of_alphabet <= 'z')
	{
		_putchar(letter_of_alphabet);
		letter_of_alphabet++;
	}
	_putchar('\n');
}

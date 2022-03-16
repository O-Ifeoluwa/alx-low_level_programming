#include "main.h"

/**
 *print_alphabet_x10 - prints 10xs the alphabet
 *
 * Return: this one returns void
 */

void print_alphabet_x10(void)
{
	int starter = 0;
	char letter = 'a';

	while (starter < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		starter++;
	}
}

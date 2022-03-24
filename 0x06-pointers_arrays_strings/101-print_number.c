#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer.
 * Return: void
 */

void print_number(int n)
{
	unsigned int i, d, alphab;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	d = i;
	alphab = 1;

	while (d > 9)
	{
		d /= 10;
		alphab *= 10;
	}

	for (; alphab >= 1; alphab /= 10)
	{
		_putchar(((i / alphab) % 10) + 48);
	}
}

#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: the integer address
 * @b: address of the integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

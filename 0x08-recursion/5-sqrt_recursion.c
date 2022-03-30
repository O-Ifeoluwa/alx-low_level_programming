#include "main.h"

/**
 * _sqrt_recursion(int n) - returns the natural square root of a number
 * @n: an integer
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_rec(n, 1));
}

int _sqrt_rec(int n, int x)
{
	if (n <= 0)
		return (-1);

	if (x * x > n)

		return (-1);

	if (n == x * x)
		return (x);

	return (_sqrt_rec(n, x + 1));
}

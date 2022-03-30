#include "main.h"

/**
 * _sqrt_recursion(int n) - returns the natural square root of a number
 * @n: an integer
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

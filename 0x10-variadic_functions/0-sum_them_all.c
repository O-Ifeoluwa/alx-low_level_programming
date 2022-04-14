#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: an integer
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int i, sum = 0;

	if (n == 0)
		return(0);

	va_start(ad, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ad, unsigned int);

	va_end(ad);

	return (sum);
}

#include "main.h"

/**
 * reset_to_98 - changes the value of n to p
 * Description: pointer to an int as and updates the value it points to to 98.
 * @n: an integer
 * @*p: a pointer to n
 * Return: 0 on success
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 56; /*arbitrarily given number*/
	p = &n;

	printf("value of 'n': %d\n", n);

	*p = 98;

	printf("value of 'n': %d\n", n);
	return (0);
}

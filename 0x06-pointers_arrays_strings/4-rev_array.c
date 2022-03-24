#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: arbitrary array
 * @n: number of elements of the array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, elem;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			elem = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = elem;
		}
	}
}

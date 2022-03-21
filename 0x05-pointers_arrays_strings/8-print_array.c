#include<stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to a number
 * @n : the number
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d", a[i]);
	}
	printf("\n");
}

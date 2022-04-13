#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: bytes
 * @cmp: the function
 * Return: 0 on success
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
	size_t i;

	if (size <=0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}

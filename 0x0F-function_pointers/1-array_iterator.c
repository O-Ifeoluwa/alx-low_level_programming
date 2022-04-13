#include <stddef.h>

/**
 * array_iterator - loops through an array
 * @array: of integers
 * @size: bytes
 * @action: sigh
 * Return 0 on success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}

#include <stdlib.h>
#include "main.h"

/**
 *i malloc_checked - function allocates memory and returns a pointer
 * @b: is an unsigned b
 * Return: 0 on success and 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return(ptr);
}

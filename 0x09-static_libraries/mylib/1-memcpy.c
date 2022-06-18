#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function ...
 * @dest: destination
 * @src: source
 * @n: the int
 *
 * Return: 1 or 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}


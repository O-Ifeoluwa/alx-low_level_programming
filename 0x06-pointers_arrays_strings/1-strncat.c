#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int d;
	int s;

	for (d = 0; dest[d] != '\0'; d++);
	for (s = 0; src[s] != '\0' && n > 0; c++, n--, s++)
	{
		dest[d] = src[s];
	}

	return (dest);
}

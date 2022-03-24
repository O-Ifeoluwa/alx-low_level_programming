#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: number of elements to concatenate
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (*(dest + d) != '\0')
	{
		d++;
	}

	while (s < n)
	{
		*(dest + d) = *(src + s);
		if (*(src + s) == '\0')
			break;
		d++;
		s++;
	}
	return (dest);
}

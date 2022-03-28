#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: byte
 * @s: pointer to memory area
 * Return: 0 on success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned int *s;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

#include <stdlib.h>
#include "main.h"

/**
 * create_array - function creates an array
 * @size: an integer
 * @c: character
 *
 * Return: 1 on fail, 0 on success
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s != NULL)
	{
		for (i = 0; i < size; i++)
			s[i] = c;
	}

	return (s);
}

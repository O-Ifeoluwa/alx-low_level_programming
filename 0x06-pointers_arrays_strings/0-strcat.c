#include "main.h"

/**
 * main - check the code
 * _str: concatenates two strings
 * @src: source
 * @dest: destination
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int d;
	int s;

	d = 0;
	s = 0;

	while (dest[d] && dest[d] != '\0')
		d++;
	while (src[s])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

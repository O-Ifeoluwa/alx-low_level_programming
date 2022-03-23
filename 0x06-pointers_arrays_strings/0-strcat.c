#include "main.h"

/**
 * main - check the code
 * _str: concatenates two strings
 * @src: source
 * @dest: destination
 *
 * Return: pointer to dest
 */

char *_str(char *dest, char *src)
{
	int d = 0;
	int s = 0;

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

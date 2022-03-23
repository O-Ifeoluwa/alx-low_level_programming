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

	for (d = 0; dest[d] != "\0"; d++);
	for (s = 0; src[s] != "\0"; s++)
	{
		dest[d] = src[c];
		d++;
	}

	dest[d] = "\0";
	return (dest);
}

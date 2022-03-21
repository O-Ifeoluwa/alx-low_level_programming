#include "main.h"

/**
 * _strcpy - function copies the string pointed to including the null byte
 * @dest: variable ?destination
 * @src: ?array
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

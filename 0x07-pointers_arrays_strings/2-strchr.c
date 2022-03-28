#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; src[i] != '\0'; i++)
		if (src[i] == c)
			return (s + i);
	if (src[i] == c)
		return (s + i);
	return ('\0');
}

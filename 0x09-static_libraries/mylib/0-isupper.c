#include "main.h"

/**
 * _isupper - a function that checks for uppercase characters
 * @c: a character
 *
 * Return: 1 on failure, 0 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z)
		return (1);
	else
		return (0);
}

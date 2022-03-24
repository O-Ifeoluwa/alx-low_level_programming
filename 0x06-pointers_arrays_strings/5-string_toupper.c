#include "main.h"

/**
 * string_toupper - makes lowercase letters uppercase
 * @s: string.
 * Return: pointer to dest.
 */

char *string_toupper(char *s)
{
	int alphab = 0;

	while (*(s + alphab) != '\0')
	{
		if ((*(s + alphab) >= 97) && (*(s + alphab) <= 122))
			*(s + alphab) = *(s + alphab) - 32;
		alphab++;
	}

	return (s);
}

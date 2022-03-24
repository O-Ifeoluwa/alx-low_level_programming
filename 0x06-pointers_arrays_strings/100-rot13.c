#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string.
 * Return: pointer to dest.
 */

char *rot13(char *s)
{
	int alphab = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + alphab) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + alphab) == alphabet[i])
			{
				*(s + alphab) = rot13[i];
				break;
			}
		}
		alphab++;
	}

	return (s);
}

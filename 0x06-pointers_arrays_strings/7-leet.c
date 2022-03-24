#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string.
 * Return: pointer to dest.
 */

char *leet(char *s)
{
	int alphab = 0, i;
	int lower_letters[] = {97, 101, 111, 116, 108};
	int upper_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + alphab) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + alphab) == lower_letters[i] || *(s + alphab) == upper_letters[i])
			{
				*(s + alphab) = numbers[i];
				break;
			}
		}
		alphab++;
	}

	return (s);
}

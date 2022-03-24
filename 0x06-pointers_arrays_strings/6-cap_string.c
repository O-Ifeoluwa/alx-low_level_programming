#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string.
 * Return: pointer to dest.
 */

char *cap_string(char *s)
{
	int alphab = 0, i;
	int ranno[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + alphab) >= 97 && *(s + alphab) <= 122)
		*(s + alphab) = *(s + alphab) - 32;
	alphab++;

	while (*(s + alphab) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + alphab) == ranno[i])
			{
				if ((*(s + (alphab + 1)) >= 97) && (*(s + (alphab + 1)) <= 122))
					*(s + (alphab + 1)) = *(s + (alphab + 1)) - 32;
				break;
			}
		}
		alphab++;
	}
	return (s);
}

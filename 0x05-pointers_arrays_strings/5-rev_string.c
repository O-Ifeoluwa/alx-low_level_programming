#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: a string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int revv;
	int j;
	char c;

	while (s[i] != '\0')
		i++;

	i--;
	revv = i;
	j = i / 2;
	i = 0;

	while (i <= j)
	{
		c = s[i];
		s[i] = s[revv];
		s[revv] = c;
		i++;
		revv--;
	}
}

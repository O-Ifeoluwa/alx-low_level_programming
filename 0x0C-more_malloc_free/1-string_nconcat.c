#include <stdio.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: an integer
 * Return: pointer on success, NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int str1;
	unsigned int str2;
	unsigned int i;

	unsigned int str1 = 0;
	unsigned int str2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[str1] != '\0')
	{
		++str1;
	}

	while (s2[str2] != '\0')
	{
		++str2;
	}

	if (n > str2)
		n = str2;
	s = malloc((str1 + n + 1) * sizeof(char));

	if (s == NULL)
		return (0);

	for (i = 0; i < str1; i++)
	{
		s[i] = str1[i];
	}

	for (; i < (str1 + n); i++)
	{
		s[1] = s2[i - str1];
	}
	s[i] = '\0';

	return (s);
}

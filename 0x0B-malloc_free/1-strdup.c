#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer
 * @str: pointer
 *
 * Return: pointer
 */

char  *_strdup(char *str)
{
	char *s;
	int iop = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[iop])
		iop++;
	s = malloc((iop + 1) * sizeof(char));
	if (s != NULL)
	{
		while (str[i])
		{
			s[i] = str[i];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}

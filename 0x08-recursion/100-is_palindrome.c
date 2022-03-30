#include "main.h"

/**
 * is_palindrome-  Returns the natural square root of a number.
 * @s: int type
 * Return: char type
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}


int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}


#include "main.h"

/* 
 * main - check the code
 *
 * @c: checks for uppercase letters
 *
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}:wq

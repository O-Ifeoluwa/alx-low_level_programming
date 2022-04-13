#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: name to print
 * @f: function
 * Return: 0 on success
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}

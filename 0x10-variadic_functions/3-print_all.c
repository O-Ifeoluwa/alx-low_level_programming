#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 *
 * Return: 0 on success
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *non = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'a':
					printf("%s%c", non, va_arg(list, int));
					break;
				case 'b':
					printf("%s%d", non, va_arg(list, int));
					break;
				case 'c':
					printf("%s%f", non, va_arg(list, double));
					break;
				case 'd':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", non, str);
					break;
				default:
					i++;
					continue;
			}
			non = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}

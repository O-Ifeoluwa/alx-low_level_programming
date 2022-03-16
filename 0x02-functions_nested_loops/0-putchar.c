#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 on success
 */

int main(void)
{
	char res[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(res[i]);
	}
	_putchar('\n');

	return (0);
}

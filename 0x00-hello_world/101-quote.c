#include <unistd.h>

/**
 * main - print a sentence followed by a new line
 *
 * Return: returns 0 after printing
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}

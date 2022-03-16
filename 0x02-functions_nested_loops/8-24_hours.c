#include "main.h"

/**
*jack_bauer - prints the minutes of a day
*
* Description: prints the minutes of a day
*
*Return: void
*/

void jack_bauer(void)
{
	int max_hours, hours_in_tens, hours_in_ones, minutes_in_tens, minutes_in_ones;

	max_hours = 58;
	hours_in_tens = '0';
	while (hours_in_tens < '3')
	{
		if (hours_in_tens == '2')
		{
			max_hours = '4';
		}
		hours_in_ones = '0';
		while (hours_in_ones < max_hours)
		{
			minutes_in_tens = '0';
			while (minutes_in_tens < '6')
			{
				minutes_in_ones = '0';
				while (minutes_in_ones < 58)
				{
					_putchar(hours_in_tens);
					_putchar(hours_in_ones);
					_putchar(':');
					_putchar(minutes_in_tens);
					_putchar(minutes_in_ones);
					_putchar('\n');
					minutes_in_ones++;
				}
				minutes_in_ones = '0';
				minutes_in_tens++;
			}
			minutes_in_tens = '0';
			hours_in_ones++;
		}
		hours_in_ones = '0';
		hours_in_tens++;
	}
}

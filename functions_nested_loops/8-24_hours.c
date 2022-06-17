#include "main.h"

/**
*jack_bauer - Entry point
*
*Description: Print minute of the
*day stating from 00:00 to 23:59.
*
*Return: 0
*/

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0 ; hours <= 23 ; hours++)
	{
		for (minutes = 0 ; minutes <= 59 ; minutes++)
		{
			if (hours < 10)
			{
				_putchar('0');
				_putchar(hours + '0');
			}
			else
			{
				_putchar(hours / 10 + '0');
				_putchar(hours % 10 + '0');
			}

			_putchar(':');

			if (minutes < 10)
			{
				_putchar('0');
				_putchar(minutes + '0');
			}
			else
			{
				_putchar(minutes / 10 + '0');
				_putchar(minutes % 10 + '0');
			}

			_putchar('\n');

		}
	}
}

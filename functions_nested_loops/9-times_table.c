#include "main.h"

/**
*main - Entry point
*
*Description: print times table 9
*
*Return: 0
*/

void times_table(void)
{
	int i;
	int o;
	int r;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (o = 0 ; o <= 9 ; o++)
		{
			r = i * o;

			if (r > 9)
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			else 
			{
				if(o != 0)
				{
					_putchar(' ');
				}
				_putchar(r + '0');
			}
			if(o != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

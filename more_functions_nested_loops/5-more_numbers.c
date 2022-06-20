#include "main.h"

/**
*more_numbers - Entry point
*Description: pritn numbers form 0 t0 14
*and 1o times.
*Return: 0
*/

void more_numbers(void)
{
	int i, o;

	for (o = '0' ; o <= '9' ; o++)
	{
		for (i = 0 ; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
		_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

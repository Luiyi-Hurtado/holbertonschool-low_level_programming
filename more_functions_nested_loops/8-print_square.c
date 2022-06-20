#include "main.h"

/**
*print_square - Entry point
*@size: is to type int
*Description: print square
*return: 0
*/

void print_square(int size)
{
	int i = 0;
	int s = 0;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (s = 0 ; s < size ; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

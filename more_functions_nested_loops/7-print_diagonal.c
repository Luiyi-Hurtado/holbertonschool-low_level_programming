#include "main.h"

/**
*print_diagonal - Entry point
*@n: is to type int
*Description: print \ in diagonal
*Return: 0
*/

void print_diagonal(int n)
{
	int i = 0;
	int d = 0;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (d = i ; d > 0 ; d--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


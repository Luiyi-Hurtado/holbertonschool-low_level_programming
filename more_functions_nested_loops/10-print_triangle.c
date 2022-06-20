#include "main.h"

/**
*print_triangle - Entry point
*Description: print the triangle and size
*is the size of the triangle
@size: is type int.
*Return: 0
*/

void print_triangle(int size)
{
	int i, s, c = 0;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (s = i ; s <= size - 1 ; s++)
			{
				if (s != (size - 1))
				{
					_putchar(' ');
				}
			}
			for (c = i ; c >= 0 ; c--)
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

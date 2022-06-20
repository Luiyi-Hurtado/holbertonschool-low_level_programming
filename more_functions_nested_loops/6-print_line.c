#include "main.h"

/**
*print_line - Entry point
*@n: is to type int
*Description: print line.
*Return: 0
*/

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

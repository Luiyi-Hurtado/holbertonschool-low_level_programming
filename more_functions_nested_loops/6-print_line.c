#include "main.h"

/**
*
*
*
*
*
*
*
*
*/

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}

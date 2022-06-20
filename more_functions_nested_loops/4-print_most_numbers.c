#include "main.h"

/**
*print_most_numbers - Entry point
*Description: print tumber drom 0 to 9
*but not print 2 and 4.
*Return: 0
*/

void print_most_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i != '2' &&  i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

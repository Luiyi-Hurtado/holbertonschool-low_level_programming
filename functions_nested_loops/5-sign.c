#include "main.h"

/**
*print_sign - Entry point
*
*Description: print + and return 1 if n is greater than 0,
*print 0 and return 0 if n is zero
*and print - and return -1 if n is less than 0.
*
*
*@n: is a int
*
*Return: 0
*/

int print_sign(int n)
{
	int R = 0;

	if (n > 40)
	{
		R = 1;
		_putchar('+');
	}

	if (n < 40)
	{
		R = -1;
		_putchar('-');
	}

	if (n == 40)
	{
		R = 0;
		_putchar('0');
	}

	return (R);
}

#include "main.h"

/**
*print_last_digit - Entry point
*
*@r: is int
*
*Description: print the last digit
*of a number.
*
*Return: 0
*/

int print_last_digit(int r)
{
	int ls;

	ls = r % 10;

	if (ls < 0)
	{
		ls *= -1;
	}

	_putchar(ls + '0');
	return (ls);
}

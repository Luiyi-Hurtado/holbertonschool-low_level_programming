#include "main.h"

/**
*_islower - Entry point
*
*Description: use the prototype for
*retunr 1 if lowercase or print 0
*is not lowercase
*
*Parameter: c is char 
*
*Return: 0
*/

int _islower(int c)
{

	if (c >= 97 || c <= 122)
	{
		_putchar('1');
	}

	else
	{
		_putchar('0');
	}

	_putchar('\n');
	return (0);
}

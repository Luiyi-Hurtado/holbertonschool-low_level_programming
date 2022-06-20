#include "main.h"

/**
*_isdigit - Entry point
*@c: is a type int
*Description: returns 1 if the digit
*is 0 through 9.
*Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}

#include "main.h"

/**
*_isalpha - Entry poit
*@c: is int
*
*Description: print 1 if the letters
*is lowercase or uppercase
*
*Return: 0
*/

int _isalpha(int c)
{
	int a = 0;

	if (c >= 97 && c <= 122)
	{
		a = 1;
	}
	if (c >= 65 && c <= 90)
	{
		a = 1;
	}

	return (a);
}

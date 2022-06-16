#include "main.h"

/**
*_islower - Entry point
*
*Description: use the prototype for
*retunr 1 if lowercase or print 0
*is not lowercase
*
*Parameter: c is int
*
*Return: 0
*/

int _islower(int c)
{
	int v = 0;

	if (c >= 97 && c <= 122)
	{
		v = 1;
	}

return (v);
}

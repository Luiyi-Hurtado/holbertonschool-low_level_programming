#include "main.h"
/**
*print_to_98 - Entry point
*
*Description: prints all numbers from n to 98
*@n: is a number int
*
*Return: 0
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98 ; n++)
		{
			if (n != 98)
			{
				_putchar(n);
			}
			else
			{
				_putchar(n);
				_putchar('\n');
			}
		}
	}	
	else if (n >= 98)
	{
		for (; >= 98 ; n--)
		{
			if (n != 98)
			{
				_putchar(n);
			}
			else
			{
				_putchar(n);
				_putchar('\n');
			}
		}
	}
}

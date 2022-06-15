#include "main.h"

/**
*print_alphabet - Entry point
*
*Description: print the alphabet
*can use the prototype of the task 1
*
*Return: 0
*/

void print_alphabet(void)
{
	char i;

	for (i =  'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

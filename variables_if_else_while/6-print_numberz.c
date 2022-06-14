#include <stdio.h>

/**
*main - Entry point
*
*Description: print number of base 10
*starting from 0, only use the putchar
*and use only use twice putchar.
*
*Return: 0
*/

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

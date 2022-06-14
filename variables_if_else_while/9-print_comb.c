#include <stdio.h>

/**
*main - Entry point
*
*Description: print a single numbers
*the numbers separated by ', ', can
*only used putchcar and can only use
*four times in the code.
*
*Return: 0
*/

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

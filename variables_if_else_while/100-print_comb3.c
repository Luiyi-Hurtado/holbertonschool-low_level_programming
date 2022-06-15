#include <stdio.h>

/**
*main - Entry point
*
*Description: print the all possible
*combinations of the two digits can only
*use putchar.
*
*Return: 0
*/

int main(void)
{
	int nO, nT;

	for (nO = '0' ; nO <= '9' ; nO++)
	{
		for (nT = '0' ; nT <= '9' ; nT++)
		{
			if (nO < nT && nO != '9')
			{
				putchar(nO);
				putchar(nT);
			}
			if (nO != '8' && nT > nO)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

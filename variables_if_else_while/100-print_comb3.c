#include <stdio.h>

/**
*main - Entry point
*
*
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
		}

	}
	return (0);
}

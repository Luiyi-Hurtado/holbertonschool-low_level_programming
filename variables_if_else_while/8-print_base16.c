#include <stdio.h>

/**
*main - Entry point
*
*Description: prints all  the number of
*base 16 in lowercase can only use putchar
*and only use putchar three times.
*
*Return: 0
*/

int main(void)
{
	int i;
	char a;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}

	for (a = 'a' ; a <= 'f' ; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}

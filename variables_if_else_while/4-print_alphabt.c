#include <stdio.h>

/**
*main - Entry point
*
*Description: print the alphabet but
*except q and e, can only use putchar
*twice in te code.
*
*Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}

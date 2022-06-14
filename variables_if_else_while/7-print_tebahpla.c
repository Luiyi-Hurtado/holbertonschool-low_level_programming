#include <stdio.h>
#include <string.h>

/**
*main - Entry point
*
*Description: print alphabet but
*reverse and can only use putchar
*twice
*
*Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

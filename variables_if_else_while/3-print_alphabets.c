#include <stdio.h>

/**
*main - Entry point
*
*Description: print alphabet in lowercase
*and uppercase can only use the putchar
*function.
*
*Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

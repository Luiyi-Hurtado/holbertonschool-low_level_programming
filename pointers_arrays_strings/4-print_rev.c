#include "main.h"

/**
 *print_rev - Entry point
 *@s: pointer is to type char
 *Description: Prints a string in
 *reverse.
 */
void print_rev(char *s)
{
	int i;
	int l = _strlen(s) - 1;

	for (i = l ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 *_strlen - Entry point
 *@s: pointer is to type char
 *Return: length of a string
 */
int _strlen(char *s)
{
	char a;
	int i = 0;

	for (i = 0 ; i > -1 ; i++)
	{
		a = s[i];
		if (a == '\0')
			break;
	}
	return (i);
}

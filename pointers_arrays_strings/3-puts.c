#include "main.h"

/**
 *_puts - Entry point
 *@str: is a char pointer
 *Description: prints a string, followed
 *by a new line.
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; i < _strlen(str) ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 *_strlen - Entry point
 *@s: pointer is to type char
 *Return: i
 */
int _strlen(char *s)
{
	int i = 0;
	char a;

	for (i = 0 ; i > -1 ; i++)
	{
		a = s[i];
		if (a == '\0')
			break;
	}
	return (i);
}

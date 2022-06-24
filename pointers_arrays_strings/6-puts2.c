#include "main.h"

/**
 *puts2 - Entry point
 *@str: pointer type char
 *Description: prints every other character
 *of a string
 */
void puts2(char *str)
{
	int i = 0;
	int l = _strlen(str) - 1;

	for (i = 0 ; i <= l ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 *_strlen - Entry point
 *@s: pointer is type int
 *Return: length string
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

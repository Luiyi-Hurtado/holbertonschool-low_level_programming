#include "main.h"
/**
 *puts_half - Entry point
 *@str: is a string
 *Description: prints half of a string
 */
void puts_half(char *str)
{
	int i = 0;
	int l = (_strlen(str) - 1);
	int li = (_strlen(str) - 1) / 2;

	for (i = (li + 1) ; i <= l ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 *_strlen - Entry point
 *@s: is a string
 *Return: print string
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

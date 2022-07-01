#include "main.h"
/**
 *_puts_recursion - Entry point
 *@s: is the type char
 *Description: Prints a string, followed
 *by a new line
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}

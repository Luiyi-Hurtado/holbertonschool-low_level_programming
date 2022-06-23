#include "main.h"

/**
 *rev_string - Entry point
 *@s: pointer is type char
 *Descirption: print string and rev
 *string and print
 */
void rev_string(char *s)
{
	char c;
	int i = 0;
	int l = _strlen(s) - 1;

	for (i = 0 ; i < l ; i++)
	{
		c = s[l];
		s[l] = s[i];
		s[i] = c;
		l--;
	}
}

/**
 *_strlen - Entry point
 *@s: pointer is type char
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

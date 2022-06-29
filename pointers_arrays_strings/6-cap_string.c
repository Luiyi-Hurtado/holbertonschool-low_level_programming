#include "main.h"
/**
 *cap_string - Entry point
 *@c: pointer is type char
 *Description: capitalize all words of a string
 *Return: first letters is to uppercase
 */
char *cap_string(char *c)
{
	int i = 0;
	int l = 0;

	if (c[i] >= 97 && c[i] <= 122)
	{
		c[i] -= 32;
	}
	for (i = 0 ; c[i] != '\0' ; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			l = i - 1;

			if (c[i - 1] == '\t' ||
				c[l] == '\n' ||
				c[l] == ' ' ||
				c[l] == ',' ||
				c[l] == ';' ||
				c[l] == '.' ||
				c[l] == '!' ||
				c[l] == '?' ||
				c[l] == '"' ||
				c[l] == '(' ||
				c[l] == ')' ||
				c[l] == '{' ||
				c[l] == '}')
			{
				c[i] -= 32;
			}
		}
	}
	return (c);
}

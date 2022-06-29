#include "main.h"
/**
 *_strchr - Entry point
 *@s: pointer is char
 *@c: is type char
 *Description: locales a char in a string
 *Return: pointer s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != c ; i++)
	{
		if (s[i] == '\0')
		{
			return ('\0');
		}
	}
	return (s + i);
}

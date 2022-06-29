#include "main.h"
/**
 *_memset - Entry point
 *@s: pointer is char
 *@b: is the char
 *@n: is unsigned int
 *Description:
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}

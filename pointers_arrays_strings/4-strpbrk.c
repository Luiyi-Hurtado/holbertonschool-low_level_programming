#include "main.h"
/**
 *_strpbrk - Entry point
 *@s: pointer is type char
 *@accept: pointer is type char
 *Description: searches a string for any of a set of bytes
 *Return: search string
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (k == 1)
		{
			break;
		}
	}
	if (k == 1)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}

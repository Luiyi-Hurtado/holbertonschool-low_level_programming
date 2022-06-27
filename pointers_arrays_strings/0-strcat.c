#include "main.h"

/**
 *_strcat - Entry point
 *@dest: poniter is char
 *@src:pointer is char
 *Description: concatenates two strings
 *Return: concatene strings
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l = 0;
	int c = 0;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		l++;
	}
	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		c++;
	}
	for (i = 0 ; i < l ; i++)
	{
		if (dest[c + i] == '\0')
		{
			dest[c + i] = src[i];
		}
		else
		{
			dest[c + i] = src[i];
		}
	}
	dest[l + c] = '\0';
	return (dest);
}

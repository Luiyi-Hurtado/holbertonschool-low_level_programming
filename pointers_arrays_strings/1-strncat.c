#include "main.h"

/**
 *_strncat - Entry point
 *@dest: pointer is char
 *@src: pointer is char
 *@n:pointer is int
 *Description: wirte a function that concatenates
 *two strings
 *Return: concatenate two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;
	int c = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		l++;
	}
	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		c++;
	}
	for (i = 0 ; i < n ; i++)
	{
		if (dest[i] != '\0')
		{
			dest[c + i] = src[i];
		}
		else
		{
			break;
		}
	}
	dest[n + c] = '\0';
	return (dest);
}

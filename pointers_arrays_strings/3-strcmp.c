#include "main.h"
/**
 *_strcmp - Entry point
 *@s1: is type char
 *@s2: is type char
 *Description: comapares two strings
 *Return: nagtive, positive or zero
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int f1 = 0;
	int f2 = 0;
	int r = 0;

	for (i = 0 ; i > -1 ; i++)
	{
		if (s1[i] != s2[i])
		{
			f1 = s1[i];
			f2 = s2[i];
			break;
		}
		else
		{
			if (s1[i] == '\0' || s2[i] == '\0')
			{
				break;
			}
		}
	}
	r = f1 - f2;
	return (r);
}

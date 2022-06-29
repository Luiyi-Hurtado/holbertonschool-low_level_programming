#include "main.h"
/**
 *_strstr - Entry point
 *@haystack: pointer is a char
 *@needle: dpointer is a char
 *Description: locates a substring
 *Return: substring locates
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int k = 0;

	for (i = 0 ; haystack[i] ; i++)
	{
		for (k = 0 ; needle[k] ; k++)  
		{
			if (needle[k] != haystack[i + k])
			{
				break;
			}
		}
		if (needle[k] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - return strdup
 *@str: string duplicate
 * Return: strcp duplicate
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *strcp;

	if (str == NULL)
		return (NULL);

	do {
		j++;
	} while (str[j - 1]);
	strcp = malloc(sizeof(char) * j);
	if (strcp == NULL)
		return (NULL);

	for (i = 0 ; i < j ; i++)
		strcp[i] = str[i];

	return (strcp);
}

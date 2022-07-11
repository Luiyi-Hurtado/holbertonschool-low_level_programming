#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: numbers of characters
 *
 * Return: concatenatd string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat = NULL;
	unsigned int  i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	else
		for (i = 0 ; s1[i] != '\0' ; i++)
		{
		}
	if (s2 == NULL)
		s2 = "";
	else
		for (j = 0 ; s2[j] != '\0' ; j++)
		{
		}

	if (j > n)
		j = n;

	nconcat = malloc(sizeof(char) * (i + j + 1));
	if (nconcat == NULL)
		return (NULL);

	for (k = 0 ; k < i ; k++)
		nconcat[k] = s1[k];
	for (k = 0 ; k < j ; k++)
		nconcat[i + k] = s2[k];

	nconcat[i + j] = '\0';

	return (nconcat);
}

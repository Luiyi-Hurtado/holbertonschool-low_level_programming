#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: string one(1) char
 *@s2: string two(2) char
 *Return: string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *strcont = NULL, s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s3 = strlen(s1) + strlen(s2) + 1;
	strcont = malloc(sizeof(char) * s3);
	if (strcont == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		strcont[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' ; j++)
		strcont[i + j] = s2[j];

	return (strcont);
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog - allocate dog
 *@name: pinter name of the dog
 *@age: age of the dog
 *@owner: pointer owner of the dog
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogs = NULL;
	int n1, o1, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	dogs = malloc(sizeof(dog_t));
	if (dogs == NULL)
		return (NULL);
	for (n1 = 0 ; name[n1] ; n1++)
	{
	}
	n1++;
	for (o1 = 0 ; owner[o1]; o1++)
	{
	}
	o1++;
	(*dogs).name = malloc(n1 * sizeof(char));
	if ((*dogs).name == NULL)
	{
		free(dogs);
		return (NULL);
	}
	(*dogs).owner = malloc(o1 * sizeof(char));
	if ((*dogs).owner == NULL)
	{
		free((*dogs).name);
		free(dogs);
		return (NULL);
	}
	for (i = 0 ; i < n1 ; i++)
		(*dogs).name[i] = name[i];
	(*dogs).age = age;
	for (i = 0 ; i < o1 ; i++)
		(*dogs).owner[i] = owner[i];

	return (dogs);
}

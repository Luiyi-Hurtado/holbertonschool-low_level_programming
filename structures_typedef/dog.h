#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - inforamtion about dogs
 *@name: name of the dog. First member
 *@age: ege of the dog. Second member
 *@owner: owner of the dog. Third member 
 *
 * Description: all information about the dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *prototype of the task
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */

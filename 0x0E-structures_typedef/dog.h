#ifndef _HEADER_
#define _HEADER_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - data of a dog
 * @name: char store names
 * @age: int store ages
 * @owner: char store owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif

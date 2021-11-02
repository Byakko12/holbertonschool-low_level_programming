#include "dog.h"
/**
  * free_dog - free data
  * @d: pointer to struct
  * Return: not return
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
#include <stdio.h>
#include "dog.h"
/**
* free_dog - prototyp
* @dog_t: value
* @d: pointer
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

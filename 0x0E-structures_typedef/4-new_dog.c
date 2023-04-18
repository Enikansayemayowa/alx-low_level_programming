#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Write a function that creates a new dog
 * @name: name description
 * @age: age description
 * @owner: owner description
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelength = 0;
	int ownerlength = 0;
	int i;
	dog_t *dog;

	while (name[namelength] != '\0')
		namelength++;
	while (owner[ownerlength] != '\0')
		ownerlength++;
	/*allocate memory to new dog */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	/* allocate memory to name and memory */
	dog->name = malloc((namelength + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((ownerlength + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	/*copy the name and owner to new dog */
	for (i = 0; i <= namelength; i++)
		dog->name[i] = name[i];
	for (i = 0; i <= ownerlength; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}

#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include "main.h"
/**
 * struct dog - item structures
 * @name: name description
 * @age: age description
 * @owner: owner description
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for dog_t
 */
/*typedef struct dog dog_t;*/
typedef struct {
    char *name;
    float age;
    char *owner;
} dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif

#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prototype
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "nil";
	}
	printf("Name: %s\n: %f\nowner: %s\n", d->name, d->age, d->owner);
}

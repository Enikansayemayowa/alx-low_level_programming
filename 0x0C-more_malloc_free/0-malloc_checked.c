#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: value
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *arrayFunc;

	arrayFunc = malloc(b);
	if (arrayFunc == NULL)
	{
		exit(98);
	}
	return (arrayFunc);
}

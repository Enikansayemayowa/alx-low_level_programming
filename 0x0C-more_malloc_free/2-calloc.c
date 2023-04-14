#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of element
 * @size: size of element
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memSpace;
	char *arrayString;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memSpace = malloc(nmemb * size);
	if (memSpace == NULL)
	{
		return (NULL);
	}
	arrayString = memSpace;
	for (i = 0; i < (nmemb * size); i++)
	{
		arrayString[i] = 0;
	}
	return (memSpace);
}

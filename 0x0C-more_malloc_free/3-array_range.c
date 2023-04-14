#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arrayFunc;
	unsigned int size;
	unsigned int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min - max + 1;
	arrayFunc = malloc(sizeof(int) * size);
	if (arrayFunc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arrayFunc[i] = min + i;
	}
	return (arrayFunc);
}

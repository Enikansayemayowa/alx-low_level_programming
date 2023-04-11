#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: memory space allocated
 * Return: arrChar
 */
char *create_array(unsigned int size, char c)
{
	char *arrChar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arrChar = malloc(sizeof(char) * size);
	if (arrChar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arrChar[i] = c;
	}
	return (arrChar);
}

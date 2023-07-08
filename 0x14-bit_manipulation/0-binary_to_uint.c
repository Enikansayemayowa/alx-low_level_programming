#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the string pointer
 * Return: 0 if null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int response = 0;
	size_t strLength = 0;
	size_t j;

	/* first check if the string pointer is NULL */
	if (b == NULL)
	{
		return (0);
	}
	/* get the length in the string */
	while (b[strLength] != '\0')
	{
		strLength++;
	}
	for (j = 0; j < strLength; j++)
	{
		if (b[j] == '0')
		{
			response = (response << 1);
		}
		else if (b[j] == '1')
		{
			response = (response << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (response);
}

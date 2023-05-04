#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number
 * @b: pointing to a string of 0 and 1 chars
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int j;

	num = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		num <<= 1;
		if (b[j] == '1')
		{
			num = num + 1;
		}
	}
	return (num);
}

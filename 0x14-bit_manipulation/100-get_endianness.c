#include "main.h"
#include <stdio.h>
/**
 * get_endianness - Write a function that checks the endianness.
 * Return: void
 */
int get_endianness(void)
{
	unsigned int j;
	char *x;

	j = 1;
	x = (char *)&j;
	if (x)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

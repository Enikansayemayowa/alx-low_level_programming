#include <stdio.h>
#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: void
 */
int get_endianness(void)
{
	unsigned int result = 1;
	char *bits = (char *)&result;

	if (*bits == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

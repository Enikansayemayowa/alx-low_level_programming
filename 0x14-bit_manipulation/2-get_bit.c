#include "main.h"
#include <stdio.h>
/**
 * get_bit - function that returns the value of a bi
 * @n: strings
 * @index: index is the index, starting from 0 of the bit you want to get
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}

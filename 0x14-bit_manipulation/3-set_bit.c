#include "main.h"
#include <stdio.h>
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @index:  is the index, starting from 0 of the bit
 * @n: strings
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}


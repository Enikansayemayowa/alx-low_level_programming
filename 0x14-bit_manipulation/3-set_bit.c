#include <stdio.h>
#include "main.h"
/**
 * set_bit - value of a bit to 1 at a given index.
 * @n: pointer to the number
 * @index: the given idex
 * Return: 0 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int math = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= math;
	return (1);
}

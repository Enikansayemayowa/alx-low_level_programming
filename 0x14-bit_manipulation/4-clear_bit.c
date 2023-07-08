#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the number
 * Return: 0 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int math = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= math;
	return (1);
}

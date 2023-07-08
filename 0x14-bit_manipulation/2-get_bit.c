#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the given number
 * @index: indesx of the given number
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int math = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if (n & math)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

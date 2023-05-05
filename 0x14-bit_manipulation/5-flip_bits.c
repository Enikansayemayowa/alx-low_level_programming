#include "main.h"
#include <stdio.h>
/**
 * flip_bits - number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int num;

	result = m ^ n;
	num = 0;
	while (result != 0)
	{
		num = num + (result & 1);
		result >>= 1;
	}
	return (num);
}

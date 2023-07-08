#include <stdio.h>
#include "main.h"
/**
 * flip_bits - need to flip to get from one number to another
 * @n: number to flip
 * @m: number you get
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_response = n ^ m;
	unsigned int counter = 0;

	while (xor_response != 0)
	{
		counter += xor_response & 1;
		xor_response >>= 1;
	}
	return (counter);
}

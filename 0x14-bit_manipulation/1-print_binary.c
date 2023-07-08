#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number we are priting the binary
 * Return: 0 or 1
 */
void print_binary(unsigned long int n)
{
	int number_bits = sizeof(unsigned long int) * 8;
	unsigned long int math = 1UL << (number_bits - 1);
	int leading_number = 1;

	while (math != 0)
	{
		if (n & math)
		{
			leading_number = 0;
			_putchar('1');
		}
		else
			if (!leading_number)
			{
				_putchar('0');
			}
		math >>= 1;
	}
	if (leading_number)
	{
		_putchar('0');
	}
	_putchar('\n');
}

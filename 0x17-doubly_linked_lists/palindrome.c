#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * largest_palindrome_value - check the code
 * @n: value
 * Return: Always EXIT_SUCCESS.
 */
int largest_palindrome_value(int n)
{
	int real_value = n;
	int reversed_value = 0;
	int value = 0;

	while (real_value > 0)
	{
		value = real_value % 10;
		reversed_value = reversed_value * 10 + value;
		real_value /= 10;
	}
	if (n == reversed_value)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * main - check the code
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	int i, j, product, largest_value = 0;
	FILE *filePath;

	for (j = 999; j >= 100; j--)
	{
		for (i = j; i >= 100; i--)
		{
			product = j * i;
			if ((largest_palindrome_value(product) & product) > (largest_value))
			{
				largest_value = product;
			}
		}
	}
	filePath = fopen("102 result", "w");
	if (filePath != NULL)
	{
		fprintf(filePath, "%d", largest_value);
		fclose(filePath);
	}
	return (0);
}

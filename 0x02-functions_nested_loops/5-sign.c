/*
 * file: 5-sign.c
 */
#include "main.h"
/**
 * Sign - Write a function that prints the sign of a number.
 *
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}

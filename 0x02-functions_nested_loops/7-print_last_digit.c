/*
 * file: 7-print_last_digit.c
 */
#include "main.h"
/**
 * print_last_digit - returns i,  Prints last digit of i
 * @i: full length int
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
		i = -i;
		_putchar('0' + i);
		return (i);
	}
}

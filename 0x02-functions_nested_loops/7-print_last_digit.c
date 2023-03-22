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
	int a;
	if (i < 0)
		i = -i;
	a = i % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}

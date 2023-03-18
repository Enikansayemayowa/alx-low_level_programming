/*
 * 8-print_tebahpla.c
 *
 * Description:
 * This program prints
 * all the single digit hexadecimal
 * numbers
 *
 */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	int i;

	letter = 'a';
	num = '0';

	for (i = 0; i < 16; i++)
		putchar(num + i);
	putchar('\n');
	return (0);
}

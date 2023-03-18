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
	char letter, num;
	int i;

	num = '0';
	letter = 'a';

	for (i = 0; i < 10; i++)
		putchar(num + i);
	for (i = 0; i < 6; i++)
		putchar(letter + i);
	putchar('\n');
	return (0);
}

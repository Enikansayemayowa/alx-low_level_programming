/*
 * file: 2-print_alphabet_x10.c
 */
#include "main.h"
/**
 * print_alphabet - prints lower case alphabet
 * this is just a function
 *
 * Return: Always return void
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	i = 0;
	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar(i);
		i++;
	}
}


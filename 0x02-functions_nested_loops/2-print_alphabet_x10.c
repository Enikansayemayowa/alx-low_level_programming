/*
 * file: 2-print_alphabet_x10.c
 */
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet times 10
 *
 * Return: Always return 0
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
		_putchar('\n');
		i++;
	}
}


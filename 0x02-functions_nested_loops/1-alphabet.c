/*
 * file: 1-alphabet.c
 */
#include "main.h"
/**
 * print_alphabet - prints lower case alphabet
 * this is just a function
 *
 * Return: Always return void
 */
void print_alphabet()
{
	char letter = 'a';

	while(letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

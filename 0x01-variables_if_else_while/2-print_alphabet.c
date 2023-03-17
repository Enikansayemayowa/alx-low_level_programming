/*
 * file: 2-print_alphabet.c
 *
 * Description: This program prints
 * all the lower case characters in
 * the alphabet, using putchar()
 */
#include <stdio.h>
#include <time.h>
/**
 * main - this is the function that run everything
 * @void : no argument passed in
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;
	int i;

	letter = 'a';

	for (i = 0; i < 26; i++)
		putchar(letter + i);
	putchar('\n');
	return (0);
}

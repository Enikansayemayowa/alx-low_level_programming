/*
 * file: 4-print_alphabt.c
 * Description: This program prints
 * all the lower case characters in
 * the alphabet, then the uppercase
 * using putchar()
 */
#include <stdio.h>
#include <time.h>
/**
 * main - this is the main function to run everything
 * @void: no argument pass in
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;
	int i;

	letter = 'a';
	for (i = 0; i < 26; i++)
		 if (!(letter + i == 'q' || letter + i == 'e'))
			 putchar(letter + i);
	putchar('\n');
	return (0);
}

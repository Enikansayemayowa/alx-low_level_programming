/*
 * 7-print_tebahpla.c
 *
 * Description:
 * This program prints
 * all the lower case characters in
 * reverse, using putchar()
 *
 */
#include <stdio.h>
/**
  * main - this is the main function that runs everything
  * @void: no arguments passed in
  *
  * Return: 0
  */
int main(void)
{
	char letter;
	int i;

	letter = 'a';
	for (i = 25; i >= 0; i--)
		putchar(letter + 1);
	putchar('\n');
	return (0);
}

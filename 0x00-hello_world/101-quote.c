/*
 * file: 101-quote.c
 */
#include <stdio.h>

/**
 * main-prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line,
 *
 * Retun: Always 1
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}

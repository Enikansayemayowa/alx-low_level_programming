/*
 * file :0-positive_or_negative.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starting point
 *
 * Return: Always 0
 */
void postitive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}

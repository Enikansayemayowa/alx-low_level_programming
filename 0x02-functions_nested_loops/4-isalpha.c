/*
 * file: 4-isalpha.c
 */
#include "main.h"
/**
 * _isalpha - returns true if char is in alphabet
 * @c: ascii value to be tested
 * Return: 1 if c is lowercase
 *			0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

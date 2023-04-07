#include "main.h"
#include <string.h>
/**
 * check_if_palidrome - check if palidrome
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string value
 * check_if_palidrome - function to check for palidrome
 * @start: beginning of a string
 * @end: end of a string
 * Return: 1
 */
int check_if_palidrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else
		if (s[start] != s[end])
		{
			return (0);
		}
		else
		{
			check_if_palidrome(s, start + 1, end - 1);
			return (1);
		}
}
/**
 * _str_recursion - check if it palindrome
 * @s: string value
 * _str_recursion - return value
 * Return: 1
 */
int _str_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _str_recursion(s + 1);
	}
	return (sum);
}

/**
 * is_palindrome - check if it palindrome
 * @s: string value
 * _str_recursion - return value
 * Return: 1
 */

int is_palindrome(char *s)
{
	int throw = 1;

	check_if_palidrome(s, _str_recursion(s) - 1, throw);
	return (throw);
}

#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that returns 1 if a string is a palindrome and 0 if not
 * @s: string value
 * check_if_palidrome - function to check for palidrome
 * @start: beginning of a string
 * @end: end of a string
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
		}
}
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
int is_palindrome(char *s)
{
	int stre = 1;

	check_if_palidrome(s, _strlen_recursion(s) - 1, stre);
	return (stre);
}

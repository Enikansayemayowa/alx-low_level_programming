#include "main.h"
/**
 * _strlen_recursion - the length of a string
 * @s: character length to be returnd
 * Return: 0 if success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to start of a string
 * @c: character to check for
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}

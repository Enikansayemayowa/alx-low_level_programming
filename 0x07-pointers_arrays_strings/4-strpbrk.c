#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of byte
 * @s: string value
 * @accept: check if any character is matched
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	char *q;

	for (; *s != '\0'; s++)
	{
		for (q = accept; *q != '\0'; q++)
		{
			if (*s == *q)
			{
				return (s);
			}
		}
	}
	return (NULL);
}

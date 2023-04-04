#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring
 * @haystack: first string
 * @needle: substrings
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		*p2 = *p1;
		*p3 = *needle;
		while (*p2 != '\0' && *p3 != '\0' && *p2 == *p3)
		{
			p2++;
			p3++;
		}
		if (*p3 != '\0')
		{
			return (p1++);
		}
	}
	return (NULL);
}

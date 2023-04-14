#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer 1
 * @s2: pointer 2
 * @n: length
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newSpace;
	unsigned int a, b, s1Length;

	s1Length = 0;
	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (s1[s1Length] != '\0')
		s1Length++;
	newSpace = malloc(s1Length + n + 1);
	if (newSpace == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		newSpace[a] = s1[a];
	}
	for (b = 0; b < n && s2[b] != '\0'; b++, a++)
	{
		newSpace[a] = s2[b];
	}

	newSpace[a] = '\0';
	return (newSpace);
}

#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *@s: number string
 *Return: wordStrings
 */
int _strlen(char *s)
{
	int wordStrings = 0;

	while (*s != '\0')
	{
		wordStrings++;
		s++;
	}
	return (wordStrings);
}

#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer
 * Return: arrChar
 */
char *_strdup(char *str)
{
	unsigned int a = 0;
	unsigned int i = 0;
	char *arrChar;

	if (str == NULL)
	{
		return (NULL);
	}
	if (str[i] != '\0')
	{
		i++;
	}
	arrChar = malloc(sizeof(char) * (i + 1));
	if (arrChar == NULL)
	{
		return (NULL);
	}
	for (; str[a]; a++)
	{
		arrChar[a] = str[a];
	}
	return (arrChar);
}

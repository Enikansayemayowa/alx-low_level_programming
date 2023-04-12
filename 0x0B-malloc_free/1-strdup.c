#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer
 * Return: arrChar
 */
char *_strdup(char *str)
{
	int a;
	int i = 0;
	char *arrChar;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	arrChar = malloc(sizeof(char) * (i + 1));
	if (arrChar == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		arrChar[a] = str[a];
	}
	return (arrChar);
}

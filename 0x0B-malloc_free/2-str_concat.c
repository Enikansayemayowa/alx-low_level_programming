#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *newArray;
	int i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	newArray = malloc(sizeof(char) * (i + j + 1));
	while (s1[i] != '\0')
	{
		i++;
		newArray[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		newArray[j] = s2[j];
		i++, j++;
	}
	/*newArray = malloc(sizeof(char) *(i + j + 1));*/
	if (newArray == NULL)
	{
		return (NULL);
	}
	newArray[i] = '\0';
	return (newArray);
}

#include <stdlib.h>
#include "main.h"
/**
 * words_counter - this count and return the total length
 * @j: pointer to the address
 * Return: w
 */
int words_counter(char *j)
{
	int count, i, a;

	count = 0;
	a = 0;
	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] != ' ')
		{
			count = 0;
		}
		else
			if (count == 0)
			{
				count = 1;
				a++;
			}
	}
	return (a);
}

/**
 * strtow - function that splits a string into words.
 * @str: strings
 * Return: char
 */
char **strtow(char *str)
{
	char *value, *ptr, **stringArray;
	int i, a, length, sentence, b, start, end;

	a = 0;
	length = 0;
	b = 0;
	while (*(str + length))
	{
		length++;
	}
	sentence = words_counter(str);
	if (sentence == 0)
	{
		return (NULL);
	}
	stringArray = (char **) malloc(sizeof(char *) * (sentence + 1));
	if (stringArray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (b)
			{
				end = i;
				value = (char *) malloc(sizeof(char) * (b + 1));
				if (value == NULL)
				{
					return (NULL);
				}
				ptr = value;
				while (start < end)
				{
					*ptr++ = str[start++];
				}
				*(ptr - b) = '\0';
				stringArray[a] = value  - b;
				a++;
				b = 0;
			}
		}
		else
			if (b++ == 0)
			{
				start = i;
			}
	}
	stringArray[b] = NULL;
	return (stringArray);
}

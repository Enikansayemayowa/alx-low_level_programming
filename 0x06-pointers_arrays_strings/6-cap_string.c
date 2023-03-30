#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else
			if (str[i - 1] == ' ' || str[i - 1] == ',' ||
					str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' ||
					str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' ||
					str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}')
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		i++;
	}
	return (str);
}

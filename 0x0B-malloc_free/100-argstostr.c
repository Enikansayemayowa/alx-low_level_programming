#include <stdlib.h>
#include "main.h"
/**
 * argstostr - function that concatenates all the arguments
 * @ac: size of the array
 * @av: pointer to the array
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *newString;

	d = 0;
	c = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
		c++;
		}
		c++;
	}
	newString = malloc(sizeof(char) * c + 1);
	if (newString == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			newString[d++] = av[a][b];
		}
		newString[d++] = '\n';
	}
	newString[d] = '\0';
	return (newString);
}

#include "main.h"
#include <string.h>
/**
 * _strspn - unsigned int _strspn(char *s, char *accept)
 * @s: string to be checked
 * @accept: check if any match
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int found;
	char *q;

	count = 0;
	for (; *s != '\0'; s++)
	{
		found = 0;
		for (q = accept; *q != '\0'; q++)
		{
			if (*q == *s)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (count);
		}
		count++;
	}
	return (count);
}

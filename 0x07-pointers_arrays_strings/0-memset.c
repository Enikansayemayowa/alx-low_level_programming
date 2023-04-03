#include "main.h"
#include <string.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to store address
 * @b: variable
 * @n: number of bytes to fill
 * Return: s if success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}

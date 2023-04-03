#include "main.h"
#include <string.h>
/**
 * _memcpy - function that copies memory area
 * @dest: destination
 * @src: source
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + 1) = *(src + 1);
	}
	return (dest);
}

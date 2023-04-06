#include "main.h"
#include <string.h>
/**
 * _puts_recursion - function that prints a string
 * @s: strings to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

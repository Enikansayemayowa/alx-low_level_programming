#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -  function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: number of strings to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parameter;
	char *par;
	unsigned int i;

	va_start(parameter, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		par = va_arg(parameter, char *);
		if (par == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", par);
		}
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(parameter);
}

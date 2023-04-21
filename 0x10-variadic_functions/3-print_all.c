#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0;
	char *par, c, *sep = "";
	double e;
	int num;

	va_start(args, format);
	if (format)
	{
		while (format[j])
	{
		switch (format[j])
			{
				case 'c':
					c = va_arg(args, int);
					printf("%s%c",sep, c);
					break;
				case 'i':
					num = va_arg(args, int);
					printf("%s%d", sep, num);
					break;
				case 'f':
					e = va_arg(args, double);
					printf("%s%f", sep, e);
					break;
				case 's':
					par = va_arg(args, char *);
					if (!par)
						par = "(nil)";
					printf("%s%s", sep, par);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(args);
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: parameter passed
 * @...: to calculatethe sum
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumthem;
	unsigned int j, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(sumthem, n);
	for (j = 0; j < n; j++)
	{
		sum += va_arg(sumthem, int);
	}
	va_end(sumthem);
	return (sum);
}

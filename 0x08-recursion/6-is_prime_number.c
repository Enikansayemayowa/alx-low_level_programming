#include "main.h"
/**
 * is_prime_number_check - return 1 if it is a prime number
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return
 * @n: int value
 * is_prime_number_check: input integer
 * @a: start value
 * Return: 1 on success
 */
int is_prime_number_check(int n, int a)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
		if (n % a == 0)
		{
			return (0);
		}
		else
			if (a * a > n)
			{
				return (1);
			}
			else
			{
				return (is_prime_number_check(n, a + 1));
			}
}
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return
 * @n: number to check
 * Return: 1 on success
 */
int is_prime_number(int n)
{
	return (is_prime_number_check(n, 2));
}

#include "main.h"
/**
 * square_check - function for checking for the value of n
 * @n: number to find the natural square root
 * @l: lower number
 * @h: higher number
 * mid - division of l and h by 2
 * mid_squared - square od mid
 * Return: 1 on success
 */
int square_check(int n, int l, int h)
{
	int mid = (l + h) / 2;
	int mid_squared = mid * mid;

	if (l > h)
	{
		return (-1);
	}
	if (mid_squared == n)
	{
		return (mid);
	}
	else
		if (mid_squared < n)
		{
			return (square_check(n, mid + 1, h));
		}
		else
		{
			return (square_check(n, l, mid - 1));
		}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find the natural square root
 * square_check - function for checking for the value of n
 * Return: 1 on success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		if (n == 0 || n == 1)
		{
			return (n);
		}
		else
		{
			return (square_check(n, 1, n / 2));
		}
}

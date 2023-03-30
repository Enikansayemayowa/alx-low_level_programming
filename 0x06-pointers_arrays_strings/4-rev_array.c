#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: input value
 * @n: is the number of elements of the array
 * Return: voild
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;

	end = n - 1;
	start = 0;
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

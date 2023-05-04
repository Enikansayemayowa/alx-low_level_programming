#include <stdlib.h>
#include <unistd.h>
/**
 * print_binary -  function that prints the binary representation
 * @n: strings
 * Return;
 */
void print_binary(unsigned long int n)
{
	char j;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	j = (n & 1) ? '1' : '0';
	write(1, &j, 1);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name
 * @argc: argument control
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 1};
	int num_coins = 0;
	int cents = atoi(argv[1]);
	int i;

	if (cents < 1)
	{
		printf("0\n");
	}
	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < 4; i++)
	{
		int count = cents / coins[i];

		num_coins = num_coins + count;
		cents = cents - count * coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}

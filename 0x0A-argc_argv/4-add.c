#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that prints its name
 * @argc: argument control
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *value = argv[i];

		for (j = 0; value[j] != '\0'; j++)
		{
			if (!isdigit(value[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(value);
	}
	printf("%d\n", sum);
	return (0);
}

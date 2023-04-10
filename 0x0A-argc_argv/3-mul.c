#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints its name
 * @argc: argument control
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;
	int value1 = atoi(argv[1]);
	int value2 = atoi(argv[2]);

	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	result = value1 * value2;
	printf("%d\n", result);
	return (0);
}

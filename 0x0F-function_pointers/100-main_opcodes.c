#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int space, j;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	space = atoi(argv[1]);
	if (space < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	for (j = 0; j < space; j++)
	{
		if (j == space - 1)
		{
			printf("%02hhx\n", ptr[j]);
			break;
		}
		printf("%02hhx ", ptr[j]);
	}
	return (0);
}

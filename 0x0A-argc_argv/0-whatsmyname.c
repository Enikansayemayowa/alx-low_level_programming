#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name
 * @argc: argument control
 * @argv: argument vector
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

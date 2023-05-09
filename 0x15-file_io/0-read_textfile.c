#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the buffer
 * @letters: number of text to open and read
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t textread, textwrite;
	FILE *file;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = malloc(1 + letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	textread = fread(buffer, sizeof(char), letters, file);
	if (textread < 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	textwrite = write(STDOUT_FILENO, buffer, textread);
	if (textwrite < 0 || textwrite != textread)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (textwrite);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: printed char
 * Return: filename and number of char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buffer = (char *) malloc((letters + 1) * sizeof(char));
	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
	ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	if (filename == NULL)
	{
		return (0);
	}
	if (file == NULL)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	if (bytesRead == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	if (bytesWritten != bytesRead)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (bytesWritten);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - Create a function that creates a file.
 * @filename: name of file to be created
 * @text_content: content of file to be created
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int file, j;
	ssize_t textwrite;

	j = 0;
	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[j] != '\0')
			j++;
		textwrite = write(file, text_content, j);
		if (textwrite == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

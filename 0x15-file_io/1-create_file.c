#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: text_content is the NULL
 * Return: value
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "w");
	size_t len = strlen(text_content);
	size_t bytesWritten = fwrite(text_content, sizeof(char), len, file);

	if (filename == NULL)
	{
		return (-1);
	}
	if (file == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (bytesWritten != len)
		{
			fclose(file);
			return (-1);
		}
	}
	fclose(file);
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
	{
		return (-1);
	}
	return (1);
}

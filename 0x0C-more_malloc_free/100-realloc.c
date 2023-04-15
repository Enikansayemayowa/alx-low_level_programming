#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block
 * @old_size: previous memory size
 * @ptr: pointer to the old memory size
 * @new_size: new memory size
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *copied_ptr, *new_copied_ptr;
	unsigned int copied_size, i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	copied_size = old_size < new_size ? old_size : new_size;
	copied_ptr = ptr;
	new_copied_ptr = new_ptr;

	for (i = 0; i < copied_size; i++)
	{
		new_copied_ptr[i] = copied_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}

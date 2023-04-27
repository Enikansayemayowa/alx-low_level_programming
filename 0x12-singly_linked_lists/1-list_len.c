#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h  != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

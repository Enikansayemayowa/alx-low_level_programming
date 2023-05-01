#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * get_nodeint_at_index - that returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: index value;
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}
	if (j == index)
	{
		return (head);
	}
	return (NULL);
}

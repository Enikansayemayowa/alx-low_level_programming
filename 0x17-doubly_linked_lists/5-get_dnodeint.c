#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - nth node of a dlistint_t linked list.
 * @head: previous node
 * @index: expected position
 * Return: 1
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count  == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}

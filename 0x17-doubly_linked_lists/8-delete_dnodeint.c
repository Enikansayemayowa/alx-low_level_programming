#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: pointer to pointer
 * @index: the position ypu want to change
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_value;
	dlistint_t current_value;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp_value = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp_value);
		return (1);
	}
	current_value = *head;
	while (current_value != NULL)
	{
		if (count == index)
		{
			if (current_value->next != NULL)
				current_value->next->prev = current_value->prev;
			current_value->prev->next = current_value->next;
			free(current_value);
			return (1);
		}
		current_value = current_value->next;
		count++;
	}
	return (-1);
}

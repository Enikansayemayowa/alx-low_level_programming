#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (node != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}

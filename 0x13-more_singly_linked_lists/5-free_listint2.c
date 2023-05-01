#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: pointer to pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer of pointer
 * @n: strings value
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *curr;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = newNode;
	return (newNode);
}

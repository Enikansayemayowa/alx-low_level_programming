#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer
 * @idx: index where the node is to be added
 * @n: data to be inserted
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	unsigned int j;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	for (j = 0; j < idx - 1 && temp != NULL; j++)
	{
		temp = temp->next;
	}
	if (temp == NULL && j == idx - 1)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer of pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temphold;
	int list;

	if (*head == NULL)
	{
		return (0);
	}
	temphold = *head;
	*head = (*head)->next;
	list = temphold->n;
	free(temphold);
	return (list);
}

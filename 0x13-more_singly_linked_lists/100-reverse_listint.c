#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer
 * Return: lisrint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pst;
	listint_t *curr;
	listint_t *nxt;

	pst = NULL;
	curr = *head;
	nxt = NULL;
	while (curr != NULL)
	{
		nxt = curr->next;
		curr->next = pst;
		pst = curr;
		curr = nxt;
	}
	*head = pst;
	return (*head);
}

#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

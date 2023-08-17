#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: pointer h
 * Return: 1
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t result = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		result++;
	}
	return (result);
}

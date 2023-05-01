#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the string
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *allElement = h;
	size_t count = 0;
	if (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		allElement = allElement->next;
	}
	return (count);
}

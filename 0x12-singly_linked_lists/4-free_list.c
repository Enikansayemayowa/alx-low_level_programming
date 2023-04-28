#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Write a function that frees a list_t list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next_element;

	while (head != NULL)
	{
		next_element = head->next;
		free(head->str);
		free(head);
		head = next_element;
	}
}

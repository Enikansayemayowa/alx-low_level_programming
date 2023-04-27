#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the address of string
 * @str: string
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->str = strdup(str);
	if (new_element->str == NULL)
	{
		free(new_element);
		return (NULL);
	}
	new_element->len = 0;
	while (new_element->str[new_element->len] != '\0')
	{
		new_element->len++;
	}
	new_element->next = *head;
	*head = new_element;
	return (new_element);
}

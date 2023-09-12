#include "hash_tables.h"
/**
 * shash_table_create - function to create hash table
 * @size: size of the table
 * Return: 0
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}
/**
 * hash - set a new table
 * @key: key
 * Return: 0
 */
unsigned long int hash(const char *key)
{
	unsigned long int value = 0;
	char c;

	while ((c = *key++))
		value += c;
	return (value);
}


/**
 * shash_table_set - set a new table
 * @key: key
 * @ht: pointer to the key\
 * @value: value
 * Return: 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node;
	shash_node_t *new_node;
	shash_node_t *prev;

	index = hash(key) % ht->size;
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->snext = NULL;
	}
	else
	{
		node = ht->shead;
		prev = NULL;
		while (node != NULL && strcmp(node->key, key) < 0)
		{
			prev = node;
			node = node->snext;
		}
		if (prev == NULL)
		{
			new_node->snext = ht->shead;
			ht->shead = new_node;
		}
		else
		{
			new_node->snext = prev->snext;
			prev->snext = new_node;
			if (new_node->snext == NULL)
				ht->stail = new_node;
		}
	}
	return (1);
}
/**
 * shash_table_get - function to get the hash table
 * @ht: value
 * @key: key
 * Return: 0
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = hash(key) % ht->size;
	shash_node_t *node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - print hash table
 * @ht: ponter
 * Return: 0
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = ht->shead;

	printf("{");

	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * print_rev - reverse node
 * @node: node
 * Return: 0
 */
void print_rev(shash_node_t *node)
{
	if (node == NULL)
		return;
	print_rev(node->snext);
	printf("'%s': '%s'", node->key, node->value);
	if (node->snext != NULL)
		printf(", ");
}
/**
 * shash_table_print_rev - print reverse node
 * @ht: node
 * Return: 0
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	printf("{");
	print_rev(ht->shead);
	printf("}\n");
}
/**
 * shash_table_delete - delete hash table
 * @ht: node
 * Return: 0
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}

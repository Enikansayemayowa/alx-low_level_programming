#include "hash_tables.h"
/**
 * int hash_djb2 - Write a hash function implementing the djb2 algorithm.
 * @str: pointer to string to hash
 * Return: 0
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

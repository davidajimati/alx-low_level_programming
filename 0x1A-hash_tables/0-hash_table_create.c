#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size is the size of the array
 * Return: pointer to the newly created hash table or NULL if failed.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t) * size);

	if (hash_table == NULL)
		return (NULL);
	return (hash_table);
}

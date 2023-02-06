#include "hash_table.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;
	hash_table_t *hash_table;

	hash_table = malloc(size * sizeof(hash_node_t));
	hash_table->size = size;
	for (i = 0; i < size; i++)
		hash_table->array = NULL;
	return hash_table;
}

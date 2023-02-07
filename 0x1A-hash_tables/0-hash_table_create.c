#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;
	hash_table_t *hash_table;

	if (size == 0 || isdigit(size) == 0)
		return NULL;
	hash_table = malloc(sizeof(hash_node_t));
	if (hash_table == NULL)
		return NULL;
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table_t) * size);
	if (hash_table->array == NULL)
		return NULL;
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return hash_table;
}

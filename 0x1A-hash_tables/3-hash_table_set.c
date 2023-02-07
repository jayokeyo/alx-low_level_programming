#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * hash_table_set - adds an element to a hash table
 * @ht: pointer to hash table
 * @key: key of item to be added
 * @value: value of item to be added
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long Index;
	hash_node_t *new;

	Index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc(strlen(key) + 1);
	if (new->key == NULL)
		return (0);
	strcpy(new->key, key);
	new->value = malloc(strlen(value) + 1);
	if (new->value == NULL)
		return (0);
	strcpy(new->value, value);
	new->next = NULL;

	if (ht->array[Index] == NULL)
		ht->array[Index] = new;
	else
	{
		if (strcmp(ht->array[Index]->key, key) == 0)
			strcpy(ht->array[Index]->value, value);
	}
	return (1);
}

#include "hash_tables.h"
/**
 * key_index - gets the index of some data given the key
 * @key: key
 * @size: size of the hash table
 * Return: Index of the data item
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

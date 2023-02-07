#include "hash_tables.h"
/**
 * hash - hash function
 * @str: string input
 * Return: hash value
 */
unsigned long hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;
	
	/* hash * 33 + c */
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return hash;
}

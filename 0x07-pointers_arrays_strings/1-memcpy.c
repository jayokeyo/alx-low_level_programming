#include "main.h"
/**
 * _memcpy - copies data from src to dest
 * @dest: address to destination memory location
 * @src: address to source memory location
 * @n: number of bytes of src to be copied on dest
 * Return: Always the address of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}

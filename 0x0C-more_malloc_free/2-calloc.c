#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to the allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	int *ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(ptr + i) = 0;
	return (ptr);
}

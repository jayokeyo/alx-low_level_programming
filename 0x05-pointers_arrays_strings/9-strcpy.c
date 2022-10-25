#include "main.h"
/**
 * *_strcpy - copies the content of one memory location to a buffer
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: Address to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
		dest[i] = src[i];
	return (*dest);
}

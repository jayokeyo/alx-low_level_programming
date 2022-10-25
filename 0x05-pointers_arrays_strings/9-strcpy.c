#include "main.h"
/**
 * *_strcpy - copies the content of one memory location to a buffer
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: Address to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; src[i] != '\0'; i++)
		len++;
	if (len > 0)
	{
		for (i = 0; src[i] != '\0'; i++)
			dest[i] = src[i];
		dest[i + 1] = '\0';
	}
	else
		dest[0] = '\0';
	return (dest);
}

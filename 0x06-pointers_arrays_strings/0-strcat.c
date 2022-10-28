#include "main.h"
#include <stdio.h>
/**
 * _strcat - contactenate a source string to a destination string
 * @src: source string
 * @dest: destination string
 * Return: Pointer to the destination string
 */
char* _strcat(char *dest, char *src)
{
	int a;
	int len = 0;

	for (a = 0; dest[a] != '\0'; a++)
		len++;
	for (a = (len + 1); src[a - len] != '\0'; a++)
		dest[a] = src[a - len];
	return (dest);
}

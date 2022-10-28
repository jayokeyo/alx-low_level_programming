#include "main.h"
/**
 * _strcat - contactenate a source string to a destination string
 *
 * @src: source string
 * @dest: destination string
 *
 * Return: dest (Pointer to the destination string)
 */
char* _strcat(char *dest, char *src)
{
	int a, len = 0;

	for (a = 0; dest[a] != '\0'; a++)
		len++;
	for (a = len; src[a - len] != '\0'; a++)
		dest[a] = src[a - len];
	return (dest);
}

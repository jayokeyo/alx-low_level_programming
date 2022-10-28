#include "main.h"
/**
 * _strncpy - copies a string onto another
 * @dest: string onto which onother is copied to
 * @src: string copied onto the other
 * Return: dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	for (i = 0; src[i] != '\0'; i++)
		len++;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (len < n)
	{
		for (i = len; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}

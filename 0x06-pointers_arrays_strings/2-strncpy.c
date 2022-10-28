#include "main.h"
/**
 * _strncpy - copies a string onto another
 * @dest: string onto which onother is copied to
 * @src: string copied onto the other
 * Return: dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}

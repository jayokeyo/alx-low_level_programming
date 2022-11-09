#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - returns the address of a newly allocated space
 * @str: string to be copied onto the newly allocated memory
 * Return: Address to newly allocated memory otherwise NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (*str)
	{
		ptr = (char *)malloc(strlen(*str));
		for (i = 0; i < strlen(*str); i++)
		{
			*(ptr + i) = *(str + i);
		}
		return (ptr);
	}
	else
		return (NULL);
}

#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - returns the address of a newly allocated space
 * @str: string to be copied onto the newly allocated memory
 * Return: Address to newly allocated memory otherwise NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	char *c = "";
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (str == NULL)
		return (NULL);
	else
	{
		if (len > 0 || *s == *c)
		{
			ptr = (char *)malloc(len + 1);
			for (i = 0; i <= len; i++)
				*(ptr + i) = str[i];
			return (ptr);
		}
		else
			return (NULL);
	}
}

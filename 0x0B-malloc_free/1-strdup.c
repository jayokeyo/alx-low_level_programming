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
	char *ret;
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (str == NULL)
		ret = NULL;
	else
	{
		if (len > 0 || *str == *c)
		{
			ptr = (char *)malloc(len + 1);
			for (i = 0; i <= len; i++)
				*(ptr + i) = str[i];
			ret = ptr;
			free(ptr);
		}
		else
			ret = NULL;
	}
	return (ret);
}

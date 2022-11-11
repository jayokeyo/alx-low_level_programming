#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - adds the first n charaters of s2 to s1
 * @s1: first string input
 * @s2: second string input
 * @n: number of charaters of s2 to be added onto s1
 * Return - pointer to the new memory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, k = 0;
	unsigned int i;
	char *ptr;

	if (s1 != NULL)
		j = strlen(s1);
	if (s2 != NULL)
		k = strlen(s2);
       	ptr = malloc(sizeof (*s1) * (j + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		*(ptr + i) = *(s1 + i);
	if (k != 0)
	{
		for (i = 0; i < n; i++)
		{
			*(ptr + j + i) = *(s2 + i);
			if (*(s2 + i) == '\0')
				break;
		}
	}
	return (ptr);
}

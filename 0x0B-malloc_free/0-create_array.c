#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array using malloc
 * @size: size of the array
 * @c: initialization character
 * Return: A pointer to the array otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *pty, *ret;

	if (size > 0)
	{
		pty = (char*)malloc(size);
		for (i = 0; i < size; i++)
			*(pty + size) = c;
		ret = pty;
	}
	else
		ret = NULL;
	free(pty);
	return (ret);
}

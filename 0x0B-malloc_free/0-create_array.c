#include "main.h"
/**
 * create_array - creates an array using malloc
 * @size: size of the array
 * @c: initialization character
 * Return: A pointer to the array otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *pty, *ret;

	if (size > 0)
	{
		pty = malloc(size);
		*pty = c;
		ret = pty;
	}
	else
		ret = NULL;
	return (ret);
}

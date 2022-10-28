#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * n: max number of bytes of src to be concatenated with dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, len = 0;

	for (a = 0; dest[a] != '\0'; a++)
		len++;
	for (a = len; a < len + n; a++)
		dest[a] = src[a - len];
	return (dest);
}

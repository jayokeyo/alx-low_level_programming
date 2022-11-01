#include "main.h"
/**
 * _memset - sets the value of a memory location to b
 * @s: pointer to memory location
 * @b: byte to be stored onto the memory location
 * @n: numner of bytes of b to be stored
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

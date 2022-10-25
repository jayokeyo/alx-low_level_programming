#include "main.h"
/**
 * rev_string - reverses an input string
 * @s: input string
 */
void rev_string(char *s)
{
	int i, j, k = 0, len = 0;
	char *r;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (j = (len - 1); j >= 0; j--)
	{
		r[k] = s[j];
		k++;
	}
	for (i = 0; i < len; i++)
		s[i] = r[i];
}

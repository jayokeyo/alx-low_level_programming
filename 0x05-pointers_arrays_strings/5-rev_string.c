#include "main.h"
/**
 * rev_string - reverses an input string
 * @s: input string
 */
void rev_string(char *s)
{
	int i, j = 0, len = 0;
	char *rev[];

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = (len -1); i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	*s = rev*;
}

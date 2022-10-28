#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: input string
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int index;

	while (s[index])
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
		index++;
	}
	return (s);
}

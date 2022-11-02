#include "main.h"
/**
 * _strchr - located the position of the first occurence of a char c
 * @s: pointer to a string
 * @c: char being searched for
 * Return: Always the address of c in string s
 */
char *_strchr(char *s, char c)
{
	int a;
	char *p;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			p = &s[a];
		}
		else
			return ('\0');
	}
	if (s == '\0' || c == '\0')
		return ('\0');
	return (p);
}

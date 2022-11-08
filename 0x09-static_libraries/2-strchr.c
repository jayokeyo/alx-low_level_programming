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
			p = '\0';
	}
	if (s[0] == '\0')
		p = '\0';
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		p = '\0';
	return (p);
}

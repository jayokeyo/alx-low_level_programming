#include "main.h"
/**
 * _strchr - located the position of the first occurence of a char c
 * @s: pointer to a string
 * @c: char being searched for
 * Return: Always the address of c in string s
 */
char *_strchr(char *s, char c)
{
	int a, d;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			d = s + a;
		else
			d = '\0';
	}
	return (d);
}

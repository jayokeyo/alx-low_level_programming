#include "main.h"
/**
 * _strlen_recursion - evaluates the length of a string
 * @s: input string
 * Return: length of string s
 */
int _strlen_recursion(char *s)
{
	static int len = 0;

	if (*s)
	{
		len++;
		s++;
		_strlen_recursion(s);
	}
	return (len);
}

#include "main.h"
/**
 * _strlen_recursion - evaluates the length of a string
 * @s: input string
 * Return: length of string s
 */
int len = 0;

int _strlen_recursion(char *s)
{

	if (*s)
	{
		len++;
		s++;
		_strlen_recursion(s);
	}
	return (len);
}

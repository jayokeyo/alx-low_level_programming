#include "main.h"
/**
 * is_palindrome - evaluates whether a string is a palindrome or not
 * @s: input string
 * Return: 1 if s is a palindrome otherwise 0;
 */

int i = 0;

int is_palindrome(char *s)
{
	int len = 0, ret;

	if (*s)
	{
		len++;
		s++;
	}
	if (len > 1)
	{
		if (i <= (len / 2) && s[i] != s[len - i - 1])
		{
			ret = 0;
		}
		else
		{
			ret = 1;
			i++;
			is_palindrome(s);
		}
	}
	else
		ret = 0;
	return (ret);
}

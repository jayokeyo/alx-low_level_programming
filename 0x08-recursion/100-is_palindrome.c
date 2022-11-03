#include "main.h"
/**
 * is_palindrome - evaluates whether a string is a palindrome or not
 * @s: input string
 * Return: 1 if s is a palindrome otherwise 0;
 */
int find_len(char *s);
int comp_char(char *s);
int is_palindrome(char *s);

int i = 0;

/**
 * find_len - evaluates the length of string s
 * @s: input string
 * Return: length of s
 */
int find_len(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * comp_char - compares corresponding in s
 * @s: input string
 * Return: 1 if s is a palindrome otherwise 0
 */
int comp_char(char *s)
{
	int len = find_len(s);
	int ret;

	if (s[i] == s[len - i])
	{
		comp_char(s);
		i++;
		ret = 1;
	}
	else
		ret = 0;
	return (ret);
}
int is_palindrome(char *s)
{
	int len = find_len(s);
	int pal;

	if (len == 0)
		pal = 1;
	if (len == 1)
		pal = 0;
	else
		pal = comp_char(s);
	return (pal);
}

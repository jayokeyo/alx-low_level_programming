#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: first input string
 * @s2: second input string
 * Return: 1 if identical otherwise 0
 */
int i = 0;
int wildcmp(char *s1, char *s2)
{
	int ret;

	if ((s1[i] == s2[i] || s2[i] == '*') && s[2] != '\0')
	{
		ret = 1;
		i++;
		wildcmp(s1, s2);
	}
	else
		ret = 0;
	return (ret);
}

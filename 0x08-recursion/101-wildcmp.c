#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: first input string
 * @s2: second input string
 * Return: 1 if identical otherwise 0
 */
int index = 0;
int wildcmp(char *s1, char *s2)
{
	if (s1[index] == s2[index] || s2[index] == "*")
	{
		ret = 1;
		index++;
		wildcmp(s1, s2);
	}
	else
		ret = 0;
	return (ret);
}

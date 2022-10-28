#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: -r if s1 less than s2, 0 if s1 == s2, r otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int a, r, len1 = 0, len2 = 0;

	for (a = 0; s1[a] != '\0'; a++)
		len1++;
	for (a = 0; s2[a] != '\0'; a++)
		len2++;
	a = 0;
	if (len1 > len2)
	{
		for (a = 0; s1[a] != '\0'; a++)
		{
			if (s1[a] == s2[a])
			{
				r = 0;
				continue;
			}
			else
			{
				r = s1[a] - s2[a];
				break;
			}
		}
	}
	return (r);
}

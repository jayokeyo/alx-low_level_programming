#include "main.h"
/**
 * _atoi - scans through a string and converts it to string
 * @s: string input
 * Return: Converted integer if string has one otherwise 0
 */
int _atoi(char *s)
{
	int a, j = 0;
	char ns1[150], ns2[150];

	ns1[0] = '+';

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '+' || s[a] == '-')
		{
			if ((ns1[0] == '+' && s[a] == '-') || (ns1[0] == '-' && s[a] == '+'))
				ns1[0] = '-';
			else
				ns1[0] = '+';
		}
		if (s[a] >= 0 && s[a] <= 9)
			break;
	}
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 0 && s[a] <= 9)
		{
			j++;
			ns1[j] = s[a];
		}
	}
	if (ns1[1] != '\0' && ns1[0] == '-')
		return ((unsigned int)ns1);
	if (ns1[1] != '\0' && ns1[0] == '+')
	{
		for (a = 1; ns1[a] != '\0'; a++)
			ns2[a - 1] = ns1[a];
		return ((unsigned int)ns2);
	}
	if (ns1[1] == '\0')
		return (0);
	return (0);
}

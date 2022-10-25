#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string input to function
 * Return: length of the string
 */
int _strlen(char *s)
{
	int sum = 0, i = 0;
	char a  = s[0];

	while (a != '\0')
	{
		sum++;
		a = s[i++];
	}
	return (sum);
}

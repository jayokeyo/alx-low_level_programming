#include "main.h"
/**
 * _strspn - checks a string for accepted characters
 * @s: pointer to input string
 * @accept: accepted characters
 * Return: Number of bytes before an unaccepted char is met
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, counter = 0, flag = 1;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b] || s[a] == ' ' || s[a] == ',')
			{
				counter++;
				break;
			}
			else
				flag = 0;
		}
		if (flag == 0)
			break;
	}
	return (counter);
}

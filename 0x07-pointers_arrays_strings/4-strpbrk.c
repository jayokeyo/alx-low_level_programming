#include "main.h"
/**
 * _strpbrk - searches a string for any matching byte
 * @s: pointer to input string
 * @accept: set of accepted bytes
 * Return: Pointer to location of first accepted byte
 */
char *_strpbrk(char *s, char *accept)
{
	int a,b, counter = 0, flag = 1;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				flag = 1;
				break;
			}
			else
				flag = 0;
		}
		if (flag == 0)
			counter++;
		else
			break;
	}
	return (s + (void *)counter);
}

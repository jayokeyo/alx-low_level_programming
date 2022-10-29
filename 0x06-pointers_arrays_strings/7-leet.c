#include "main.h"
/**
 * leet - encodes an input string
 * @s: input string
 * Return: encoded string
 */
char *leet(char *s)
{
	int index, a, len = 0;
	char list1[] = {'A', 'E', 'O', 'T', 'L'};
	char list2[] = {4, 3, 0, 7, 1};

	for (a = 0; s[a] != '\0'; a++)
		len++;
	if (len > 0)
	{
		while (s[index])
		{
			for (a = 0; a < 5; a++)
			{
				if (s[index] == list1[a] || s[index] == (list1[a] + 32))
					s[index] = list2[a];
			}
			index++;
		}
	}
	return (s);
}

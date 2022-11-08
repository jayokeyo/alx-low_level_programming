#include "main.h"
/**
 * _strstr - scans a string for a substring
 * @haystack: string being scanned
 * @needle: the substring
 * Return: Pointer to the location of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a, c, placeholder = 0, len = 0;
	long int d, counter = 0;

	for (a = 0; needle[a] != '\0'; a++)
		len++;
	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] != needle[0])
				counter++;
		else
		{
			for (c = 1; c < len; c++)
			{
				if (haystack[a + c] == needle[c])
				{
					placeholder = 1;
					continue;
				}
				else
				{
					placeholder = 0;
					break;
				}
			}
		}
		if (placeholder == 1)
		{
			d = (long int)haystack + counter;
			break;
		}
	}
	if (placeholder == 0 || haystack[0] == '\0' || needle[0] == '\0')
		return ('\0');
	else
		return ((char *)d);
}

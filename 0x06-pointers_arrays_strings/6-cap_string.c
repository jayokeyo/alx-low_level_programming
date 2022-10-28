#include "main.h"
/**
 * cap_string - capitalizes an input string
 * @s: input string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int index = 0;

	while (s[index])
	{
		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    str[index - 1] == 0)
			s[index] -= 32;
		index++;
	}
	return (s);
}

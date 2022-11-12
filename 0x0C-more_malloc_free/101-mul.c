#include "main.h"
#include <stdlib.h>
/**
 * print_string - prints input string
 * @s: input string
 */
void print_string(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
/**
 * print_digit - prints input digit
 * @num: input integer
 */
void print_digit(int num)
{
	int n, tth, hth, th, hun, tens, rem;

	n = num;
	hth = n / 100000;
	if (hth == 0)
	{
		rem = n % 100000;
		tth = rem / 10000;
		if (tth == 0)
		{
			rem = rem % 10000;
			th = rem / 1000;
			if (th == 0)
			{
				rem = rem % 1000;
				hun = rem / 100;
				if (hun == 0)
				{
					rem = rem % 100;
					tens = rem / 10;
					if (tens == 0)
					{
						_putchar((rem % 10) + '0');
						_putchar('\n');
					}
					else
					{
						_putchar(tens + '0');
						_putchar((rem % 10) + '0');
						_putchar('\n');
					}
				}
				else
				{
					_putchar(hun + '0');
					rem = rem % 100;
					_putchar((rem / 10) + '0');
					_putchar((rem % 10) + '0');
					_putchar('\n');
				}
			}
			else
			{
				_putchar(th + '0');
				rem = n % 1000;
				_putchar((rem / 100) + '0');
				rem = rem % 100;
				_putchar((rem / 10) + '0');
				_putchar((rem % 10) + '0');
				_putchar('\n');
			}
		}
		else
		{
			_putchar(tth + '0');
			rem = n % 10000;
			_putchar((rem / 1000) + '0');
			rem = rem % 1000;
			_putchar((rem / 100) + '0');
			rem = rem % 100;
			_putchar((rem / 10) + '0');
			_putchar((rem % 10) + '0');
			_putchar('\n');
		}
	}
	else
	{
		_putchar(hth + '0');
		rem = n % 100000;
		_putchar((rem / 10000) + '0');
		rem = rem % 10000;
		_putchar((rem / 1000) + '0');
		rem = rem % 1000;
		_putchar((rem / 100) + '0');
		rem = rem % 100;
		_putchar((rem / 10) + '0');
		_putchar((rem % 10) + '0');
		_putchar('\n');
	}
}
/**
 * is_digit - checks if elements of an array are all digits
 * @num: pointer to array of integers
 * Return: 0 if all elements are digits else 1
 */
int is_digit(char *num)
{
	int ret;

	while (*num)
	{
		if (*num >= '0' && *num <= '9')
		{
			ret = 0;
			num++;
		}
		else
		{
			ret = 1;
			break;
		}
	}
	return (ret);
}
int main(int argc, char *argv[])
{
	int i, r;

	for (i = 1; i < argc; i++)
	{
		r = is_digit(argv[i]);
		if (r == 1)
			break;
	}
	if (r == 0 && argc == 3)
	{
		print_digit(atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		print_string("Error\n");
		exit(98);
	}
	return (0);
}

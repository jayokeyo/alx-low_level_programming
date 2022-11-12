#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * mul - multiplies two numbers
 * @num: array of two integers
 * Return: num[0] * num[1]
 */
void print_string(char *s);
void print_digit(int num);
int is_digit(char *num);
int mul(char *arg);
char _putchar(char c);

int mul(char *arg)
{
	int n, d, len = 0;

	for (n = 1; arg[n]; n++)
	{
		len++;
		d = is_digit(arg[n]);
		if (d == 1)
			break;
	}

	if (len != 2 || d == 0 || arg[1] == NULL || arg[2] == NULL)
	{
		print_string("Error\n");
		exit(98);
	}
	else
		print_digit(atoi(arg[1]) * atoi(arg[2]));
}
/**
 * print_string - prints input string
 * @s: input string
 */
void print_string(char *s)
{
	int i = 0;

	while (*s)
	{
		_putchar(*(s + i));
		i++;
		s++;
	}
}
/**
 * print_digit - prints input digit
 * @num: input integer
 */
void print_digit(int num)
{
	int n, th, hun, tens, rem;

	n = num;
	th = n / 1000;
	if (th == 0)
	{
		rem = n % 1000;
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
/**
 * is_digit - checks if elements of an array are all digits
 * @num: pointer to array of integers
 * Return: 0 if all elements are digits else 1
 */
int is_digit(char *num)
{
	int i = 0, ret;

	while (*num)
	{
		if (*(num + i) >= 0 && *(num + i) <= 99999)
			ret = 0;
		else
		{
			ret = 1;
			break;
		}
		i++;
	}
	return (ret);
}
int main(int argc, char *argv[])
{
	char *s, i;

	f0r (i = 1; i < argc)
		*(s + i - 1) = argv[i];
	mul(s);
	return (0);
}

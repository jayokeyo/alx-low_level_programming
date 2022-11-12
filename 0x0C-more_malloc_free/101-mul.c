#include "main.h"
/**
 * mul - multiplies two numbers
 * @num: array of two integers
 * Return: num[0] * num[1]
 */
void print_string(char *s);
void print_digit(int num);
int is_digit(int *num);
int Number_of_arguments(int *num);
int mul(int *num);

int mul(int *num)
{
	int n, d;

	n = Number_of_arguments(num);
	d = is_digit(num);

	if (n != 2 || d != 0 || num[0] == NULL || num[1] == NULL)
	{
		print_string("Error\n");
		exit(98);
	}
	else
		print_digit(num[0] * num[1]);
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
void print_digit(int *num)
{
	int n, th, hun, tens, rem;

	n = *num;
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
 * Number_of_arguments - evaluates the number of elements of an array
 * @num: pointer to array of integers
 * Return: length of array
 */
int Number_of_arguments(int *num)
{
	int i = 0, len = 0;

	while (num[i])
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * is_digit - checks if elements of an array are all digits
 * @num: pointer to array of integers
 * Return: 0 if all elements are digits else 1
 */
int is_digit(int *num)
{
	int len, n, i, ret;
	len = Number_of_arguments(num);

	for (i = 0; i < len; i++)
	{
		n = *(num + i);
		if (n >= 0 && n <= 99999)
			ret = 0;
		else
		{
			ret = 1;
			break;
		}
	}
	return (ret);
}

#include <stddef.h>
#include "lists.h"

/**
 * print - prints a string
 * @str: string to be printed
 */
void print(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
/**
 * print_int - prints an integer
 * @len: integer to be printed
 */
void print_int(int len)
{
	int num, k = 1, div = 10;
	
	num = len;

	while (div >= 10)
	{
		k *= 10;
		div = num / k;
	}
	while (len > 9)
	{
		div = len / k;
		len %= k;
		_putchar(div + '0');
		k /= 10;
	}
	_putchar(len + '0');
}
/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t list
 * Return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			print("[0] (nil)\n");
		else
		{
			_putchar('[');
			print_int(h->len);
			_putchar(']');
			_putchar(' ');
			print(h->str);
			_putchar('\n');
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}

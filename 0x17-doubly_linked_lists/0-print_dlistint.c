#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints values stored in a doubly linked list
 * @h: head
 * Return: Number of nodes in the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}

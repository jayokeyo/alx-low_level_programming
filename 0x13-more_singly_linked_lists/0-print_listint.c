#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the linked list
 * Return: number of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}

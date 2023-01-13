#include "lists.h"
/**
 * dlistint_len - evaluates the length of a doubly linked list
 * @h: head
 * Return: Number of nodes in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	
	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}

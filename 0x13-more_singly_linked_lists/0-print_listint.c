#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the linked list
 * Return: number of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t n;
	listint_t *head = h;

	while (head != NULL)
	{
		n++;
		head = h->next;
	}
	return (n);
}

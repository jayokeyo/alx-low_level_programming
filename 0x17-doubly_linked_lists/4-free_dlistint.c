#include "lists.h"
/**
 * free_dlistint - frees space allocated to a doubly-linked list.
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

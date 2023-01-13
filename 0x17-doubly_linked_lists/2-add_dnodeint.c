#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t new;

	new->next = *head;
	*head = &new;
	new->previous = NULL;
	new->n = n;
	return (head);
}

#include "lists.h"
#include <stddef.h>
/**
 * add_nodeint - adds a node to a singly linked list
 * @head: current head of the singly linked list
 * @n: integer to be added to the singly linked list
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	
	ptr = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (ptr == NULL)
	{
		*head = new;
		return (*head);
	}
	while (ptr)
		ptr = ptr->next;
	ptr->next = new;

	return (*head);
}

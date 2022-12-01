#include "lists.h"
/**
 * add_nodeint - adds a node to a singly linked list
 * @head: current head of the singly linked list
 * @n: integer to be added to the singly linked list
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = head;
	head = new;

	return (head);
}

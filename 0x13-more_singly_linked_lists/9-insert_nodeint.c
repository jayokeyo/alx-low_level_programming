#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node element at a particular index
 * @head: head of the list
 * @idx: index
 * @n: data element of node
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	for (i = 0; i < idx; i++)
		*head = (*head)->next;
		if (*head == NULL && i != (idx - 1))
			return (NULL);
	tmp = (*head)->next;
	(*head)->next = new;
	new->n = n;
	new->next = tmp;
	return (*head);
}

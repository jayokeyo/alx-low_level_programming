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
	listint_t *new, *tmp, *cpy;
	unsigned int i;

	cpy = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i <= idx; i++)
	{
		cpy = cpy->next;
		if (cpy == NULL && i != (idx - 1))
			return (NULL);
	}
	new->n = n;
	tmp = cpy->next;
	cpy->next = new;
	new->next = tmp;
	return (*head);
}

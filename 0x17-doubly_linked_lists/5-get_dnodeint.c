#include "lists.h"
/**
 * get_dnodeint_at_index - Locates a node
 * @head: head
 * @index: position of the node to locate.
 * Return: pointer to node if node exists otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

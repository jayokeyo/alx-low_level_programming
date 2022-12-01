#include "lists.h"
/**
 * delete_nodeint_at_index - deletes element at specified index
 * @head: head of list
 * @index: index
 * Return: 1 (success) otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	if (*head == NULL)
		return (-1);
	for (i = 0; i < index; i++)
	{
		*head = (*head)->next;
		if (*head == NULL && i != (index - 1))
			return (-1);
	}
	tmp = (*head)->next;
	(*head)->next = (*head)->next->next;
	free(tmp);
	return (1);
}


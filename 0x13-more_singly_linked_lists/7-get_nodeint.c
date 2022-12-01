#include "lists.h"
/**
 * get_nodeint_at_index - fetches the nth element of a linked list
 * @head: head of the linked list
 * @index: index of the return element in the linked list
 * Return: pointer to the nth element of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL && i != (index - 1))
			return (NULL);
	}
	return (head);
}

#include "lists.h"
/**
 * pop_listint - removes the first element of a linked list
 * @head: head of the list;
 * Return: value of the popped element
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	ret = tmp->n;
	free(tmp);
	return (ret);
}

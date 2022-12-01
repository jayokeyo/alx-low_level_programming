#include "lists.h"
/**
 * free_listint2 - frees memory allocated to linked list
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	head = NULL;

}

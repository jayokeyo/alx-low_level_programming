#include "lists.h"
/**
 * free_listint2 - frees memory allocated to linked list
 * @head: head of linked list
 */
void free_listint2(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	head = NULL;

}

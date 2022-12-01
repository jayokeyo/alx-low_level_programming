#include "main.h"
#include <stddef.h>
/**
 * free_listint - frees memory allocated to linked list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}

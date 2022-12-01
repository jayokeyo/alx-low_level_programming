#include "lists.h"
/**
 * sum_listint - sums up all the data elements of a linked list
 * @head: ead of the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	while (head)
	{
		tmp = head;
		head = head->next;
		sum += tmp->n;
	}
	return (sum);
}

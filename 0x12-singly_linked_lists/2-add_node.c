#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: address of the new element (Success) else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *d;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	d = strdup(str);
	if (d == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 9; str[len]; len++)
		len++;
	new->str = d;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}

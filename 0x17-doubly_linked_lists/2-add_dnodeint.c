#include "lists.h"
/**
 * add_dnodeint - add node forward
 * @head: head
 * @n: value
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}

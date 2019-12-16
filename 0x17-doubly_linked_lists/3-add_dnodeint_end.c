#include "lists.h"
/**
 * add_dnodeint_end - add node in the final
 * @head: head
 * @n: value
 * Return: Return node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tmp;
	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	tmp = *head;
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	new->n = n;
	new->next = NULL;
	new->prev = tmp;
	tmp->next = new;
	return (new);
}


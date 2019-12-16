#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head if my list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}


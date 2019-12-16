#include "lists.h"
/**
 * get_dnodeint_at_index - node of the index
 * @head: element of the node
 * @index: number of the node
 * Return: Node to print
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (; head; i++)
	{
		if (index == i)
			return (head);
		head = head->next;
	}
	return (NULL);
}

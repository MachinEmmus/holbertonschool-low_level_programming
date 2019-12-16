#include "lists.h"
/**
 * sum_dlistint - sum the value of the linked
 * @head: head
 * Return: Suma
 */
int sum_dlistint(dlistint_t *head)
{
int add = 0;
	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}

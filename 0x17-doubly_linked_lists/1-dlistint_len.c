#include "lists.h"
/**
 * dlistint_len - Count number of nodes in a linked list
 * @h: this is the head
 * Return: Number of nodes print
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
	if (!h)
		return (count);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

#include "lists.h"
/**
 * list_len - len of linked list
 * @h: liked list input
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
unsigned int i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}


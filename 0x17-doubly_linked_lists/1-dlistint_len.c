#include "lists.h"
/**
 * 
 *
 *
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

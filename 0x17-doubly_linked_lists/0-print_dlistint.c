#include "lists.h"
/**
 * print_dlistint - print a linked list
 * @h: this is the head of my linked list
 * Return: Number of linked list print
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
	if (!h)
		return (count);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

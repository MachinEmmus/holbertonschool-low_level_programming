#include "lists.h"
/**
 * print_list - prints all elements of my linked list
 * @h: liked list input
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
unsigned int i;
	while (h)
	{
		if (!h->str)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

#include "lists.h"
/**
 * free_list - free a linked list
 * @head: pointer to my linked list
 */
void free_list(list_t *head)
{
list_t *tmp;
	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head);
}

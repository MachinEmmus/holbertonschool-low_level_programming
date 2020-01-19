#include "lists.h"
/**
 * add_node - add new node in the first position
 * @head: pointer to my list
 * @str: is a new value of name
 * Return: New node or Null
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *tmp_head;
int i = 0;
tmp_head = *head;
	
	if (!head)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	
	while (str[i])
		i++;

	if (!*head)
	{
		new_node->str = strdup(str);
		new_node->len = i;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	while (tmp_head->next != NULL)
		tmp_head = tmp_head->next;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	tmp_head->next = new_node;
	return (*head);
}

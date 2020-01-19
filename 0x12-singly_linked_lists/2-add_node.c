#include "lists.h"
/**
 * add_node - add new node in the first position
 * @head: pointer to my list
 * @str: is a new value of name
 * Return: New node or Null
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int i = 0;
	if (!head)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	while (str[i])
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

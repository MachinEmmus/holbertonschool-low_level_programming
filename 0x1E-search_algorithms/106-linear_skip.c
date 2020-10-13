#include "search_algos.h"

/**
 * linear_skip - search value in a sorted skip list of int
 * @list: is a pointer
 * @value: value to search
 * Return: a pointer node
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head = NULL, *before = NULL;

	before = list;
	head = list;

	if (!list)
		return (NULL);

	while (head->n < value && head->next)
	{
		before = head;
		if (head->express)
		{
			head = head->express;
			printf("Value checked at index [%ld] = [%d]\n", head->index, head->n);
		}
		else
			for (; head->next; head = head->next)
				;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	before->index, head->index);

	while (before->n < value && before->index < head->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", before->index, before->n);
		before = before->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", before->index, before->n);
	return (before->n == value ? before : NULL);
}

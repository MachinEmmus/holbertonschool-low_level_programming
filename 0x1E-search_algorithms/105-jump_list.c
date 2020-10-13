#include "search_algos.h"

/**
 * jump_list -searched value sorted in the list
 * @list: pointer to the head
 * @size: nodes
 * @value: value to search
 * Return: NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, step = 0;
	listint_t *before, *head;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	before = head = list;
	while (head->index < size - 1 && head->n < value)
	{
		before = head;
		for (i += step ; head->index < i; head = head->next)
		{
			if (head->index == size - 1)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", head->index, head->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	before->index, head->index);

	for (; before->index < head->index && before->n < value;
	before = before->next)
		printf("Value checked at index [%ld] = [%d]\n",
		before->index, before->n);
	printf("Value checked at index [%ld] = [%d]\n", before->index, before->n);

	return (before->n == value ? before : NULL);
}

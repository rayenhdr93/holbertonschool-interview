#include <stdio.h>
#include <stdlib.h>

#include "search.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: list
 * @value: value
 * Return: return
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = NULL;

	if (!list)
		return (NULL);

	node = list;
	while (node->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		node->express->index, node->express->n);
		if (node->express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					node->index, node->express->index);
			break;
		}
	node = node->express;
	}

	if (!node->express)
	{
		list = node;
		while (list->next)
			list = list->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
				node->index, list->index);
	}

	list = node;

	while (list != node->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}

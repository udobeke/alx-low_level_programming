#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value contained in a skip list
 * @list: pointer to the head of the skip list to traverse
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if list
 * is NULL or if value not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *express = NULL;

	if (!list)
		return (NULL);

	temp = list;
	express = temp->express;

	while (express && express->n < value)
	{
		temp = express;
		express = express->express;
		printf("Value checked at index [%lu] = [%i]\n",
		       temp->index, temp->n);
	}

	if (!express)
	{
		temp = temp->next;
		while (temp)
		{
			printf("Value checked at index [%lu] = [%i]\n",
			       temp->index, temp->n);
			if (temp->n == value)
				return (temp);
			temp = temp->next;
		}
	}
	else
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       express->index, express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temp->index, express->index);
		temp = temp->next;
		while (temp && temp->n < value)
		{
			printf("Value checked at index [%lu] = [%i]\n",
			       temp->index, temp->n);
			temp = temp->next;
		}
		if (temp && temp->n == value)
			return (temp);
	}
	return (NULL);
}


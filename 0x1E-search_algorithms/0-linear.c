#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 *                 the linear search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located or -1 if it is not found
 *
 * Description: Every time a value in the array is compared to the value
 *              being searched, the function prints the value being checked.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
			}
	}
	return (-1);
}

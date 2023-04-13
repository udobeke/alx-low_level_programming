#include <stdio.h>
#include"search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if it is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, i, left = 0, right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");

			if (i == right)
				printf("\n");
		}
		mid = (left + right) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

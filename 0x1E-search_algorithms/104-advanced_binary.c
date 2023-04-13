#include <stdio.h>
#include "search_algos.h"

int binary_search_recursion(int *array, int value, size_t low, size_t high);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the binary search algorithm with recursion
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if value is not present or array is NULL
 */
int binary_search_recursion(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		if (i == high)
			printf("\n");
	}
	mid = (low + high) / 2;

	if (value == array[low])
		return (low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value, mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value, low, mid));
	}
	return (-1);
}

/**
* Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}

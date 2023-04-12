#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 *                 the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if it exists, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i); /* Return the index of the value found */
    }

    /* Return -1 if the value is not found */
    return (-1);
}

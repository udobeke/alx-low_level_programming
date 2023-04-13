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
    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (value == array[i])
            return (int)i;
    }
    return -1;
}

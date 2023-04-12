#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

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
int advanced_binary(int *array, size_t size, int value)
{
    size_t i, half;
    int tmp;

    if (array == NULL || size == 0)
        return (-1);

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
        printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");

    half = (size - 1) / 2;

    if (array[half] == value)
    {
        if (size == 1 || array[half - 1] < value)
            return (half);
    }

    else if (array[half] < value)
    {
        tmp = advanced_binary(array + half + 1, size - half - 1, value);
        if (tmp != -1)
            return (half + 1 + tmp);
    }

    else
        return (advanced_binary(array, half + 1, value));

    return (-1);
}


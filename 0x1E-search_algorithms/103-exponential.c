#include <stdio.h>
#include "search_algos.h"
/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    /* Handle NULL pointer */
    if (array == NULL)
        return -1;

    /* Initialize variables */
    size_t bound = 1;
    int low = 0, high = 0;

    /* Find the range where the value may be present */
    while (bound < size && array[bound] < value) {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        low = bound;
        bound *= 2;
    }

    /* Set the upper bound of the range */
    high = bound < size ? bound : size - 1;

    /* Perform binary search within the found range */
    while (low <= high) {
        /* Print the current subarray */
        printf("Searching in array: ");
        for (size_t i = low; i <= (int)high; ++i)
 {
            printf("%d", array[i]);
            if ((int)i < high)
                printf(", ");
        }
        printf("\n");

        /* Calculate the middle index */
        int mid = (low + high) / 2;

        /* If the value is found, return the index */
        if (array[mid] == value)
            return mid;

        /* If the value is in the left half of the range, search there */
        if (array[mid] > value)
            high = mid - 1;

        /* If the value is in the right half of the range, search there */
        else
            low = mid + 1;
    }

    /* If the value was not found, return -1 */
    return -1;
}


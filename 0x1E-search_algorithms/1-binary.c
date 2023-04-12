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
    size_t left = 0, right = size - 1;

    if (array == NULL)
        return (-1);

    while (left <= right) {
        size_t mid = (left + right) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}

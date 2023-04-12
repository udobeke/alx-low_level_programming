#include"search_algos.h"
#include <math.h>

/**
 * jump_search - Jump search algorithm implementation
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 *
 * Description: assume that array will be sorted in ascending order
 * If value is not present in array or if array is NULL, return -1
 * Use the square root of the size of the array as the jump step.
 * and the sqrt() function included in <math.h>
 * Every time you compare a value in the array to the value you are
 * searching for, you have to print this value
 */

#include <math.h>

int jump_search(int *array, size_t size, int value)
{
    size_t jump_step = sqrt(size);
    size_t prev = 0;
    size_t curr = jump_step;

    if (array == NULL || size == 0)
        return -1; /* Array is NULL or empty, value not found */

    while (curr < size && array[curr] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += jump_step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

    while (prev < size)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return prev;
        prev++;
    }

    return -1; /* Value not found */
}


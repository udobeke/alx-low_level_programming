#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Jump search algorithm implementation
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located or -1 if not found
 *
 * Description: assume that array will be sorted in ascending order
 * If value is not present in array or if array is NULL, return -1
 * Use the square root of the size of the array as the jump step.
 * Every time you compare a value in the array to the value you are
 * searching for, you have to print this value
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump_step, i, bl;

    if (!array || size == 0)
        return (-1);

    jump_step = sqrt(size);
    for (i = 0; i < size; i += jump_step)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] >= value || i + jump_step >= size)
        {
            bl = i - jump_step;
            printf("Value found between indexes [%lu] and [%lu]\n", bl, i);
            for (; bl <= i && bl < size; bl++)
            {
                printf("Value checked array[%lu] = [%d]\n", bl, array[bl]);
                if (array[bl] == value)
                    return (bl);
            }
            break;
        }
    }
    return (-1);
}

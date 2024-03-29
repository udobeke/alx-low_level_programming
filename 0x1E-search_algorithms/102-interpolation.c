#include"search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value) {
    size_t low = 0;
    size_t high = size - 1;
    size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

    while (low <= high && value >= array[low] && value <= array[high]) {
        printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
        if (array[pos] == value) {
            return pos;
        }
        if (array[pos] < value) {
            low = pos + 1;
        }
        if (array[pos] > value) {
            high = pos - 1;
        }
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
    }
    printf("Value checked array[%ld] is out of range\n", pos);
    return -1;
}

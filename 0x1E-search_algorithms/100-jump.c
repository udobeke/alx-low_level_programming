#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Jump search algorithm implementation
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *
 * Description: assume that array will be sorted in ascending order
 *              If value is not present in array or if array is NULL, return -1
 *              Use the square root of the size of the array as the jump step.
 *              and the sqrt() function included in <math.h>
 *              Every time you compare a value in the array to the value you are
 *              searching for, you have to print this value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (!array || !size)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/*jump = jump < size - 1 ? jump : size - 1;*/

	if (jump < size - 1)
		jump = jump;
	else
		jump = size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/*return (array[i] == value ? (int)i : -1);*/
	if (array[i] == value)
		return ((int)i);
	else
		return (-1);
}

#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * using the jump search algorithm
 *
 * @array: pointer to first element in array
 * @size: of array
 * @value: value to search for
 * Return: -1 if not found, index of value if found
 */

int jump_search(int *array, size_t size, int value)
{
    size_t left = 0, right = 0, i;
    size_t jump = sqrt(size);

    if (!array || size == 0 || !value)
    {
        return (-1);
    }

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", right, array[right]);
        left = right;
        if ((right + jump) < size - 1)
            right += jump;
        else
            right = size - 1;

        if (right == size - 1 || right + jump > size -1)
            break;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", left, right);
    for (i = left; i <= right; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return ((int)i);

        if (i == right)
            break;
    }
    return (-1);
}

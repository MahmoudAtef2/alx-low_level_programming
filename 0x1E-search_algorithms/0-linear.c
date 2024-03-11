#include "search_algos.h"

/**
 * linear_search - function that search linear
 * @array: stored data in array
 * @size: size of the array
 * @value: the value to be searched
 * Return: return the index of value found else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
		{
			return (i);
		}
		array++;
	}
	return (-1);
}

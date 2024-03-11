#include "search_algos.h"

/**
* interpolation_search - function that interpolation_search
* @array: stored data in array
* @size: size of the array
* @value: the value to be searched
* Return: return the index of value found else -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l, h;

	if (array == NULL || size == 0)
		return (-1);
	l = 0;
	h = size - 1;
	while (l < h)
	{
		pos = l + (((value - array[l]) * (h - l)) / (array[h] - array[l]));
		if (pos > h)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			h = pos - 1;
		else
			l = pos + 1;
	}
	return (-1);
}

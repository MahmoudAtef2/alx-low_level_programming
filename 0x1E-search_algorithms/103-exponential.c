#include "search_algos.h"

/**
* custome_binary_search - function that custome_binary_search
* @array: stored data in array
* @size: size of the array
* @value: the value to be searched
* @l: low index
* @h: hight index
* Return: return the index of value found else -1
*/

int custome_binary_search(int *array, size_t size, int value,

						size_t l, size_t h)
{
	size_t halt, i;

	if (!array || size == 0)
		return (-1);

	while (l <= h)
	{
		i = l;
		printf("Searching in array: ");
		while (i <= h)
		{
			printf("%d", array[i]);
			if (i < h)
				printf(", ");
			i++;
		}
		printf("\n");

		halt = (h + l) / 2;
		if (array[halt] == value)
			return (halt);
		else if (array[halt] > value)
			h = halt - 1;
		else
			l = halt + 1;
	}
	return (-1);
}

/**
* exponential_search - function that exponential_search
* @array: stored data in array
* @size: size of the array
* @value: the value to be searched
* Return: return the index of value found else -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1, end;

	if (array == NULL || size == 0)
		return (-1);

	while (index < size && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index *= 2;
	}

	end = (index < size) ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", index / 2, end);
	return (custome_binary_search(array, size, value, index / 2, end));
}

#include "search_algos.h"

/**
* binary_search - function that search binary
* @array: stored data in array
* @size: size of the array
* @value: the value to be searched
* Return: return the index of value found else -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l, h, halt, i;

	if (!array || size == 0)
		return (-1);
	h = size - 1;
	l = 0;
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

#include "search_algos.h"

/**
 * binary_search - fct that searches for a value using binary search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int index, start, end, mid;

	if (array == NULL)
		return (-1);

	start = 0;
	end = (int)size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (index = start; index <= end; index++)
		{
			if (index == end)
				printf("%d\n", array[index]);
			else
				printf("%d, ", array[index]);
		}
		
		mid = start + (end - start) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}

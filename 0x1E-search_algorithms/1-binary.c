#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 * Return: index containing value, or -1 if value not found or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int less, middle, high;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	less = 0;
	high = size - 1;

	while (less <= high)
	{
		middle = (less + high) / 2;

		printf("Searching in array: ");
		for (i = less; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");

		if (array[middle] < value)
			less = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else
			return (middle);
	}

	return (-1);
}

#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: first value
 * @max: second value
 * Return: null, if min>max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}
	return (array);
}

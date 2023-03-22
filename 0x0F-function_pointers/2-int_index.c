#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: a pointer to an array of integers
 * @size: the size of the array
 * @cmp: a pointer to a function that takees an integeer parameter
 * Return: 0 if integer does not match, non-zero int if it does
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size && cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

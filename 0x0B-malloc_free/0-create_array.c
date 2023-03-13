#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an arr of chars, & initialize it with a specific char.
 * @size: size of the array to be created
 * @c: the character to initialise the array with
 * Return: NULL if size = 0,
 * a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;


	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

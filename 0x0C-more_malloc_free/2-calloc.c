#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that creates an array of integers.
 * @nmemb: first param
 * @size: totsl size of the array
 * Return: null If nmemb = 0, size = 0, or the function fails
 * otherwise return a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}

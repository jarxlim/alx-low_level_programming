#include "main.h"
/**
 * binary_to_uint - function that converts a binary num to an unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * Return: the converted num, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numba = 0;
	int i = 0;

	if (b[i] == '\0')
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			numba = numba << 1;
		}
		else if (b[i] == '1')
		{
			numba = (numba << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (numba);
}

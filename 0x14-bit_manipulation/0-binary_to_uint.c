#include "chike.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary num to an unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * Return: the converted num, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	size_t index = 0;

	if (!b)
	{
		return (0);
	}
	for (index = 0; b[index] != '\0'; ++index)
	{
		if (b[index] == '0')
		{
			num = num << 1;
		}
		else if (b[index] == '1')
		{
			num = (num << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (num);
}

#include "main.h"
/**
 * flip_bits - returns a num of bits to flip to get from 1 num to another
 * @n: original value
 * @m: the number to get when flipped
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, size = 0;

	for (dif = n ^ m; dif != 0; dif >>= 1)
	{
		size = size + (dif & 1);
	}
	return (size);
}
